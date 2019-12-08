cheetah = RABBIT(which('five_link_cheetah.urdf'));
cheetah.configureDynamics('DelayCoriolisSet',false);
cur = pwd;
export_path = fullfile(cur, 'gen/');

% cheetah.ExportKinematics([export_path,'kinematics/']);

%% check the model
% the parallel standing position
y0 = [0.0002
    0.7754
    pi/2 %0.2033 
    
    2.6898 - (pi/2 -0.2033)
    0.4973
%     2.5432
%     1.1158
    2.6898 - (pi/2 -0.2033)
    0.4973
    
    0.5605
   -0.0008
    0.0243
    0.6951
    0.0070
   -1.6232
    0.2042];

t_hist = 0:0.1:1;
y_hist = repmat(y0.',size(t_hist,2),1);




Animate(t_hist,y_hist);

function [dydt] = SecondOrderODE( y, tau )
    q   = y(1:7);
    dq  = y(8:14);

    M   = rabbit.calcMassMatrix( q );
    F   = rabbit.calcDriftVector( q, dq );
    B   = [zeros(3,4); 50 * eye(4)];
    rJ   = Jh_RightToe_RightStance( q );
    rdJ  = dJh_RightToe_RightStance( q, dq );
    lJ   = J_h_LeftToe_LeftStance( q );
    ldJ  = dJ_h_L( q, dq );
    J(2,:)  = [];
    dJ(2,:) = [];

    Mat = [ M, -J.';
            J, zeros(2) ];
    vec = [ F + B*tau
            -dJ * dq ];

    sol = Mat \ vec;
    ddq = sol(1:7);
    dydt = [ dq; ddq ];
    
    
    dydt = [ dq; ddq ];
end

function Animate(t_hist,y_hist)
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
