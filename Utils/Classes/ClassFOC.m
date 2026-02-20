classdef ClassFOC
    % ClassFOC: Induction machine rotor field oriented control
    % Proportional Integral controller

    properties
        Ts    % Sampling time
        wn    % Closed loop bandwith
        xi    % Closed loop damping
        u_max % Max. control action
        
        % Flux PI
        kp_F  % Proportional gain
        ki_F  % Integral gain
        
        % Speed PI
        k_w   % Plant model gain
        kp_w  % Proportional gain
        ki_w  % Integral gain
    end

    methods
        function FOC = ClassFOC(Ts, IM, MCC, M2C)
            % ClassFOC: Construct an instance of this class
            
            FOC.Ts    = Ts;
            FOC.wn    = MCC.wn / 10;
            FOC.xi    = 1 / sqrt(2);
            FOC.u_max = M2C.iy_max;
            FOC.kp_F  = (2 * FOC.xi * FOC.wn * IM.tau_r - 1) / IM.Lm;
            FOC.ki_F  = FOC.wn^2 * IM.tau_r / IM.Lm;
            FOC.k_w   = IM.FrN * IM.kT * IM.np / IM.J;
            FOC.kp_w  = 2 * FOC.wn * FOC.xi / FOC.k_w;
            FOC.ki_w  = FOC.wn^2 / FOC.k_w;
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