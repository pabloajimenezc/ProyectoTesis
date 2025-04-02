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
    % Rx  % Input grid resistance
    % Lx  % Input grid inductance
    % Ry  % Output grid resistance
    % Ly  % Output grid inductance
    % As  % Current continuous model transition matrix
    % Bs  % Current continuous model input matrix
    % Es  % Current continuous model perturbation matrix
    Ad  % Current discrete model transition matrix
    Bd  % Current discrete model input matrix
    Ed  % Current discrete model perturbation matrix
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
    function obj = ClassM3C(specs)
        % ClassM3C: Constructor method, create an instance of this class.

        % Constants
        obj.Ti = specs.Constants.Ti;
        obj.R = specs.Constants.R;
        obj.L = specs.Constants.L;
        obj.Csm = specs.Constants.Csm;
        obj.Nsm = specs.Constants.Nsm;
        obj.C = obj.Csm / obj.Nsm;
        obj.Ad = expm(-obj.R * obj.Ti * eye(ClassM3C.m) / obj.L);
        obj.Bd = (-obj.R * eye(ClassM3C.m) / obj.L) \ (obj.Ad - eye(ClassM3C.m)) * (-eye(ClassM3C.m) / obj.L);
        obj.Ed = -obj.Bd;

        % obj.Rx = specs.Constants.Rx;
        % obj.Lx = specs.Constants.Lx;
        % obj.Ry = specs.Constants.Ry;
        % obj.Ly = specs.Constants.Ly;
        % 
        % Mx = [1, 1, 1, 0, 0, 0, 0, 0, 0;
        %       1, 1, 1, 0, 0, 0, 0, 0, 0;
        %       1, 1, 1, 0, 0, 0, 0, 0, 0;
        %       0, 0, 0, 1, 1, 1, 0, 0, 0;
        %       0, 0, 0, 1, 1, 1, 0, 0, 0;
        %       0, 0, 0, 1, 1, 1, 0, 0, 0;
        %       0, 0, 0, 0, 0, 0, 1, 1, 1;
        %       0, 0, 0, 0, 0, 0, 1, 1, 1;
        %       0, 0, 0, 0, 0, 0, 1, 1, 1];
        % 
        % My = [1, 0, 0, 1, 0, 0, 1, 0, 0;
        %       0, 1, 0, 0, 1, 0, 0, 1, 0;
        %       0, 0, 1, 0, 0, 1, 0, 0, 1;
        %       1, 0, 0, 1, 0, 0, 1, 0, 0;
        %       0, 1, 0, 0, 1, 0, 0, 1, 0;
        %       0, 0, 1, 0, 0, 1, 0, 0, 1;
        %       1, 0, 0, 1, 0, 0, 1, 0, 0;
        %       0, 1, 0, 0, 1, 0, 0, 1, 0;
        %       0, 0, 1, 0, 0, 1, 0, 0, 1];
        % 
        % MR = Mx * obj.Rx + eye(ClassM3C.m) * obj.R + My * obj.Ry;
        % ML = Mx * obj.Lx + eye(ClassM3C.m) * obj.L + My * obj.Ly;
        % 
        % obj.As = -ML\MR;
        % obj.Bs = -inv(ML);
        % obj.Es = -obj.Bs;
        % 
        % obj.Ad = expm(obj.Ti * obj.As);
        % integrated = obj.As \ (obj.Ad - eye(ClassM3C.m));
        % obj.Bd = integrated * obj.Bs;
        % obj.Ed = integrated * obj.Es;

        % Variables
        obj = obj.reset(specs);
    end
end

methods
    function obj = step(obj, vs, vxy, vo)
        % step: Perform a step of the numerical integration of the system's transition function.

        obj.ixy = ClassM3C.A * obj.is;
        
        % Basic voltages and currents
        vB = ClassM3C.A' * vxy;
        obj.iB = ClassM3C.pinvA * obj.ixy;
        
        % Circulating currents
        obj.iz = obj.is - obj.iB;
        obj.ie = ClassM3C.pinvN * obj.iz;

        % Update system states
        obj.Ec = obj.Ec + obj.Ti * vs .* obj.is;
        obj.vc = sqrt(2*abs(obj.Ec) .* sign(obj.Ec) / obj.C);
        % obj.is = obj.is + obj.Ti / obj.L * (vB + vo - vs + obj.R * obj.is);
        obj.is = obj.Ad * obj.is + obj.Bd * vs + obj.Ed * (vB + vo);
    end

    function obj = reset(obj, specs)
        % reset: Reset all variables to their initial values specified in 'specs'.
        
        obj.is = specs.InitialValues.is;
        obj.ixy = ClassM3C.A * obj.is;
        obj.iB = ClassM3C.pinvA * obj.ixy;
        obj.iz = obj.is - obj.iB;
        obj.ie = ClassM3C.pinvN * obj.iz;
        
        obj.vc = specs.InitialValues.vc;
        obj.Ec = obj.C / 2 * obj.vc .^ 2;
    end

end
end