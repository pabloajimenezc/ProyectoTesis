classdef ClassSystem

properties % Constants
    Ti
    Ss
    Sr
    MR
    ML
end

properties % Variables
    MMCC   % Power converter
    IM     % Induction Machine
    IOGrid % Input/output grid
    vx     % Input voltage
    vy     % Output voltage
    vxy
    As     % Full system continous time transition matrix
    Bs     % Full system continous time input matrix
    x      % State variables
end

methods
    function obj = ClassSystem(specs)
        % ClassSystem: Construct an instance of this class      
        
        % Constants
        obj.Ti  = specs.Ti;
        obj.MMCC = specs.MMCC;
        obj.IM = specs.IM;
        obj.IOGrid = specs.IOGrid;
        obj.Ss = [eye(obj.MMCC.m), zeros(obj.MMCC.m, 3)];
        obj.Sr = [zeros(3, obj.MMCC.m), eye(3)];

        obj.MR = obj.MMCC.Mx * obj.MMCC.Rx + eye(obj.MMCC.m) * obj.MMCC.Rb + obj.MMCC.ay' * (obj.MMCC.Ry + obj.IM.Rs) * obj.MMCC.ay;
        obj.ML = obj.MMCC.Mx * obj.MMCC.Lx + eye(obj.MMCC.m) * obj.MMCC.Lb + obj.MMCC.ay' * (obj.MMCC.Ly + obj.IM.Lss) * obj.MMCC.ay;

        % Variables
        obj = obj.reset();
    end
end

methods
    function obj = step(obj, vs, vo)
        % step: Perform a step of the numerical integration of the system's transition function
      
        % Req1 = (obj.MMCC.Rx * obj.MMCC.Mx + obj.MMCC.Rb + obj.MMCC.ay' * (obj.MMCC.Ry + obj.IM.Rs) * obj.MMCC.ay) * obj.Ss + obj.MMCC.ay' * obj.IM.dLsr_dt(obj.IM.g, obj.IM.w) * obj.Sr;
        Req1 = obj.MR * obj.Ss + obj.MMCC.ay' * obj.IM.dLsr_dt(obj.IM.g, obj.IM.w) * obj.Sr;
        Req2 = obj.IM.dLsr_dt(obj.IM.g, obj.IM.w)' * obj.MMCC.ay * obj.Ss + obj.IM.Rr * obj.Sr;
        Req = [Req1; Req2];

        % Leq1 = (obj.MMCC.Lx * obj.MMCC.Mx + obj.MMCC.Lb + obj.MMCC.ay' * (obj.MMCC.Ly + obj.IM.Lss) * obj.MMCC.ay) * obj.Ss + obj.MMCC.ay' * obj.IM.Lsr(obj.IM.g) * obj.Sr;
        Leq1 = obj.ML * obj.Ss + obj.MMCC.ay' * obj.IM.Lsr(obj.IM.g) * obj.Sr;
        Leq2 = obj.IM.Lsr(obj.IM.g)' * obj.MMCC.ay * obj.Ss + obj.IM.Lrr * obj.Sr;
        Leq = [Leq1; Leq2];

        invLeq = inv(Leq);

        obj.As = -invLeq * Req;
        obj.Bs = -invLeq;

        % Basic voltages
        obj.vx = obj.IOGrid.vxy(1:obj.MMCC.p);
        vBx = obj.MMCC.ax' * obj.vx;
        
        % Electrical torque
        obj.IM.Te = obj.IM.np / 2 * obj.IM.is' * obj.IM.dLsr_dg(obj.IM.g) * obj.IM.ir;

        % Update system states

        %%% Energy
        % % Forward Euler derivatives
        % dE = vs .* obj.MMCC.is;

        % Runge Kutta 4 derivatives
        Asx = 0;
        Bsu = vs .* obj.MMCC.is;
        k1x = Asx + Bsu;
        k2x = Asx + 0.5 * obj.Ti * k1x + Bsu;
        k3x = Asx + 0.5 * obj.Ti * k2x + Bsu;
        k4x = Asx + obj.Ti * k3x + Bsu;
        dE = (k1x + 2 * k2x + 2 *k3x + k4x) / 6;

        % Update
        obj.MMCC.Ec = obj.MMCC.Ec + obj.Ti * dE;
        obj.MMCC.vc = sqrt(2 * abs(obj.MMCC.Ec) / obj.MMCC.C) .* sign(obj.MMCC.Ec);

        %%% Converter currents
        % Input vector
        u = [(vs - vo - vBx); zeros(3, 1)];

        % % Forward Euler derivatives
        % dx = obj.As * obj.x + obj.Bs * u;

        % Runge Kutta 4 derivatives
        Asx = obj.As * obj.x;
        Bsu = obj.Bs * u;
        k1x = Asx + Bsu;
        k2x = Asx + obj.As * (0.5 * obj.Ti * k1x) + Bsu;
        k3x = Asx + obj.As * (0.5 * obj.Ti * k2x) + Bsu;
        k4x = Asx + obj.As * (obj.Ti * k3x) + Bsu;
        dx = (k1x + 2 * k2x + 2 *k3x + k4x) / 6;

        % Update
        obj.x = obj.x + obj.Ti * dx;

        %%% Mechanical speed
        % % Forward Euler derivatives
        % dw = obj.IM.Te * obj.IM.np / 2 / obj.IM.J;

        % Runge Kutta 4 derivatives
        Asx = 0;
        Bsu = obj.IM.Te * obj.IM.np / 2 / obj.IM.J;
        k1x = Asx + Bsu;
        k2x = Asx + 0.5 * obj.Ti * k1x + Bsu;
        k3x = Asx + 0.5 * obj.Ti * k2x + Bsu;
        k4x = Asx + obj.Ti * k3x + Bsu;
        dw = (k1x + 2 * k2x + 2 *k3x + k4x) / 6;

        % Update
        obj.IM.w = obj.IM.w + obj.Ti * dw;

        % Cluster currents
        obj.MMCC.is = obj.Ss * obj.x;

        % Basic currents
        obj.MMCC.ixy = obj.MMCC.A * obj.MMCC.is;
        obj.MMCC.iB = obj.MMCC.pinvA * obj.MMCC.ixy;
        
        % Circulating currents
        obj.MMCC.iz = obj.MMCC.is - obj.MMCC.iB;
        obj.MMCC.ie = obj.MMCC.pinvN * obj.MMCC.iz;

        % Machine rotor angle
        obj.IM.g = obj.IM.g + obj.IM.np * obj.IM.w * obj.Ti;
        
        % Machine currents and flux
        obj.IM.ir = obj.Sr * obj.x;
        obj.IM.is = -obj.MMCC.ixy(obj.MMCC.p+1:end);
        obj.IM.i  = [obj.IM.is; obj.IM.ir];
        obj.IM.F = obj.IM.L(obj.IM.g) * obj.IM.i;

        % Machine stator voltage
        dis = obj.Ss * dx;
        dixy = obj.MMCC.A * dis;
        dis_IM = -dixy(obj.MMCC.p+1:end);
        dir_IM = obj.Sr * dx;
        obj.vy = obj.IM.Rs * obj.IM.is + obj.IM.Lss * dis_IM + obj.IM.dLsr_dt(obj.IM.g, obj.IM.w) * obj.IM.ir + obj.IM.Lsr(obj.IM.g) * dir_IM;

        % Input voltage
        obj.IOGrid = obj.IOGrid.step();
        obj.vxy = [obj.vx; obj.vy];
    end

    function obj = reset(obj)
        % reset: Reset all variables to their initial values specified in 'init_vals'
        
        obj.x      = zeros(obj.MMCC.m + 3, 1);
        obj.MMCC   = obj.MMCC.reset(obj.MMCC.init_vals);
        obj.IM     = obj.IM.reset();
        obj.IOGrid = obj.IOGrid.reset(obj.IOGrid.init_vals);
        obj.vx     = obj.IOGrid.vxy(1:obj.MMCC.p);
        obj.vy     = obj.IOGrid.vxy(1+obj.MMCC.p:end);
        obj.vxy    = [obj.vx; obj.vy];
    end

end
end