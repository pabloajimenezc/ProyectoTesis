classdef ClassPLL < ClassPI
    % ClassPLL: Discrete phase locked loop, Tustin approximation.
    % The internal PI is instantiated from ClassPI

    properties % Variables
        g   % Estimated voltage angle
        w   % Estimated voltage angular frequency
    end
    
    methods
        function obj = ClassPLL(specs)
            % ClassPLL: Construct an instance of this class.
            
            obj@ClassPI(specs);

            % Variables
            obj = obj.reset();
        end
        
        function obj = estimate(obj, vdq, wn)
            % estimate: Estimate angle and frequency.

            obj = obj.control(0, -vdq(2));   % PI controller
            obj.w = obj.u_t + wn;       % Add to nominal frequency
            obj.g = obj.g + obj.w * obj.Ts; % Integrate to obtain angle
            obj.g = mod(obj.g, 2*pi);       % Map to [0, 2*pi]
        end

        function obj = reset(obj)
            % reset: Reset PLL variables to 0.

            obj = reset@ClassPI(obj);
            obj.g = 0;
            obj.w = 0;
        end
    end
end