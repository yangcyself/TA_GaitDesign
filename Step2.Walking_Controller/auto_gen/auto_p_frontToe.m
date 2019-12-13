function p_leg1 = auto_p_frontToe(in1)
%AUTO_P_FRONTTOE
%    P_LEG1 = AUTO_P_FRONTTOE(IN1)

%    This function was generated by the Symbolic Math Toolbox version 8.3.
%    10-Dec-2019 13:33:47

q3 = in1(3,:);
q4 = in1(4,:);
q5 = in1(5,:);
x = in1(1,:);
y = in1(2,:);
t2 = q3+q4;
t3 = q5+t2;
p_leg1 = [x+sin(t2).*(2.0./5.0)+sin(t3).*(2.0./5.0);y+cos(t2).*(2.0./5.0)+cos(t3).*(2.0./5.0)];
