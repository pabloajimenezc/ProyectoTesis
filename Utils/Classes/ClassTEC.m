classdef ClassTEC
    % ClassTEC: Total Energy Balance Control
    % Proportional Integral controller with feedback first-order low-pass filtering
    % Low-pass filter: yf[t] = alpha * yf[t-1] + (1-alpha) * y[t]

    properties
        
        Ts    % Sampling time
        k     % Plant model gain
        xi    % Closed loop damping
        wn    % Closed loop bandwith
        kp    % Proportional gain
        ki    % Integrator gain
        u_max % Max. control action
        tau_f % Filter time constante
        alpha % Filter constant
    end

    methods
        function TEC = ClassTEC(Ts, M2C, PCC)
            % ClassTEB: Construct an instance of this class
                        
            TEC.Ts    = Ts;
            TEC.k     = M2C.Ax_max / (3 * M2C.C * M2C.Vc_ref);
            TEC.xi    = 1 / sqrt(2);
            TEC.wn    = PCC.wn / 5;
            TEC.kp    = TEC.wn / TEC.k;
            TEC.ki    = TEC.wn^2 / (TEC.k + 2 * TEC.k * TEC.xi);
            TEC.u_max = M2C.ix_max;
            TEC.tau_f = 1 / (TEC.wn + 2 * TEC.wn * TEC.xi);
            TEC.alpha = exp(-TEC.Ts / TEC.tau_f);
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