classdef MyFiveLinkAnimator < MyAnimator.MyAbstractAnimator
    properties
        leg1Color = [0.8500    0.3250    0.0980];
        leg2Color = [0    0.4470    0.7410];
        torsoColor = 'k';
        groundColor = 'g';
        
        isCentered = false;
        text_flag = false;
        radius = [];
    end
    
    properties (Access = private)
        ground;

        pH_RKnee;
        pH_LKnee;
        pRKnee_RFoot;
        pLKnee_LFoot;
        pHT;
        
        h_text;
        
        starting_index;
        next_frame_time;
        
        H;
        
        q_all;
        t_all;
        
    end
    
    properties
        updateWorldPosition logical
    end
    
    methods
        function obj = MyFiveLinkAnimator(h_fig, varargin)
            obj = obj@MyAnimator.MyAbstractAnimator(h_fig);
            
            argin = struct(varargin{:});
            
            if isfield(argin, 't')
                obj.t_all = argin.t;
            else
                obj.t_all = 0;
            end
            
            if isfield(argin, 'q')
                obj.q_all = argin.q;
            else
                obj.q_all = zeros(7,1);
            end
    
            if isfield(argin, 'leg1Color')
                obj.leg1Color = argin.leg1Color;
            end
            
            if isfield(argin, 'leg2Color')
                obj.leg2Color = argin.leg2Color;
            end
            
            if isfield(argin, 'torsoColor')
                obj.torsoColor = argin.torsoColor;
            end
            
            if isfield(argin, 'groundColor')
                obj.groundColor = argin.groundColor;
            end
            
            if isfield(argin, 'isCentered')
                obj.isCentered = argin.isCentered;
            end
            
            if isfield(argin, 'radius')
                obj.radius = argin.radius;
            end
            
            if isfield(argin, 'text_flag')
                obj.text_flag = argin.text_flag;
            end
            
            obj.startTime = obj.t_all(1);
            obj.currentTime = obj.startTime;
            obj.endTime = obj.t_all(end);
            obj.updateWorldPosition = false;
            
%             if isempty(varargin)
                [terrain.Tx, terrain.Ty] = meshgrid(-10:1:15, -10:1:15);
                terrain.Tz = 0.*terrain.Tx;
%             else
%                 terrain = varargin{1};
%             end
            
            Rz = @(th) [cos(th), -sin(th), 0; sin(th), cos(th), 0; 0,0,1];
            Ry = @(th) [cos(th), 0, sin(th); 0, 1, 0; -sin(th), 0, cos(th)];
            Rx = @(th) [1,0,0; 0, cos(th), -sin(th); 0, sin(th), cos(th)];
            
            r = obj.q_all(1:3, end) - obj.q_all(1:3, 1);
            th = obj.q_all(4:6, end) - obj.q_all(4:6, 1);
            obj.H = [Rx(th(1))*Ry(th(2))*Rz(th(3)), r; 0,0,0,1];
            
            % Initialization
            q = obj.q_all(:,1);
            
            pH = [q(1);0;q(2)];
            pT = p_Torso(q);
            pRK = p_q2_right(q);
            pLK = p_q2_left(q);
            pR = p_RightToe(q);
            pL= p_LeftToe(q);
            
            % Define Terrain
            obj.ground = surf(terrain.Tx,terrain.Ty,terrain.Tz-0.025,'LineWidth',6, 'EdgeColor', [0.7,0.7,0.7]); hold on;
            
            % Define links
            obj.pH_RKnee = line([0,0],[pH(1) pRK(1)],[pH(3) pRK(3)]);
%             obj.pH_LKnee = line([0,0],[pH(1) pLK(1)],[pH(3) pLK(3)]);
            obj.pH_LKnee = line([0,0],[pT(1) pLK(1)],[pT(3) pLK(3)]); % changed by ycy 2019-12-7
            obj.pRKnee_RFoot = line([0,0],[pRK(1) pR(1)],[pRK(3) pR(3)]);
            obj.pLKnee_LFoot = line([0,0],[pLK(1) pL(1)],[pLK(3) pL(3)]);
            obj.pHT = line([0,0],[pH(1) pT(1)],[pH(3) pT(3)]);
            
            set(obj.pH_RKnee,'LineWidth',3,'Color',obj.leg1Color);
            set(obj.pH_LKnee,'LineWidth',3,'Color',obj.leg2Color);
            set(obj.pRKnee_RFoot,'LineWidth',3,'Color',obj.leg1Color);
            set(obj.pLKnee_LFoot,'LineWidth',3,'Color',obj.leg2Color);
            set(obj.pHT,'LineWidth',3,'Color',obj.torsoColor);
            
            if obj.text_flag
                obj.h_text = text(0,pH(1),1.5,[sprintf('%.2f',obj.t_all(1))]);
                set(obj.h_text, 'FontSize', 10, 'Color', [0 0 0]);
            end
            
        end
        
%         function Draw(obj, t, x, text_flag)
        function Draw(obj, t, x)
%             if nargin < 4
%                 text_flag = 1;
%             end
            q = x;                     

            pH = [q(1);0;q(2)];
            pT = p_Torso(q);
            pRK = p_q2_right(q);
            pLK = p_q2_left(q);
            pR = p_RightToe(q);
            pL= p_LeftToe(q);
            
            set(obj.pH_RKnee,'YData',[pH(1) pRK(1)],'ZData',[pH(3) pRK(3)], 'XData',[0 0]);
%             set(obj.pH_LKnee,'YData',[pH(1) pLK(1)],'ZData',[pH(3) pLK(3)],'XData',[0 0]);
            set(obj.pH_LKnee,'YData',[pT(1) pLK(1)],'ZData',[pT(3) pLK(3)],'XData',[0 0]);
            set(obj.pRKnee_RFoot,'YData',[pRK(1) pR(1)],'ZData',[pRK(3) pR(3)],'XData',[0 0]);
            set(obj.pLKnee_LFoot,'YData',[pLK(1) pL(1)],'ZData',[pLK(3) pL(3)],'XData',[0 0]);
            set(obj.pHT,'YData',[pH(1) pT(1)],'ZData',[pH(3) pT(3)],'XData',[0 0]);
            
%             delete(obj.h_text);
            if obj.text_flag
%                 obj.text = text(0,pH(1),pH(3)+1,['t = ',sprintf('%.2f',t)]);
%                 obj.text = text(0,pH(1),1.5,['t = ',sprintf('%.2f',t)]);
%                 obj.h_text = text(0,pH(1),1.5,[sprintf('%.2f',t)]);
%                 obj.h_text.FontSize = 10;
%                 obj.text.FontWeight = 'Bold';
%                 obj.h_text.Color = [0,0,0];
                set(obj.h_text, 'String', sprintf('%.2f',t), 'Position', [0,pH(1),1.5] );
            end
%             set(obj.text, 'FontSize', 10);

            drawnow;
        end
        
        function x = GetData(obj, t)
            t_start = obj.t_all(1);
            t_end = obj.t_all(end);
            delta_t = t_end - t_start;
            
            val = 0;
            
            if t < t_start || t > t_end
                val = floor((t - t_start) / delta_t);
                t = t - val * delta_t;
            end
            
            if t < t_start
                t = t_start;
            elseif t > t_end
                t = t_end;
            end
            
            n = length(obj.t_all);
            x = obj.q_all(:, 1); % Default
            
            a = 1;
            b = n;
            
            while (a <= b)
                c = floor((a + b) / 2);
                
                if t < obj.t_all(c)
                    x = obj.q_all(:, c);
                    b = c - 1;
                elseif t > obj.t_all(c)
                    a = c + 1;
                else
                    x = obj.q_all(:, c);
                    break;
                end
            end
            
%             delta_q = obj.q_all(1:6, end) - obj.q_all(1:6, 1);
            
            %T = obj.H(1:3,4);
            %roll = atan2(-obj.H(2,3),obj.H(3,3));
            %pitch = asin(obj.H(1,3));
            %yaw = atan2(-obj.H(1,2),obj.H(1,1));
            
            if obj.updateWorldPosition
                Rz = @(th) [cos(th), -sin(th), 0; sin(th), cos(th), 0; 0,0,1];
                Ry = @(th) [cos(th), 0, sin(th); 0, 1, 0; -sin(th), 0, cos(th)];
                Rx = @(th) [1,0,0; 0, cos(th), -sin(th); 0, sin(th), cos(th)];
                
                x_orig_init = obj.q_all(1:6, 1);
                x_current_init = obj.q_all(1:6, 1);
                if val > 0
                    for i = 1:val
                        x_end = obj.q_all(1:6, end);
                        
                        r1 = x_current_init(1:3) - x_orig_init(1:3);
                        th1 = x_current_init(4:6) - x_orig_init(4:6);
                        H1 = [Rx(th1(1))*Ry(th1(2))*Rz(th1(3)), r1; 0,0,0,1];
                        
                        r2 = x_end(1:3) - x_orig_init(1:3);
                        th2 = x_end(4:6) - x_orig_init(4:6);
                        H2 = [Rx(th2(1))*Ry(th2(2))*Rz(th2(3)), r2; 0,0,0,1];
                        
                        H = H1*H2;
                        T = H(1:3,4);
                        roll = atan2(-H(2,3),H(3,3));
                        pitch = asin(H(1,3));
                        yaw = atan2(-H(1,2),H(1,1));
                        
                        x_current_init = x_orig_init(1:6) + [T;roll;pitch;yaw];   
                    end
                    
                    x_current = x(1:6);
                        
                    r1 = x_current_init(1:3) - x_orig_init(1:3);
                    th1 = x_current_init(4:6) - x_orig_init(4:6);
                    H1 = [Rx(th1(1))*Ry(th1(2))*Rz(th1(3)), r1; 0,0,0,1];

                    r2 = x_current(1:3) - x_orig_init(1:3);
                    th2 = x_current(4:6) - x_orig_init(4:6);
                    H2 = [Rx(th2(1))*Ry(th2(2))*Rz(th2(3)), r2; 0,0,0,1];

                    H = H1*H2;
                    T = H(1:3,4);
                    roll = atan2(-H(2,3),H(3,3));
                    pitch = asin(H(1,3));
                    yaw = atan2(-H(1,2),H(1,1));

                    x(1:6) = x_orig_init(1:6) + [T;roll;pitch;yaw];   
                end
            end
        end
        
        function [center, radius, yaw] = GetCenter(obj, x)
            q = x;
%             center = [0; q(1:2)];
            center = [ 0; q(1); 0.7 ];
            yaw = 0;
            
            if isempty(obj.radius)
                if obj.isCentered
                    radius = 1.5;
                else
                    radius = [ -1, 1, -0.5, 7.5, -0.2, 1.8 ];
                end
            else
                radius = obj.radius;
            end
        end
    end
end
