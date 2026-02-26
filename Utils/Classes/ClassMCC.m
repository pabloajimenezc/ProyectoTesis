classdef ClassMCC
    % ClassMCC: Induction machine current control
    % Proportional Integral controller, dq reference frame with feedforward compensation

    properties
        Ts    % Sampling time
        Re    % Coupled equivalent converter-machine resistance
        Le    % Coupled equivalent converter-machine inductance
        tau_e % Coupled equivalent converter-machine time constant
        xi    % Closed loop damping
        wn    % Closed loop bandwith
        kp    % PI proportional gain
        ki    % PI integral gain
        u_max % Max. control action
    end

    methods
        function MCC = ClassMCC(Ts, IM, M2C)
            % ClassMCC: Construct an instance of this class

            MCC.Ts    = Ts;
            MCC.Re    = M2C.R + 2*IM.Ro;
            MCC.Le    = M2C.L + 2*IM.Lo;
            MCC.tau_e = MCC.Le / MCC.Re;
            MCC.xi    = 1 / sqrt(2);
            MCC.wn    = 1 / (MCC.xi * MCC.tau_e);
            MCC.kp    = 2 * MCC.Le * MCC.wn * MCC.xi - MCC.Re;
            MCC.ki    = MCC.Le * MCC.wn^2;
            MCC.u_max = 2*M2C.vy_max;
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