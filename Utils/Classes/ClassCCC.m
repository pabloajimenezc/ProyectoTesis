classdef ClassCCC
    % ClassCCC: Linearly Independent Circulating Current Control
    % Linear Model Predictive Control with first-order low-pass reference filtering
    % and coupled constraints
    % Low-pass filter: yf[t] = alpha * yf[t-1] + (1-alpha) * y[t]
    properties
        Ts     % Sampling time
        A      % Discrete time state matrix
        B      % Discrete time input matrix
        Q      % Reference tracking weighting matrix
        lambda % Control effort weighting factor
        R      % Control action weighting matrix
        QT     % Terminal cost matrix
        H      % Hessian
        Aineq  % Control action constraints matrix
        tau_f  % Filter time constant
        alpha  % Filter constant
    end

    methods
        function CCC = ClassCCC(Ts, M2C, IEC)
            % ClassCCC: Construct an instance of this class
            
            CCC.Ts = Ts;
            
            % Continuous time model
            A = -eye(M2C.n) * M2C.R / M2C.L;
            B = -eye(M2C.n) / M2C.L;
            
            % Single-step discrete time model
            AB = expm(CCC.Ts * [A, B; zeros(M2C.n, 2*M2C.n)]);
            A  = AB(1:M2C.n, 1:M2C.n);
            B  = AB(1:M2C.n, M2C.n+1:end);
            
            % Single-step weighting matrices
            Q = eye(M2C.n)/M2C.is_max^2;
            CCC.lambda = 50;
            % CCC.lambda = 15;
            % CCC.lambda = 10;
            % CCC.lambda = 5;
            % CCC.lambda = 1;
            % CCC.lambda = 0.1;
            R = CCC.lambda*eye(M2C.n)/M2C.Vc_ref^2;
            CCC.QT = idare(A, B, Q, R, [], []);
            
            % 2-steps horizon
            CCC.Q = blkdiag(Q, CCC.QT);
            CCC.R = blkdiag(R, R);
            CCC.B = [B, zeros(M2C.n); A*B, B];
            CCC.A = [A; A^2];
            Aineq  = blkdiag(M2C.pinvTe, M2C.pinvTe);

            % Horizon independent
            CCC.Aineq = [Aineq; -Aineq];
            CCC.H      = 2 * (CCC.B' * CCC.Q * CCC.B + CCC.R);
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