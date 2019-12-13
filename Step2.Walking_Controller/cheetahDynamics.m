% calculate J and dJ for the cheetah legs(Because I have not found corresponding functions in FROST)

syms q3 q4 q5 q6 q7 x y real
syms dq3 dq4 dq5 dq6 dq7 dx dy real
% syms ddq1 ddq2 ddq3 ddx ddy real


q = [x;y;q3; q4 ;q5; q6; q7 ];
dq = [dx;dy;dq3;dq4 ;dq5; dq6 ; dq7];

L_thigh = 0.4; % l here meas length
L_shin = 0.4;
L_torso = 0.63;

p_leg1 = [x + sin(q3+q4)*L_thigh + sin(q3+q4+q5)*L_shin;
          y + cos(q3+q4)*L_thigh + cos(q3+q4+q5)*L_shin]; % the 'front leg' (leg at the hip)

p_leg2 = [x + sin(q3)*L_torso + sin(q3+q6)*L_thigh + sin(q3+q6+q7)*L_shin;
          y + cos(q3)*L_torso + cos(q3+q6)*L_thigh + cos(q3+q6+q7)*L_shin]; % the 'back leg' (leg at the other end)

%% generate Auto Functions
% 
% matlabFunction(p_leg1, 'File', 'auto_gen/auto_p_frontToe','vars',{q});
% matlabFunction(p_leg2, 'File', 'auto_gen/auto_p_backToe','vars',{q});
%       
%% check the correctness of p_leg
% q_tmp = [0.0002;    0.7754;    pi/2;  2.6898 - (pi/2 -0.2033); 0.4973 ;2.6898 - (pi/2 -0.2033) ;0.4973];
% dq_tmp = [   0.5605;   -0.0008;    0.0243;    0.6951;    0.0070;   -1.6232;    0.2042];
% pR = p_RightToe(q_tmp);
% pF = auto_p_frontToe(q_tmp);
% pL= p_LeftToe(q_tmp);
% pB = auto_p_backToe(q_tmp);
%% Calculate J and dJ
% J_front = jacobian(p_leg1,q);
% Jfront_vec = J_front(:);
% dJfront_vec = jacobian(Jfront_vec,q)*dq;
% dJfront = reshape(dJfront_vec,size(J_front));
% 
% J_back = jacobian(p_leg2,q);
% Jback_vec = J_back(:);
% dJback_vec = jacobian(Jback_vec,q)*dq;
% dJback = reshape(dJback_vec,size(J_back));

%% generate Jacob and dJ functions
% matlabFunction(J_front, 'File', 'auto_gen/auto_J_frontToe','vars',{q});
% matlabFunction(J_back, 'File', 'auto_gen/auto_J_backToe','vars',{q});
% matlabFunction(dJfront, 'File', 'auto_gen/auto_dJ_frontToe','vars',{q,dq});
% matlabFunction(dJback, 'File', 'auto_gen/auto_dJ_backToe','vars',{q,dq});

%% check correctness
% the J and dJ should be equal to the `Jh_RightToe_RightStance` and `dJh_RightToe_RightStance`
% jF = auto_J_frontToe(q_tmp)
% jR = Jh_RightToe_RightStance(q_tmp)
% djF = auto_dJ_frontToe(q_tmp,dq_tmp)
% djR = dJh_RightToe_RightStance(q_tmp,dq_tmp)


%% Generate the J and dJ of the ball
ball.R = 0.63;
ball.M = 12;
ball.I = 1.5*ball.M*ball.R^2; 
ball.c_th = pi/6;

syms th;
syms dth;

pc_1 = [th*ball.R+0.5*ball.R + ball.R*sin(th-ball.c_th);
        ball.R + ball.R* cos(th-ball.c_th)];% the position of the front concact point;
pc_2 = [th*ball.R+0.5*ball.R + ball.R*sin(th+ball.c_th);
        ball.R + ball.R* cos(th+ball.c_th)];% the position of the back concact point;

matlabFunction(pc_1, 'File', 'auto_gen/auto_pc_front','vars',{th});
matlabFunction(pc_2, 'File', 'auto_gen/auto_pc_back','vars',{th});
    
J_bc_front = jacobian(pc_1,th);
J_bc_front_vec = J_bc_front(:);
dJ_bc_front_vec = jacobian(J_bc_front_vec,th)*dth;
dJ_bc_front = reshape(dJ_bc_front_vec,size(J_bc_front));

J_bc_back = jacobian(pc_2,th);
J_bc_back_vec = J_bc_back(:);
dJ_bc_back_vec = jacobian(J_bc_back_vec,th)*dth;
dJ_bc_back = reshape(dJ_bc_back_vec,size(J_bc_back));


matlabFunction(J_bc_front, 'File', 'auto_gen/auto_J_bc_front','vars',{th});
matlabFunction(J_bc_back, 'File', 'auto_gen/auto_J_bc_back','vars',{th});
matlabFunction(dJ_bc_front, 'File', 'auto_gen/auto_dJ_bc_front','vars',{th,dth});
matlabFunction(dJ_bc_back, 'File', 'auto_gen/auto_dJ_bc_back','vars',{th,dth});

%%
pball = [th*ball.R+0.5*ball.R; ball.R];
matlabFunction(pball, 'File', 'auto_gen/auto_p_ball','vars',{th});