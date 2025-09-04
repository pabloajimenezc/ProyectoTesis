classdef ClassMMCC

properties % Constants
    Topology % Power converter topology 
    A       % Power converter incidence matrix
    ax      % Absolute input incidence matrix
    ay      % Absolute output incidence matrix
    pinvA   % Pseudo inverse of incidence matrix
    m       % Number of clusters
    N       % Null matrix
    n       % Number of linear independent circulating currents
    pinvN   % Pseudo inverse of null matrix
    p       % Number of input ports
    q       % Number of output ports
    Ti      % Integration step
    Rb      % Branch resistance
    Lb      % Branch inductance
    Csm     % Submodule capacitance
    Nsm     % Submodules per cluster
    C       % Cluster capacitance
    Rx      % Input filter resistance
    Lx      % Input filter inductance
    Ry      % Output filter resistance
    Ly      % Output filter inductance
    Mx      % Cluster effect of input impedance
    My      % Cluster effect of output impedance
    As      % Current continuous model transition matrix
    Bs      % Current continuous model input matrix
    Ad      % Current discrete model transition matrix
    Bd      % Current discrete model input matrix
    init_vals
end

properties % Variables
    is  % Cluster current
    vc  % Cluster capacitor voltage
    Ec  % Cluster capacitor energy
end

methods
    function obj = ClassMMCC(specs, init_vals)
        % ClassM3C: Construct an instance of this class

        obj.init_vals = init_vals;

        % Topology dependent
        obj.Topology = specs.Topology;
        if strcmp(specs.Topology, 'M3C')
            obj.ax = [1  1  1  0  0  0  0  0  0;
                      0  0  0  1  1  1  0  0  0;
                      0  0  0  0  0  0  1  1  1];
            obj.ay = [1  0  0  1  0  0  1  0  0;
                      0  1  0  0  1  0  0  1  0;
                      0  0  1  0  0  1  0  0  1];
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
            obj.ax = [1  1  1  0  0  0;
                      0  0  0  1  1  1];
            obj.ay = [1  0  0  1  0  0;
                      0  1  0  0  1  0;
                      0  0  1  0  0  1];
            Mx = [1, 1, 1, 0, 0, 0;
                  1, 1, 1, 0, 0, 0;
                  1, 1, 1, 0, 0, 0;
                  0, 0, 0, 1, 1, 1;
                  0, 0, 0, 1, 1, 1;
                  0, 0, 0, 1, 1, 1];

            My = [1, 0, 0, 1, 0, 0;
                  0, 1, 0, 0, 1, 0;
                  0, 0, 1, 0, 0, 1;
                  1, 0, 0, 1, 0, 0;
                  0, 1, 0, 0, 1, 0;
                  0, 0, 1, 0, 0, 1];
        end
        obj.Mx = Mx;
        obj.My = My;
        obj.A = [obj.ax;
                -obj.ay];
        obj.p = size(obj.ax, 1);
        obj.q = size(obj.ay, 1);
        obj.pinvA = pinv(obj.A);
        obj.m     = size(obj.A, 2);
        obj.N     = null(obj.A, 'rational');
        obj.n     = size(obj.N, 2);
        obj.pinvN = pinv(obj.N);
        
        % Constants
        obj.Ti  = specs.Ti;
        obj.Rb   = specs.Rb;
        obj.Lb   = specs.Lb;
        obj.Csm = specs.Csm;
        obj.Nsm = specs.Nsm;
        obj.C   = obj.Csm / obj.Nsm;
        obj.Rx  = specs.Rx;
        obj.Lx  = specs.Lx;
        obj.Ry  = specs.Ry;
        obj.Ly  = specs.Ly;

        MR = Mx * obj.Rx + eye(obj.m) * obj.Rb + My * obj.Ry;
        ML = Mx * obj.Lx + eye(obj.m) * obj.Lb + My * obj.Ly;

        obj.As = -ML\MR;
        obj.Bs = -inv(ML);

        obj.Ad     = expm(obj.Ti * obj.As);
        integrated = obj.As \ (obj.Ad - eye(obj.m));
        obj.Bd     = integrated * obj.Bs;

        % Variables
        obj = obj.reset();
    end
end

methods
    function obj = step(obj, vs, vxy, vo)
        % step: Perform a step of the numerical integration of the system's transition function
        
        % Basic voltages
        vB = obj.A' * vxy;
        
        %%% Converter cluster capacitor energy and voltage

        % % Forward Euler derivatives
        % dE = vs .* obj.MMCC.is;

        % Runge Kutta 4 derivatives
        B_u = vs .* obj.is;
        k1 = B_u;
        k2 = 0.5 * obj.Ti * k1 + B_u;
        k3 = 0.5 * obj.Ti * k2 + B_u;
        k4 = obj.Ti * k3 + B_u;
        dE = (k1 + 2 * k2 + 2 * k3 + k4) / 6;

        % Update
        obj.Ec = obj.Ec + obj.Ti * dE;
        obj.vc = sqrt(2 * abs(obj.Ec) / obj.C) .* sign(obj.Ec);

        %%% Cluster currents

        % % Zero Order Hold update
        % obj.is = obj.Ad * obj.is + obj.Bd * (vs - vo - vB);

        % Input vector
        u = vs - vo - vB;

        % % Forward Euler derivatives
        % dis = obj.As * obj.is + obj.Bs * u;

        % Runge Kutta 4 derivatives
        A_x = obj.As * obj.is;
        B_u = obj.Bs * u;
        k1 = A_x + B_u;
        k2 = A_x + obj.As * (0.5 * obj.Ti * k1) + B_u;
        k3 = A_x + obj.As * (0.5 * obj.Ti * k2) + B_u;
        k4 = A_x + obj.As * (obj.Ti * k3) + B_u;
        dis = (k1 + 2 * k2 + 2 * k3 + k4) / 6;

        % Update
        obj.is = obj.is + obj.Ti * dis;
    end

    function obj = reset(obj)
        % reset: Reset all variables to their initial values specified in 'init_vals'
        
        obj.is  = obj.init_vals.is0;        
        obj.vc  = obj.init_vals.vc0;
        obj.Ec  = obj.C / 2 * obj.vc .^ 2;
    end

end
end