syms q1 q2 q3 x y real
syms nq1 nq2 nq3 nx ny real
syms dq1 dq2 dq3 dx dy real
syms ndq1 ndq2 ndq3 ndx ndy real
syms u1 u2
syms lL lT mL mT JL JT g real
syms Fst1 Fst2

% Position Variable vector
q = [x;y;q1;q2;q3];
nq = [nx;ny;nq1;nq2;nq3];


% Velocity variable vector
dq = [dx;dy;dq1;dq2;dq3];
ndq = [ndx;ndy;ndq1;ndq2;ndq3];

% Inputs
tau = [u1;u2];

% external Forth
Fst = [Fst1;Fst2];

% parameters
params = [lL; lT; mL; mT; JL; JT; g];

% Parameter Values from Table 1
paramValues = [1;  % Leg Length
               0.5; % Torso Length
               5; % Leg mass
               10; % Torso mass
               0.5; % Leg Moment of inertia
               1; % Torso moment of inertia
               9.81]; % acc due to gravity

qVal1 = [0.5;sqrt(3)/2;deg2rad(150);deg2rad(120);deg2rad(30)];
dqVal1 = [-0.8049;-0.4430;0.0938;0.9150;0.9298];

qVal2 = [0.3420;0.9397;deg2rad(170);deg2rad(20);deg2rad(30)];
dqVal2 = [-0.1225;-0.2369;0.5310;0.5904;0.6263];

%% the problem2
%  The state at t-
D = auto_q2D(q1,q2,q3,x,y,dq1,dq2,dq3,dx,dy,lL,lT,mL,mT,JL,JT,g); 
pst = auto_q2pst(q1,q2,q3,x,y,dq1,dq2,dq3,dx,dy,lL,lT,mL,mT,JL,JT,g);
Jpst = auto_q2Jpst(q1,q2,q3,x,y,dq1,dq2,dq3,dx,dy,lL,lT,mL,mT,JL,JT,g);
dJpst = auto_q2dJpst(q1,q2,q3,x,y,dq1,dq2,dq3,dx,dy,lL,lT,mL,mT,JL,JT,g);
%  the state at t+
nD = auto_q2D(nq1,nq2,nq3,nx,ny,ndq1,ndq2,ndq3,ndx,ndy,lL,lT,mL,mT,JL,JT,g); 
npst = auto_q2pst(nq1,nq2,nq3,nx,ny,ndq1,ndq2,ndq3,ndx,ndy,lL,lT,mL,mT,JL,JT,g);
nJpst = auto_q2Jpst(nq1,nq2,nq3,nx,ny,ndq1,ndq2,ndq3,ndx,ndy,lL,lT,mL,mT,JL,JT,g);
ndJpst = auto_q2dJpst(nq1,nq2,nq3,nx,ny,ndq1,ndq2,ndq3,ndx,ndy,lL,lT,mL,mT,JL,JT,g);

%  the equations
% the impulse
eq1 = nD*ndq - D*dq == Jpst' * Fst;
eq2 = q == nq;
eq3 = Jpst*ndq == 0;

disp('begin solving');
solution = solve([eq1,eq2,eq3],[nq;ndq;Fst])

fst_sol = [solution.Fst1,solution.Fst2];
ddq_sol = [solution.ndx, solution.ndy, solution.ndq1, solution.ndq2, solution.ndq3];

%% use the values
qVal = [0.3827;0.9239;3.0107;2.2253;0.5236];
dqVal = [0.3827;0.9239;3.0107;2.2253;0.5236];

fstSol1 = double(subs(fst_sol, [params;q;dq], [paramValues;qVal;dqVal]))
ddq_sol1 = double(subs(ddq_sol, [params;q;dq], [paramValues;qVal;dqVal]))
