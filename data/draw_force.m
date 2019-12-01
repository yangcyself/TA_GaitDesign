

Fyn = @( t, y ) F_ext( y, PD_controller( t, y ) );
Ext_F = [];IsSlip = [];
for jj = 1:length(t_hist)
    [reactionF,isSliping] = Fyn(t_hist(jj),y_hist(jj,:)');
    Ext_F= [Ext_F; reactionF' ];
    IsSlip= [IsSlip; isSliping]; 
end
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

