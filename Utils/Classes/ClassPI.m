classdef ClassPI
    % ClassPI: Proportional Integral controller
    
    properties % Constants
        Ti      % Integration step
        kp      % Proportional constant
        ki      % Integral constant
        n
        u_min   % Maximum action
        u_max   % Minimum action
    end
    properties % Variables
        e   % Error
        a
        u   % Action
    end
    
    methods
        function obj = ClassPI(specs)
            % ClassPI: Construct an instance of this class.

            % Constants
            obj.Ti = specs.Ti;
            obj.kp = specs.kp;
            obj.ki = specs.ki;
            obj.n = 1 - obj.Ti * 0.5 * obj.ki / obj.kp;
            obj.u_min = specs.u_min;
            obj.u_max= specs.u_max;

            % Initialize variables
            obj = obj.reset();
        end
        
        function obj = step(obj, r, y)
            % step: Perform a step of the numerical integration of the controller's transition function.
            
            obj.e = r - y;
            obj.a = (obj.n - 1) * obj.u / obj.kp + obj.a * obj.n;
            obj.u = (obj.e - obj.a) * obj.kp;
            obj.u = clip(obj.u, -obj.u_max, obj.u_max); % Saturation
        end

        function obj = reset(obj)
            % reset: Reset controller's variables to 0.
            
            obj.e = 0;
            obj.a = 0;
            obj.u = 0;
        end
    end
end