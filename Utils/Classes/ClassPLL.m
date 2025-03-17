classdef ClassPLL
    % ClassPLL: Phase Locked Loop

    properties % Constants
        Ts  % Sampling time
        kp  % Proportional constant
        ki  % Integral constant
        n
    end

    properties % Variables
        e   % Error
        a
        u   % Action
        w   % Angular frequency
        g   % Angle
    end
    
    methods
        function obj = ClassPLL(specs)
            % ClassPLL: Construct an instance of this class.

            % Constants
            obj.Ts = specs.Ts;
            obj.kp = specs.kp;
            obj.ki = specs.ki;
            obj.n = 1 - obj.Ts * 0.5 * obj.ki / obj.kp;

            % Initialize variables
            obj = obj.reset();
        end
        
        function obj = step(obj, vdq)
            % step: Perform a step of the numerical integration of the pll's transition function.

            % vd = vdq(1);
            vq = vdq(2);
            obj.e = vq;
            obj.a = (obj.n - 1) * obj.u / obj.kp + obj.a * obj.n;
            obj.u = (obj.e - obj.a) * obj.kp;
            obj.w = obj.u + obj.w;
            obj.g = obj.g + obj.Ts * obj.w;
            obj.g = mod(obj.g, 2*pi); % Mapped to [0, 2*pi]
        end

        function obj = reset(obj)
            % reset: Reset pll's variables to 0.

            obj.e = 0;
            obj.a = 0;
            obj.u = 0;
            obj.w = 0;
            obj.g = 0;
        end
    end
end















