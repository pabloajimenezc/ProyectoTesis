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
            % CCC.lambda = 1000;
            % CCC.lambda = 100;
            % CCC.lambda = 50;
            % CCC.lambda = 25;
            % CCC.lambda = 10;
            % CCC.lambda = 5;
            CCC.lambda = 1;
            % CCC.lambda = 0.1;
            R = CCC.lambda*eye(M2C.n)/M2C.Vc_ref^2;
            CCC.QT = idare(A, B, Q, R, [], []);
            
            % % 2-steps horizon
            % CCC.Q = blkdiag(Q, CCC.QT);
            % CCC.R = blkdiag(R, R);
            % CCC.B = [B, zeros(M2C.n); A*B, B];
            % CCC.A = [A; A^2];
            % Aineq  = blkdiag(M2C.pinvTe, M2C.pinvTe);

            % % 3-steps horizon
            % CCC.Q = blkdiag(Q, Q, CCC.QT);
            % CCC.R = blkdiag(R, R, R);
            % CCC.B = [B, zeros(M2C.n, 2*M2C.n); A*B, B, zeros(M2C.n); A^2*B, A*B, B];
            % CCC.A = [A; A^2; A^3];
            % Aineq  = blkdiag(M2C.pinvTe, M2C.pinvTe); % Constraints only on first 2 steps
            % Aineq = [Aineq, zeros(size(Aineq, 1), M2C.n)];

            % 4-steps horizon
            CCC.Q = blkdiag(Q, Q, Q, CCC.QT);
            CCC.R = blkdiag(R, R, R, R);
            CCC.B = [B, zeros(M2C.n, 3*M2C.n);
                     A*B, B, zeros(M2C.n, 2*M2C.n);
                     A^2*B, A*B, B, zeros(M2C.n);
                     A^3*B, A^2*B, A*B, B];
            CCC.A = [A; A^2; A^3; A^4];
            Aineq  = blkdiag(M2C.pinvTe, M2C.pinvTe); % Constraints only on first 2 steps
            Aineq = [Aineq, zeros(size(Aineq, 1), 2*M2C.n)];

            % Horizon independent
            CCC.Aineq = [Aineq; -Aineq];
            % CCC.H      = 2 * (CCC.B' * CCC.Q * CCC.B + CCC.R);
            CCC.tau_f = IEC.Ts/5;
            CCC.alpha = exp(-CCC.Ts/CCC.tau_f);


            % Slew Rate
            I = eye(M2C.n);
            Z = zeros(M2C.n);
            D = [I, Z, Z, Z;
                -I, I, Z, Z;
                Z, -I, I, Z;
                Z, Z, -I, I];
            E = [I; Z; Z; Z];
            
            CCC.H = 2 * (CCC.B' * CCC.Q * CCC.B + D' * CCC.R * D);
            CCC.R = D' * CCC.R * E;
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