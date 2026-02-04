classdef ClassKF
    % ClassKF: Scheduled-Gain Kalman Filter
    % Measure current and speed is known, slow varying parameter
    % Alpha-beta

    properties
        Re    % Coupled equivalent converter-machine resistance
        Le    % Coupled equivalent converter-machine inductance
        tau_e % Coupled equivalent converter-machine stator time constant
        Ts    % Sampling time
        nx    % # of state variables
        nu    % # of inputs
        ny    % # of measurements
        r     % Current measurement noise covariance
        R     % Measurement noise covariance matrix
        qi    % Current model noise covariance
        qF    % Flux model noise covariance
        Q     % Process noise covariance matrix
        x1_mu % Initial state estimations
        A     % Continuous-time state matrix
        B     % Continuous-time input matrix
        C     % Output matrix
        we_steps      % # of Kalman gains
        we_list       % Mechanical speed ([rad eli]) support vector
        gain_schedule % Gain schedule
    end

    methods
        function KF = ClassKF(Ts, IM, M2C)
            % ClassKF: Construct an instance of this class

            KF.Re    = M2C.R/2 + IM.Ro;
            KF.Le    = M2C.L/2 + IM.Lo;
            KF.tau_e = KF.Le / KF.Re;
            KF.Ts    = Ts;
            KF.nx    = 4;
            KF.nu    = 2;
            KF.ny    = 2;
            KF.qi    = 1e-4;
            KF.qF    = 1e-9;
            KF.r     = 1e-3;
            KF.Q     = diag([KF.qi, KF.qi, KF.qF, KF.qF]);
            KF.R     = KF.r*eye(KF.ny);
            KF.x1_mu = zeros(KF.nx, 1);
            % KF.x1_mu = [IM.isdN; 0; IM.FrN; 0];

            KF.A       = zeros(KF.nx);
            KF.A(1, 1) = -1/KF.tau_e;
            KF.A(1, 3) = IM.kr/(IM.tau_r*KF.Le);
            KF.A(1, 4) = IM.kr/KF.Le; % * we
            KF.A(2, 2) = -1/KF.tau_e;
            KF.A(2, 3) = -IM.kr/KF.Le; % * we
            KF.A(2, 4) = IM.kr/(IM.tau_r*KF.Le);
            KF.A(3, 1) = IM.Lm/IM.tau_r;
            KF.A(3, 3) = -1/IM.tau_r;
            KF.A(3, 4) = -1; % * we
            KF.A(4, 2) = IM.Lm/IM.tau_r;
            KF.A(4, 3) = 1; % * we
            KF.A(4, 4) = -1/IM.tau_r;

            KF.B       = zeros(KF.nx, KF.nu);
            KF.B(1, 1) = 1/KF.Le;
            KF.B(2, 2) = 1/KF.Le;

            KF.C = zeros(KF.ny, KF.nx);
            KF.C(1, 1) = 1;
            KF.C(2, 2) = 1;

            % Discretization (this step is performed online)
            % KF.Ad = eye(KF.nx) + KF.Ts * KF.A + 0.5 * (KF.Ts * KF.A)^2;
            % KF.Bd = (eye(KF.nx) + 0.5 * KF.Ts * KF.A) * KF.B * KF.Ts;

            KF.we_steps = 200;
            KF.gain_schedule = zeros(KF.nx, KF.ny, KF.we_steps);
            KF.we_list = IM.w_max * IM.np * linspace(-1.1, 1.1, KF.we_steps);
            
            for i = 1:KF.we_steps
                we = KF.we_list(i);
                A = KF.A;
                A(1, 4) = KF.A(1, 4) * we;
                A(2, 3) = KF.A(2, 3) * we;
                A(3, 4) = KF.A(3, 4) * we;
                A(4, 3) = KF.A(4, 3) * we;
                Ad = eye(KF.nx) + KF.Ts * A + 0.5 * (KF.Ts * A)^2;
                [~, K] = idare(Ad', KF.C', KF.Q, KF.R);
                K = K.';
                KF.gain_schedule(:, :, i) = K;
            end
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