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
    A_MMCC % Converter current continuous transition matrix with coupled IM 
    B_MMCC % Converter current continuous input matrix with coupled IM 
    A_IM   % IM rotor current continuous transition matrix with coupled MMCC
    As
    Bs
    x      % State variables
end

methods
    function obj = ClassSystem(specs)
        % ClassSystem: Construct an instance of this class      
        
        % Constants
        obj.Ti  = specs.Ti;
        obj.MMCC = specs.MMCC;
        obj.IM = specs.IM;
        obj.Ss = [eye(obj.MMCC.m), zeros(obj.MMCC.m, 3)];
        obj.Sr = [zeros(3, obj.MMCC.m), eye(3)];

        obj.MR = obj.MMCC.Mx * obj.MMCC.Rx + eye(obj.MMCC.m) * obj.MMCC.R + obj.MMCC.ay' * (obj.MMCC.Ry + obj.IM.Rs) * obj.MMCC.ay;
        obj.ML = obj.MMCC.Mx * obj.MMCC.Lx + eye(obj.MMCC.m) * obj.MMCC.L + obj.MMCC.ay' * (obj.MMCC.Ly + obj.IM.Lss) * obj.MMCC.ay;

        % Variables
        obj = obj.reset();
    end
end

methods
    function obj = step(obj, vs, vo)
        % step: Perform a step of the numerical integration of the system's transition function
      
        Req = 

        obj.B_MMCC = -inv(obj.ML * obj.Ss + obj.ay' * obj.IM.Lsr(obj.IM.g) * obj.Sr);        
        obj.A_MMCC = obj.B_MMCC * (obj.MR * obj.Ss + obj.ay' * obj.IM.dLsr_dt(obj.IM.g, obj.IM.w) * obj.Sr);

        obj.A_IM = -(obj.IM.Lrr * obj.Sr + obj.IM.Lrs(obj.IM.g) * obj.my * obj.Ss) \ (obj.IM.Rr * obj.Sr + obj.IM.dLrs_dt(obj.IM.g, obj.IM.w) * obj.my * obj.Ss);

        obj.As = [obj.A_MMCC; obj.A_IM];
        obj.Bs = [obj.B_MMCC; zeros(3, 1)];

        % Basic voltages
        vBx = obj.MMCC.ax' * vxy;
        
        % Electrical torque
        obj.IM.Te = obj.IM.np / 2 * obj.IM.is' * obj.IM.dLsr_dg(obj.IM.g) * obj.IM.ir;

        % Update system states
        obj.Ec = obj.Ec + obj.Ti * vs .* obj.is;
        obj.vc = sqrt(2 * abs(obj.Ec) / obj.C) .* sign(obj.Ec);

        dx = obj.As * obj.x + obj.Bd * (vs - vo - vB);
        dw = obj.IM.Te * obj.IM.np / 2 / obj.IM.J;

        obj.x    = obj.x + dx * obj.Ti;
        obj.IM.w = obj.IM.w + dw * obj.Ti;

        % Cluster currents
        obj.is = obj.Ss * obj.x;

        % Basic currents
        obj.ixy = obj.A * obj.is;
        obj.iB = obj.pinvA * obj.ixy;
        
        % Circulating currents
        obj.iz = obj.is - obj.iB;
        obj.ie = obj.pinvN * obj.iz;

        % Machine rotor angle
        obj.IM.g = obj.IM.g + obj.IM.np * obj.IM.w * obj.Ti;
        
        % Machine currents and flux
        obj.IM.ir = obj.Sr * obj.x;
        obj.IM.is = -obj.ixy(obj.p+1:end);
        obj.IM.i  = [obj.IM.is; obj.IM.ir];
        obj.IM.F = obj.IM.L(obj.IM.g) * obj.IM.i;

        % Machine stator voltage
        dis = obj.Ss * dx;
        dixy = obj.A * dis;
        dis_IM = -dixy(obj.p+1:end);
        dir_IM = obj.Sr * dx;
        obj.vy = obj.IM.Rs * obj.IM.is + obj.IM.Lss * dis_IM + obj.IM.dLsr_dt(obj.IM.g, obj.IM.w) * obj.IM.ir + obj.IM.Lsr(obj.IM.g) * dir_IM;
    end

    function obj = reset(obj)
        % reset: Reset all variables to their initial values specified in 'init_vals'
        
        obj.x    = zeros(obj.MMCC.m + 3, 1);
        obj.MMCC = obj.MMCC.reset(obj.MMCC.init_vals);
        obj.IM   = obj.IM.reset();
    end

end
end