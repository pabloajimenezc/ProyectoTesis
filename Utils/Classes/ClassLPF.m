classdef ClassLPF
    % ClassLPF: Discrete low pass filter, Tustin approximation.
    
    properties % Constants
        Ts  % Sampling time
        wn  % Natural damping frequency
        b0
        b1
        a0
        a1
    end

    properties % Variables
        y_t     % Measured signal in actual time step
        y_t_1   % Measured signal in previous time step
        yf_t    % Filtered signal in actual time step
        yf_t_1  % Filtered signal in previous time step
    end
    
    methods
        function obj = ClassLPF(specs)
            % ClassLPF: Construct an instance of this class.
            
            % Constants
            obj.Ts = specs.Ts;
            obj.wn = specs.wn;
            obj.b0 = obj.Ts * obj.wn;
            obj.b1 = obj.Ts * obj.wn;
            obj.a0 = -2 + specs.Ts * specs.wn;
            obj.a1 = 2 + specs.Ts * specs.wn;

            % Variables
            obj = obj.reset(specs.y0);
        end
        
        function obj = filter(obj, y_t)
            % filter: Perform one step of discrete signal filtering.
            
            % Update previous signals
            obj.y_t_1 = obj.y_t;    % Measured
            obj.yf_t_1 = obj.yf_t;  % Filtered

            % Update actual signals
            obj.y_t = y_t; % Measured
            obj.yf_t = (-obj.a0 * obj.yf_t_1 + obj.b1 * obj.y_t + obj.b0 * obj.y_t_1) / obj.a1; % Filtered
        end

        function obj = reset(obj, y0)
            % reset: Reset filter's variables to y0.

            obj.y_t    = y0;
            obj.y_t_1  = y0;
            obj.yf_t   = y0;
            obj.yf_t_1 = y0;
        end
    end
end