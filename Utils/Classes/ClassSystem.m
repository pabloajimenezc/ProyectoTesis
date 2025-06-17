classdef ClassSystem

properties % Constants
    Ti
    Ss
    Sr
    MR
    ML
    RFT
    nx
end

properties % Variables
    x      % State variables
    MMCC   % Power converter
    IM     % Induction Machine
    InGrid % Input grid
    vxy    % External voltage
    As     % Full system continous time transition matrix
    Bs     % Full system continous time input matrix
end

methods
    function obj = ClassSystem(specs)
        % ClassSystem: Construct an instance of this class      
        
        % Constants
        obj.Ti     = specs.Ti;
        obj.RFT    = specs.RFT;
        obj.MMCC   = specs.MMCC;
        obj.IM     = specs.IM;
        obj.InGrid = specs.InGrid;
        obj.Ss     = [eye(obj.MMCC.m), zeros(obj.MMCC.m, 3)];
        obj.Sr     = [zeros(3, obj.MMCC.m), eye(3)];

        obj.MR = obj.MMCC.Mx * obj.MMCC.Rx + eye(obj.MMCC.m) * obj.MMCC.Rb + obj.MMCC.ay' * (obj.MMCC.Ry + obj.IM.Rs) * obj.MMCC.ay;
        obj.ML = obj.MMCC.Mx * obj.MMCC.Lx + eye(obj.MMCC.m) * obj.MMCC.Lb + obj.MMCC.ay' * (obj.MMCC.Ly + obj.IM.Lss) * obj.MMCC.ay;

        obj.nx = obj.MMCC.m + 3;

        % Variables
        obj = obj.reset();
    end
end

methods
    function obj = step(obj, vs, vo)
        % step: Perform a step of the numerical integration of the system's transition function

        %%% Update system model

        Req1 = obj.MR * obj.Ss + obj.MMCC.ay' * obj.IM.dLsr_dt(obj.IM.g, obj.IM.w) * obj.Sr;
        Req2 = obj.IM.dLsr_dt(obj.IM.g, obj.IM.w)' * obj.MMCC.ay * obj.Ss + obj.IM.Rr * obj.Sr;
        Req = [Req1; Req2];

        Leq1 = obj.ML * obj.Ss + obj.MMCC.ay' * obj.IM.Lsr(obj.IM.g) * obj.Sr;
        Leq2 = obj.IM.Lsr(obj.IM.g)' * obj.MMCC.ay * obj.Ss + obj.IM.Lrr * obj.Sr;
        Leq = [Leq1; Leq2];

        invLeq = inv(Leq);

        obj.As = -invLeq * Req;
        obj.Bs = -invLeq;

        %%% Basic input voltage

        % Update
        vBx = obj.MMCC.ax' * obj.InGrid.vx;
        
        %%% Mechanical speed

        % Electrical torque
        obj.IM.Te = obj.IM.np / 2 * obj.IM.is' * obj.IM.dLsr_dg(obj.IM.g) * obj.IM.ir;

        % % Forward Euler derivatives
        % dw = obj.IM.Te / obj.IM.J;

        % Runge Kutta 4 derivatives
        B_u = obj.IM.Te / obj.IM.J;
        k1 = B_u;
        k2 = 0.5 * obj.Ti * k1 + B_u;
        k3 = 0.5 * obj.Ti * k2 + B_u;
        k4 = obj.Ti * k3 + B_u;
        dw = (k1 + 2 * k2 + 2 * k3 + k4) / 6;

        % Update
        obj.IM.w = obj.IM.w + obj.Ti * dw;

        %%% Machine rotor angle
        obj.IM.g = obj.IM.g + obj.IM.w * obj.Ti;

        %%% Converter cluster capacitor energy and voltage

        % % Forward Euler derivatives
        % dE = vs .* obj.MMCC.is;

        % Runge Kutta 4 derivatives
        B_u = vs .* obj.MMCC.is;
        k1  = B_u;
        k2  = 0.5 * obj.Ti * k1 + B_u;
        k3  = 0.5 * obj.Ti * k2 + B_u;
        k4  = obj.Ti * k3 + B_u;
        dE  = (k1 + 2 * k2 + 2 * k3 + k4) / 6;

        % Update
        obj.MMCC.Ec = obj.MMCC.Ec + obj.Ti * dE;
        obj.MMCC.vc = sqrt(2 * abs(obj.MMCC.Ec) / obj.MMCC.C) .* sign(obj.MMCC.Ec);

        %%% State variables (Converter and rotor currents)
        
        % Input vector
        u = [vs - vo - vBx; zeros(3, 1)];

        % % Forward Euler derivatives
        % dx = obj.As * obj.x + obj.Bs * u;

        % Runge Kutta 4 derivatives
        A_x = obj.As * obj.x;
        B_u = obj.Bs * u;
        k1  = A_x + B_u;
        k2  = A_x + obj.As * (0.5 * obj.Ti * k1) + B_u;
        k3  = A_x + obj.As * (0.5 * obj.Ti * k2) + B_u;
        k4  = A_x + obj.As * (obj.Ti * k3) + B_u;
        dx  = (k1 + 2 * k2 + 2 * k3 + k4) / 6;

        % Update
        obj.x = obj.x + obj.Ti * dx;

        %%% Update other system variables

        % Cluster currents
        obj.MMCC.is = obj.Ss * obj.x;
        
        % External currents
        ixy = obj.MMCC.A * obj.MMCC.is;

        % Machine currents and flux
        obj.IM.is = -ixy(obj.MMCC.p+1:end);
        obj.IM.ir = obj.Sr * obj.x;
        obj.IM.i  = [obj.IM.is; obj.IM.ir];
        obj.IM.F  = obj.IM.L(obj.IM.g) * obj.IM.i;
        obj.IM.Fs = obj.IM.F(1:3);
        obj.IM.Fr = obj.IM.F(4:6);

        % Input voltage
        obj.InGrid = obj.InGrid.step();
        obj.vxy = [obj.InGrid.vx; obj.IM.vs];

        %%% Machine stator voltage
        dis    = obj.Ss * dx;
        dixy   = obj.MMCC.A * dis;
        dis_IM = -dixy(obj.MMCC.p+1:end);
        dir_IM = obj.Sr * dx;
        obj.IM.vs = obj.IM.Rs * obj.IM.is + obj.IM.Lss * dis_IM + obj.IM.dLsr_dt(obj.IM.g, obj.IM.w) * obj.IM.ir + obj.IM.Lsr(obj.IM.g) * dir_IM;
    end

    function obj = reset(obj)
        % reset: Reset all variables to their initial values specified in 'init_vals'
        
        obj.x      = zeros(obj.MMCC.m + 3, 1);
        obj.MMCC   = obj.MMCC.reset(obj.MMCC.init_vals);
        obj.IM     = obj.IM.reset(obj.IM.init_vals);
        obj.InGrid = obj.InGrid.reset(obj.InGrid.init_vals);
        obj.vxy    = [obj.InGrid.vx; obj.IM.vs];
    end

end
end