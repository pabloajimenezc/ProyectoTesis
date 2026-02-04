classdef ClassPCC
    % ClassPCC: Positive DC-link Current Control
    % Proportional Integral controller

    properties
        Ts    % Sampling time
        R     % Converter resistance
        L     % Converter inductance
        tau   % Converter time constant
        xi    % Closed loop damping
        wn    % Closed loop bandwith
        kp    % Proportional gain
        ki    % Integrative gain
        u_max % Max. control action
    end

    methods
        function PCC = ClassPCC(Ts, M2C)
            % ClassPCC: Construct an instance of this class
            
            PCC.Ts  = Ts;
            PCC.R   = M2C.R;
            PCC.L   = M2C.L;
            PCC.tau = PCC.L / PCC.R;
            PCC.xi  = 1 / sqrt(2);
            PCC.wn  = 5 / (PCC.xi * PCC.tau);
            PCC.kp  = 2 * PCC.L * PCC.wn * PCC.xi - PCC.R;
            PCC.ki  = PCC.L * PCC.wn^2;
            PCC.u_max = 5 * M2C.R * M2C.ix_max;
        end

        function s = toStruct(obj)
            % s: Convert to struct for code generation
            props = properties(obj);
            for i = 1:length(props)
                s.(props{i}) = obj.(props{i});
            end
        end
    end
end