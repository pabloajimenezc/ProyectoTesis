classdef ClassM3C% < rl.env.MATLABEnvironment

properties (Constant)
    A = [1  1  1  0  0  0  0  0  0;   % M3C incidence matrix
         0  0  0  1  1  1  0  0  0;
         0  0  0  0  0  0  1  1  1;
        -1  0  0 -1  0  0 -1  0  0;
         0 -1  0  0 -1  0  0 -1  0;
         0  0 -1  0  0 -1  0  0 -1];
    pinvA = pinv(ClassM3C.A);         % Pseudo inverse of incidence matrix
    m = size(ClassM3C.A, 2);          % Number of clusters
    N = null(ClassM3C.A, 'rational'); % Null matrix
    n = size(ClassM3C.N, 2);          % Number of linear independent circulating currents
    pinvN = pinv(ClassM3C.N);         % Pseudo inverse of null matrix
end

properties  % Constants
    Ti  % Integration step
    R   % Branch resistance
    L   % Branch inductance
    Csm % Submodule capacitance
    Nsm % Submodules per cluster
    C   % Cluster capacitance
    Rx  % Input filter resistance
    Lx  % Input filter inductance
    Ry  % Output filter resistance
    Ly  % Output filter inductance
    As  % Current continuous model transition matrix
    Bs  % Current continuous model input matrix
    Ad  % Current discrete model transition matrix
    Bd  % Current discrete model input matrix
end

properties % Variables
    ixy % External currents
    is  % Cluster current
    pis % Cluster current first derivative
    iB  % Basic current
    iz  % Circulating current
    ie  % Linear Independent circulating current
    vc  % Cluster capacitor voltage
    Ec  % Cluster capacitor energy
end

methods
    function obj = ClassM3C(specs, init_vals)
        % ClassM3C: Construct an instance of this class

        % Constants
        obj.Ti  = specs.Ti;
        obj.R   = specs.R;
        obj.L   = specs.L;
        obj.Csm = specs.Csm;
        obj.Nsm = specs.Nsm;
        obj.C   = obj.Csm / obj.Nsm;
        obj.Rx  = specs.Rx;
        obj.Lx  = specs.Lx;
        obj.Ry  = specs.Ry;
        obj.Ly  = specs.Ly;

        Mx = [1, 1, 1, 0, 0, 0, 0, 0, 0;
              1, 1, 1, 0, 0, 0, 0, 0, 0;
              1, 1, 1, 0, 0, 0, 0, 0, 0;
              0, 0, 0, 1, 1, 1, 0, 0, 0;
              0, 0, 0, 1, 1, 1, 0, 0, 0;
              0, 0, 0, 1, 1, 1, 0, 0, 0;
              0, 0, 0, 0, 0, 0, 1, 1, 1;
              0, 0, 0, 0, 0, 0, 1, 1, 1;
              0, 0, 0, 0, 0, 0, 1, 1, 1];

        My = [1, 0, 0, 1, 0, 0, 1, 0, 0;
              0, 1, 0, 0, 1, 0, 0, 1, 0;
              0, 0, 1, 0, 0, 1, 0, 0, 1;
              1, 0, 0, 1, 0, 0, 1, 0, 0;
              0, 1, 0, 0, 1, 0, 0, 1, 0;
              0, 0, 1, 0, 0, 1, 0, 0, 1;
              1, 0, 0, 1, 0, 0, 1, 0, 0;
              0, 1, 0, 0, 1, 0, 0, 1, 0;
              0, 0, 1, 0, 0, 1, 0, 0, 1];

        MR = Mx * obj.Rx + eye(ClassM3C.m) * obj.R + My * obj.Ry;
        ML = Mx * obj.Lx + eye(ClassM3C.m) * obj.L + My * obj.Ly;

        obj.As = -ML\MR;
        obj.Bs = -inv(ML);

        obj.Ad     = expm(obj.Ti * obj.As);
        integrated = obj.As \ (obj.Ad - eye(ClassM3C.m));
        obj.Bd     = integrated * obj.Bs;

        % Variables
        obj = obj.reset(init_vals);
    end
end

methods
    function obj = step(obj, vs, vxy, vo)
        % step: Perform a step of the numerical integration of the system's transition function
        
        % Basic voltages
        vB = ClassM3C.A' * vxy;

        % Get cluster current derivatives
        obj.pis = obj.As * obj.is + obj.Bs * (vs - vo - vB);
        
        % Update system states
        obj.Ec = obj.Ec + obj.Ti * vs .* obj.is;
        obj.vc = nops(2 * obj.Ec / obj.C, 'sqrt');
        obj.is = obj.Ad * obj.is + obj.Bd * (vs - vo - vB);

        % Basic currents
        obj.ixy = ClassM3C.A * obj.is;
        obj.iB = ClassM3C.pinvA * obj.ixy;
        
        % Circulating currents
        obj.iz = obj.is - obj.iB;
        obj.ie = ClassM3C.pinvN * obj.iz;
    end

    function obj = reset(obj, init_vals)
        % reset: Reset all variables to their initial values specified in 'init_vals'
        
        obj.is  = init_vals.is0;
        obj.pis = zeros(size(obj.is));
        obj.ixy = ClassM3C.A * obj.is;
        obj.iB  = ClassM3C.pinvA * obj.ixy;
        obj.iz  = obj.is - obj.iB;
        obj.ie  = ClassM3C.pinvN * obj.iz;
        
        obj.vc  = init_vals.vc0;
        obj.Ec  = obj.C / 2 * nops(obj.vc, 'pow2');
    end

end
end