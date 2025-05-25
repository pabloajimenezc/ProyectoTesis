classdef ClassMMCC

properties % Constants
    Topology % Power converter topology 
    A       % Power converter incidence matrix
    pinvA   % Pseudo inverse of incidence matrix
    m       % Number of clusters
    N       % Null matrix
    n       % Number of linear independent circulating currents
    pinvN   % Pseudo inverse of null matrix
    p       % Number of input ports
    q       % Number of output ports
    Ti      % Integration step
    R       % Branch resistance
    L       % Branch inductance
    Csm     % Submodule capacitance
    Nsm     % Submodules per cluster
    C       % Cluster capacitance
    Rx      % Input filter resistance
    Lx      % Input filter inductance
    Ry      % Output filter resistance
    Ly      % Output filter inductance
    As      % Current continuous model transition matrix
    Bs      % Current continuous model input matrix
    Ad      % Current discrete model transition matrix
    Bd      % Current discrete model input matrix
end

properties % Variables
    ixy % External currents
    is  % Cluster current
    iB  % Basic current
    iz  % Circulating current
    ie  % Linear Independent circulating current
    vc  % Cluster capacitor voltage
    Ec  % Cluster capacitor energy
end

methods
    function obj = ClassMMCC(specs, init_vals)
        % ClassM3C: Construct an instance of this class

        % Topology dependent
        obj.Topology = specs.Topology;
        if strcmp(specs.Topology, 'M3C')
            obj.A = [1  1  1  0  0  0  0  0  0;
                     0  0  0  1  1  1  0  0  0;
                     0  0  0  0  0  0  1  1  1;
                    -1  0  0 -1  0  0 -1  0  0;
                     0 -1  0  0 -1  0  0 -1  0;
                     0  0 -1  0  0 -1  0  0 -1];
            obj.p = 3;
            obj.q = 3;
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
        elseif strcmp(specs.Topology, 'M2C')
            obj.A = [1  1  1  0  0  0;
                     0  0  0  1  1  1;
                    -1  0  0 -1  0  0;
                     0 -1  0  0 -1  0;
                     0  0 -1  0  0 -1];
            obj.p = 2;
            obj.q = 3;
            Mx = [1, 1, 1, 0, 0, 0;
                  1, 1, 1, 0, 0, 0;
                  1, 1, 1, 0, 0, 0;
                  0, 0, 0, 1, 1, 1;
                  0, 0, 0, 1, 1, 1;
                  0, 0, 0, 1, 1, 1];

            My = [1, 0, 0, 1, 0, 0,
                  0, 1, 0, 0, 1, 0;
                  0, 0, 1, 0, 0, 1;
                  1, 0, 0, 1, 0, 0;
                  0, 1, 0, 0, 1, 0;
                  0, 0, 1, 0, 0, 1];
        end
        obj.pinvA = pinv(obj.A);
        obj.m     = size(obj.A, 2);
        obj.N     = null(obj.A, 'rational');
        obj.n     = size(obj.N, 2);
        obj.pinvN = pinv(obj.N);
        
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

        MR = Mx * obj.Rx + eye(obj.m) * obj.R + My * obj.Ry;
        ML = Mx * obj.Lx + eye(obj.m) * obj.L + My * obj.Ly;

        obj.As = -ML\MR;
        obj.Bs = -inv(ML);

        obj.Ad     = expm(obj.Ti * obj.As);
        integrated = obj.As \ (obj.Ad - eye(obj.m));
        obj.Bd     = integrated * obj.Bs;

        % Variables
        obj = obj.reset(init_vals);
    end
end

methods
    function obj = step(obj, vs, vxy, vo)
        % step: Perform a step of the numerical integration of the system's transition function
        
        % Basic voltages
        vB = obj.A' * vxy;
        
        % Update system states
        obj.Ec = obj.Ec + obj.Ti * vs .* obj.is;
        obj.vc = sqrt(2 * abs(obj.Ec) / obj.C) .* sign(obj.Ec);
        obj.is = obj.Ad * obj.is + obj.Bd * (vs - vo - vB);

        % Basic currents
        obj.ixy = obj.A * obj.is;
        obj.iB = obj.pinvA * obj.ixy;
        
        % Circulating currents
        obj.iz = obj.is - obj.iB;
        obj.ie = obj.pinvN * obj.iz;
    end

    function obj = reset(obj, init_vals)
        % reset: Reset all variables to their initial values specified in 'init_vals'
        
        obj.is  = init_vals.is0;
        obj.ixy = obj.A * obj.is;
        obj.iB  = obj.pinvA * obj.ixy;
        obj.iz  = obj.is - obj.iB;
        obj.ie  = obj.pinvN * obj.iz;
        
        obj.vc  = init_vals.vc0;
        obj.Ec  = obj.C / 2 * obj.vc .^ 2;
    end

end
end