classdef ClassCCC
    % ClassCCC: Linearly Independent Circulating Current Control
    % Linear Model Predictive Control with first-order low-pass reference filtering
    % Low-pass filter: yf[t] = alpha * yf[t-1] + (1-alpha) * y[t]
    properties
        T      % Cluster voltage mapping ([vsP; vsm; vse] = T*vs) => vs = T^-1 * [vsP; vsm; vse]
        pinvT
        Ts     % Sampling time
        nx     % # of state variables (LICCs)
        nu     % # of control actions (decoupled voltage)
        A      % Discrete time state matrix
        B      % Discrete time input matrix
        Q      % Reference tracking weighting matrix
        lambda % Control effort weighting factor
        R      % Control action weighting matrix
        QT     % Terminal cost matrix
        H      % Hessian
        Aineq  % Control action constraints matrix
        tau_f  % Filter time constante
        alpha  % Filter constant
    end

    methods
        function CCC = ClassCCC(Ts, M2C, IEC, RFT)
            % ClassCCC: Construct an instance of this class
            
            CCC.T = -[[1, 1, 1, -1, -1, -1]/2;
                          RFT.abc2ab * M2C.Ay;
                                   M2C.pinvN];
            CCC.pinvT = pinv(CCC.T);
            CCC.Ts = Ts;
            CCC.nx = M2C.n;
            CCC.nu = M2C.n;
            % Continuous time model
            A = -eye(CCC.nx) * M2C.R / M2C.L;
            B = eye(CCC.nu) / M2C.L;
            % Single-step discrete time model
            AB = expm(CCC.Ts * [A, B; zeros(CCC.nx, CCC.nx+CCC.nu)]);
            A  = AB(1:CCC.nx, 1:CCC.nx);
            B  = AB(1:CCC.nx, CCC.nx+1:end);
            % Single-step weighting matrices
            Q = eye(CCC.nx)/M2C.is_max^2;
            CCC.lambda = 10;
            R = CCC.lambda*eye(CCC.nu)/M2C.Vc_ref^2;
            CCC.QT = idare(A, B, Q, R, zeros(CCC.nx), eye(CCC.nx));
            % 2-steps horizon
            % CCC.Q = [Q, zeros(CCC.nx);
            %          zeros(CCC.nx), CCC.QT];
            % CCC.R = [R, zeros(CCC.nu);
            %          zeros(CCC.nu), R];
            CCC.Q = blkdiag(Q, CCC.QT);
            CCC.R = blkdiag(R, R);
            CCC.B = [B, zeros(CCC.nx, CCC.nu);
                     A*B, B];
            CCC.A = [A; A^2];
            CCC.H      = CCC.B' * CCC.Q * CCC.B + CCC.R;
            CCC.Aineq  = [CCC.pinvT(:, 4:5), zeros(M2C.m, CCC.nu);
                          zeros(M2C.m, CCC.nu), CCC.pinvT(:, 4:5);
                         -CCC.pinvT(:, 4:5), zeros(M2C.m, CCC.nu);
                          zeros(M2C.m, CCC.nu), -CCC.pinvT(:, 4:5)];
            CCC.tau_f = IEC.Ts/5;
            CCC.alpha = exp(-CCC.Ts/CCC.tau_f);
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