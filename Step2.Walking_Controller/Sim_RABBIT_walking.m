function [t_hist, y_hist, info, err] = Sim_RABBIT_walking( q0, dq0, p1, p2, plot_flag )
    close all;
% ============================================
% walking controller
% 
% Error code (err):
% 0 - success
% 1 - step length @ TD is too large compared to p2
% 2 - step length @ TD is too small compared to p2 (not including 3)
% 3 - theta > pi @ TD
% 4 - fall backward (dth = 0)
% 5 - fall forward (possibly with event function failure)
% 6 - unable to complete next half step - multiple mid-stance detected => maybe t(end) too small
% 7 - unable to complete next half step - fall forward
% 8 - others
% ============================================

%% Initialization
params = GenParams_RABBIT;
rabbit = RABBIT(which('five_link_walker.urdf'));
rabbit.configureDynamics('DelayCoriolisSet',false);
mu = 0.15;
steps = 5;
MaxTime = 1;
%% If no IC is specified, pick one
if nargin == 0
    
    p1 = 0.55;
    p2 = 0.35;
    
    
    [ Bez_pts, ptime ] = FindBezTraj( p1, p2 );
    [ q0, dq0 ] = EvalBezier( Bez_pts, 0.5 );
    dq0 = dq0 / ptime;
    
    [p_hip, v_hip] = Joint2Hip( q0, dq0, params );
    q0 = [ p_hip; q0 ];
    dq0 = [ v_hip; dq0 ];
end

if nargin < 5
    plot_flag = 1;
end

%% Current desired trajectory
th0 = th0_fit( [p1; p2] );
th_len = th_len_fit( [p1; p2] );
[q_traj_des, ptime] = FindBezTraj( p1, p2 );

%% best guess for previous trajectory
[q_traj_des_m, km] = Midstance_y2traj( [q0(3:7);dq0(3:7)] );
th0_m = th0_fit( km(:) );
th_len_m = th_len_fit( km(:) );

%% Setup simulation
y0 = [ q0; dq0 ];


Dyn = @( t, y ) SecondOrderODE( y, PD_controller( t, y ) );
Fyn = @( t, y ) F_ext( y, PD_controller( t, y ) );
% Integrate ODE forward
current_time = 0;
t_rel_hist = [];
t_hist = [];
y_hist = [];
trans_hist = 0;
flag_smoothPD = 1;

s0 = Find_s0( y0 );

Ntrans = 0;     % number of transitions
err = 0;

Ext_F = [];
IsSlip = [];
tout_ = [];
while current_time < MaxTime - 1e-3
    
    options = odeset('Events', @EvtFunc, 'RelTol', 1e-7, 'AbsTol', 1e-7 );
    [tout,yout,te,ye,ie] = ode45(Dyn,[0,5],y0,options); %te: time of the event, ye solution at the time of the event, ie index of the triggered event
    
    % calculate force
    last = length(Ext_F);
    
    if isempty(tout_)
        t_last = 0;
    else
        t_last = tout_(end);
    end
    tout_ = [tout_;tout+t_last];
    for jj = 1:length(tout)
        [reactionF,isSliping] = Fyn(tout(jj),yout(jj,:)');
        Ext_F= [Ext_F; reactionF' ];
        IsSlip= [IsSlip; isSliping]; 
    end
    
    
    Ntrans = Ntrans + 1;
    info(Ntrans).time = tout + current_time;
    info(Ntrans).state = yout;
    info(Ntrans).ie = ie;
    info(Ntrans).k = [p1, p2];
    
    t_hist = [t_hist; info(Ntrans).time];
    y_hist = [y_hist; info(Ntrans).state];
    current_time = tout(end)+current_time;
    
    if isempty(ie)
        err = 8;
        break;
    end
%     Ntrans = 1;
    switch Ntrans
        case 1      % either 1-TD, 2-MSFW, 3-MSBW, or others
            switch ie
                case 1
                    flag_smoothPD = 0;
                    
                    [ p_foot2 ] = Joint2LeftToePos( yout(end,3:7).', params );
                    if (p_foot2(1) < 0)
                        err = 4;
%                         break;
                    end
                    y0 = ResetMap( yout(end,:).' );
                    if (p_foot2(1) > p2 + 0.05)
                        err = 1;
                    elseif (p_foot2(1) < p2 - 0.05)
                        err = 2;
                    end
                case 2
%                     t_hist = []; # why?
%                     y_hist = [];
                    Ntrans = 0;
%                     current_time = 0;
                    y0 = yout(end,:).';
                    s0 = Find_s0( y0 );
                case 3
                    err = 6;
                    break;
                case 6
                    y0 = yout(end,:).';
                    s0 = Find_s0( y0 );
                case 7
                    y0 = yout(end,:).';
                    s0 = Find_s0( y0 );
                otherwise
                    err = 8;
                    break;
            end
        case 2      % either 2-MSFW, 4-BW, 5-FW, or others
            switch ie
                case 1 % the robot contacted the ground again
                    [ p_foot2 ] = Joint2LeftToePos( yout(end,3:7).', params );
                    if (p_foot2(1) < 0)
                        err = 4;
%                         break;
                    end
                    y0 = ResetMap( yout(end,:).' );
                    s0 = Find_s0( y0 );
                    steps = steps -1;
                    if(steps <=0);
                        break;
                    end
                    Ntrans = 0;
                case 2
                    y0 = yout(end,:).';
                case 4
                    err = 4;
                    break;
                case 5
                    err = 5;
                    break;
                case 6 
%                     % the robot is about the stand on two foots. Lock the q
%                     % and only change the x to make the robot slip for a
%                     % distance.
%                     % This is just for a better visual effect, not strict
%                     % simulation
%                     options = odeset('Events', @doubleFootEvtFunc, 'RelTol', 1e-7, 'AbsTol', 1e-7 );
%                     [tout,yout,te,ye,ie] = ode45(doubleFootDyn,[0,5],y0,options); 
%                     Ntrans = Ntrans + 1;
%                     info(Ntrans).time = tout + current_time;
%                     info(Ntrans).state = yout;
%                     info(Ntrans).ie = ie;
%                     info(Ntrans).k = [p1, p2];
% 
%                     t_hist = [t_hist; info(Ntrans).time];
%                     y_hist = [y_hist; info(Ntrans).state];
%                     current_time = tout(end)+current_time;
                    break;
                otherwise
                    err = 8;
                    break;
            end
        case 3      % either 1-TD, or others
            switch ie
                case 1
                    [ p_foot2 ] = Joint2LeftToePos( yout(end,3:7).', params );
                    if (p_foot2(1) < 0)
                        err = 4;
%                         break;
                    end
                    y0 = ResetMap( yout(end,:).' );
                    s0 = Find_s0( y0 );
                    steps = steps -1;
                    if(steps <=0);
                        break;
                    end
                    Ntrans = 0;
                otherwise
                    err = 8;
                    break;
            end
    end
    
end

%% Plot the contact force profile

figure; 
patch_x_start = [];
patch_x_end = [];

if(IsSlip(1))
    patch_x_start = [tout_(1),tout_(1)];
end
for ind = 2:size(tout_)
    if(IsSlip(ind-1) && ~IsSlip(ind))
        patch_x_end = [patch_x_end;tout_(ind),tout_(ind)];
    elseif (~IsSlip(ind-1) && IsSlip(ind))
        patch_x_start = [patch_x_start;tout_(ind),tout_(ind)];
    end
end
if(IsSlip(end))
    patch_x_end = [patch_x_end;tout_(end),tout_(end)];
end

assert(size(patch_x_end,1) == size(patch_x_start,1));
patch_x = [patch_x_start,patch_x_end];
patch_y = repmat(1.1*[min(Ext_F(:)),max(Ext_F(:)),max(Ext_F(:)),min(Ext_F(:))],[size(patch_x_start,1),1]);

hold on;
grid on
box on
patch(patch_x',patch_y','g','FaceAlpha',.3);

plot(tout_,Ext_F','LineWidth',1); title('Force'); legend('Slip','$f_x$','$f_y$','interpreter','latex');
xlabel("Time/$s$",'interpreter','latex');ylabel("Force/$N$",'interpreter','latex');
ylim([min(Ext_F(:)),max(Ext_F(:))]*1.05);
xlim([0,max(tout_)]*1.1);


%% Plot trajectories & animation

PlotTraj();

if plot_flag == 1
    Animate();
%     PlotTraj;
    disp(length(t_hist));
end


%% ======================  Functions  =======================
    
    function [dydt] = SecondOrderODE( y, tau )
        q   = y(1:7);
        righttoe = p_RightToe(q);
        dq  = y(8:14);
        
        M   = rabbit.calcMassMatrix( q );
        F   = rabbit.calcDriftVector( q, dq );
        B   = [zeros(3,4); 50 * eye(4)];
        J   = Jh_RightToe_RightStance( q );
        dJ  = dJh_RightToe_RightStance( q, dq );
        J(2,:)  = [];
        dJ(2,:) = [];
        
        reF = F_ext(y,tau);
               
        ddq = M\(F+B*tau + J.'*reF); % solve again the dynamics under the saturated force
        gc_dp = J*dq;
        gc_ddp = J*ddq+dJ*dq;
        Pright = p_RightToe(q);
        count = 1;

        dydt = [ dq; ddq ];
    end

    function sol = solve_holonomial(M,F,B,J,dJ,tau,dq)
        Mat = [ M, -J.';
                J, zeros(2) ];
        vec = [ F + B*tau
                -dJ * dq ];
        sol = Mat \ vec;
    end

    function sol = solve_slip(M,F,B,J,dJ,tau,dq,reFdir,mu)
        
        Mat = [M, -J.'; % dynamics constraint
               J(2,:), zeros(1,2);
               zeros(1,7), reFdir, -mu];
        vec = [ F + B*tau;
            -dJ * dq;0 ]; % add a tiny offset to make sure it is positive
        vec(8) = []; % drop the dx = 0's constraint
        assert(rank(Mat)==9);
        sol = Mat \ vec;
    end

    function [value, isterminal, direction] = EvtFunc( t, y )
        q = y(1:7);
        dq = y(8:end);
        stanceP = p_RightToe(q);
        swingP = p_LeftToe(q);
        value = [ ...
%             u_leftFootHeight_RightStance( q )       % touch-down
            swingP(3)                               % touch-down
            q(3) + q(4) + q(5)/2 - pi               % mid-stance, forward
            q(3) + q(4) + q(5)/2 - pi               % mid-stance, backward
            dq(3) + dq(4) + dq(5)/2                 % dth = 0
            q(3) + q(4) + q(5)/2 - 3*pi/2           % forward
            swingP(3) + 1e-2                        % The slacked touch-down, 
                                                    %  This will happen
                                                    %  when the robot is
                                                    %  about to stand on
                                                    %  two foots.
%             stanceP(3) - 1e-4                       % The touch-down of stance foot
            ];
        
        if (t < 1e-10)
%         if (t < 0.05)
            value = nan(6,1);
        end
        if (true || t < 1e-2) % !!
            value(4) = nan;
        end
        if (q(3) + q(4) + q(5)/2 < pi)
            value(4) = nan;
        end
        isterminal = ones( 6, 1 );
        direction = [ -1; 1; -1; -1; 1;-1 ];
    end

    function [value, isterminal, direction] = doubleFootEvtFunc( t, y )
        q = y(1:7);
        dq = y(8:end);
        value = dq(1);
        isterminal = 1;
        direction = 0; 
    end

    function [dydt] = doubleFootDyn(t,y)
        dq = y(8:end);
        dydt = [dq; -sign(dq(1))*mu; zeros(6,1)];
    end

    function s0 = Find_s0( y )
        th = y(3) + y(4) + y(5) / 2;
        s0  = (th - th0) / th_len * 1.05;
    end

    function [ q_des, dq_des, beta ] = FindRefTraj( y )
        beta = nan;
        % find phase variable
        th = y(3) + y(4) + y(5) / 2;
        s = (th - th0) / th_len;
        s = s * 1.1;
        % sanity check
        if (s < 0)
            s = 0; 
        end
        if (s > 1)
            s = 1; 
        end
        % desired q and dq
        [ q_des, dq_des ] = EvalBezier( q_traj_des, s );
        dq_des = dq_des / ptime;
        if (s == 1) || (s == 0)
            dq_des = dq_des * 0;
        end
        
        if (flag_smoothPD) && (th >= pi)          % before touch-down, "smooth" PD
%         if false
            s_m = (th - th0_m) / th_len_m;
            s_m = s_m * 1.1;
            % sanity check
            if (s_m < 0)
                s_m = 0; 
            end
            if (s_m > 1)
                s_m = 1; 
            end
            
            [ q_des_m, ~ ] = EvalBezier( q_traj_des_m, s_m );
            if th_len > th_len_m
                beta = 2 * (s_m - 0.5);
            else
                beta = (s - s0) / (1 - s0);
            end
            if beta < 0, beta = 0; end
            if beta > 1, beta = 1; end
            q_des = q_des * beta + (1-beta) * q_des_m;
        end
    end
    
    function [u] = PD_controller( ~, y )
        [ q_des, dq_des ] = FindRefTraj( y );
        t = t;
        % PD
        q = y(1:7);
        dq = y(8:14);

        Jr = Jh_RightToe_RightStance(q);
        velr = Jr*dq;
        
        if abs(velr(1))>1e-2
            q_des(4:5) = q_des(4:5).*[1+0.05*velr(1);1+0.05*velr(1)];
            dq_des(4:5) = dq_des(4:5).*[1+0.02*velr(1);1+0.02*velr(1)];
        end
        % Kp 50 Kd 0.05 -> step back
        % 105 0.5 works better than 50 0.05
        Kp = 105 *[ 10; 1; 10; 1 ];
        Kd = 0.6 * [ 100; 10; 100; 10 ];
        u_pd = -Kp .* (q(4:end)-q_des(2:end)) - Kd .* (dq(4:end) - dq_des(2:end));
        
        % controller offset
        F   = rabbit.calcDriftVector( q, dq );
        B   = 100 * eye(4);
        u_offset = B \ F(4:end);
        
        % put everything together
        u = u_pd + u_offset;
        
        u(u>30) = 30;
        u(u<-30) = -30;
        
%         disp(u);
    end

    function [y_plus] = ResetMap( y_minus )
        q = y_minus( 1 : 7 );
        dq = y_minus( 8 : 14 );
        T = ...
            [ 0 0 1 0;
              0 0 0 1;
              1 0 0 0;
              0 1 0 0 ];
        T = blkdiag(eye(3), T);
        q_minus = T * q;
        dq_minus = T * dq;
        
        M = rabbit.calcMassMatrix( q_minus );
        J = Jh_RightToe_RightStance( q_minus );
        J(2,:)  = [];
        
        Mat = [ M, -J.';
        J, zeros(2)];
        vec = [ M * dq_minus; zeros(2,1) ];
        
        res = Mat \ vec;
        dq_plus = res(1:7);
        q_plus = q_minus;
        
        y_plus = [ q_plus; dq_plus ];
    end

    function PlotTraj()
        q_hist = y_hist( :, 3:7 );
        dq_hist = y_hist( :, 10:14 );
        q_hist_ref = zeros( size( q_hist ) );
        dq_hist_ref = zeros( size( dq_hist ) );
        
        beta_hist = [];
        u_hist = [];
        
        for i = 1 : size( q_hist, 1 )
            y = y_hist(i,:).';
            if t_hist(i) < info(1).time(end)
                flag_smoothPD = 1;
            else
                flag_smoothPD = 0;
            end
            
            [ q_des, dq_des, beta ] = FindRefTraj( y );
            beta_hist = [ beta_hist; beta ];
            u_hist = [ u_hist; PD_controller( 0, y ).' ];

            q_hist_ref( i, : ) = q_des;
            dq_hist_ref( i, : ) = dq_des;
        end
        dth_hist = dq_hist(:,1) + dq_hist(:,2) + dq_hist(:,3)/2;
        
        figure;
        hold on;
        plot( t_hist, q_hist(:,2:end) );
        plot( t_hist, q_hist_ref(:,2:end), '--' );
        plot( t_hist, beta_hist, 'LineWidth', 3 );
        legend('q2', 'q3', 'q4', 'q5', 'q2ref', 'q3ref', 'q4ref', 'q5ref', 'beta');
        
    end

    function Animate()
        anim = MyAnimator.MyFiveLinkAnimator( [], ...
            't', t_hist, ...
            'q', y_hist(:,1:7).', ...
            'text_flag', true );
        anim.pov = MyAnimator.AnimatorPointOfView.West;
        anim.Animate(true);
        anim.isLooping = false;
        anim.updateWorldPosition = true;
        anim.endTime = t_hist(end);
        conGUI = MyAnimator.AnimatorControls();
        conGUI.anim = anim;
    end

    function [reF,isSliping] = F_ext( y, tau )
        q   = y(1:7);
        dq  = y(8:14);
        M   = rabbit.calcMassMatrix( q );
        F   = rabbit.calcDriftVector( q, dq );
        B   = [zeros(3,4); 50 * eye(4)];
        J   = Jh_RightToe_RightStance( q );
        dJ  = dJh_RightToe_RightStance( q, dq );
        J(2,:)  = [];
        dJ(2,:) = [];
        gc_dp = J*dq; % the velocity of the ground contact

        state_is_slip = 0;
        state_is_negative = 0;
        if(abs(gc_dp(1))<1e-6 ) % not slipping
            sol = solve_holonomial(M,F,B,J,dJ,tau,dq);
            sol_ = sol;
            ddq = sol(1:7);
            reF = sol(8:9);% the reaction force from the ground
        else 
            state_is_slip = 1;
            sol_ = zeros(9,1);
            reF = [-sign(gc_dp(1));0.5/mu];  
            % to control the program into the if branch below
            % the direction of force below is the opposite of the
            % actuator's velocity
        end
        
        % add saturation and put it back to compute ddq
       
        if (reF(2)>0 && mu*reF(2)<abs(reF(1))) % not in friction cone
            % solve for the new equition
            reFdir = sign(reF(1)); % 
            sol = solve_slip(M,F,B,J,dJ,tau,dq,reFdir,mu);
            ddq = sol(1:7);
        end
        
        Pright = p_RightToe(q);
        
        reF = sol(8:9);
        if(reF(2)<0)
            state_is_negative = 1;
        end
        
        reF(2) = max(0,reF(2));
        reF(1) = max(min(mu*reF(2),reF(1)),-mu*reF(2));
        if (Pright(3) >1e-5)
           reF = 0*reF; 
        end
        isSliping = abs(gc_dp(1))>1e-6 ;
    end
end