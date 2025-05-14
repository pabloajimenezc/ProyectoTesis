classdef ClassPI
    % ClassPI: Discrete proportional integral controller, Tustin approximation.
    %       (-a0 * u_t_1 + b1 * e_t + b0 * e_t_1)
    % u_t = --------------------------------------
    %                         a1
    
    properties % Constants
        Ts      % Sampling time
        kp      % Proportional constant
        ki      % Integral constant
        u_min   % Minimum action
        u_max   % Maximum action
        b0
        b1
        a0
        a1
    end

    properties % Variables
        e_t     % Error signal in actual time step
        e_t_1   % Error signal in previous time step
        u_t     % Action signal in actual time step
        u_t_1   % Action signal in previous time step
    end
    
    methods
        function obj = ClassPI(specs)
            % ClassPI: Construct an instance of this class.
            
            % Constants
            obj.Ts = specs.Ts;
            obj.kp = specs.kp;
            obj.ki = specs.ki;
            obj.u_min = specs.u_min;
            obj.u_max = specs.u_max;
            obj.b0 = -obj.kp + obj.Ts/2 * obj.ki;
            obj.b1 =  obj.kp + obj.Ts/2 * obj.ki;
            obj.a0 = -1;
            obj.a1 = 1;

            % Variables
            obj = obj.reset();
        end
        
        function obj = control(obj, r_t, y_t)
            % control: Calculate discrete control action signal.

            % Update previous signals
            obj.e_t_1 = obj.e_t;    % Error
            obj.u_t_1 = obj.u_t;    % Action

            % Update actual signals
            obj.e_t = r_t - y_t;    % Error
            obj.u_t = (-obj.a0 * obj.u_t_1 + obj.b1 * obj.e_t + obj.b0 * obj.e_t_1) / obj.a1; % Action
            obj.u_t = clip(obj.u_t, obj.u_min, obj.u_max); % Saturation
        end

        function obj = reset(obj)
            % reset: Reset controller variables to 0.

            obj.e_t     = 0;
            obj.e_t_1   = 0;
            obj.u_t     = 0;
            obj.u_t_1   = 0;
        end
    end
end