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
    pinvN = pinv(ClassM3C.N);         % Pseudo inverse of null matrix
end

properties  % Constants
    Ti  % Integration step
    Ts  % Sample time
    R   % Branch resistance
    L   % Branch inductance
    C   % Cluster capacitance
    Ad  % Current model transition matrix
    Bd  % Current model input matrix
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
        obj.Ts = specs.Constants.Ts;
        obj.R = specs.Constants.R;
        obj.L = specs.Constants.L;
        obj.C = specs.Constants.C;
        obj.Ad = expm(-obj.R * obj.Ti * eye(ClassM3C.m) / obj.L);
        obj.Bd = (-obj.R * eye(ClassM3C.m) / obj.L) \ (obj.Ad - eye(ClassM3C.m)) * (-eye(ClassM3C.m) / obj.L);

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

        for t = 1:obj.Ts/obj.Ti
            % Update system states
            obj.Ec = obj.Ec + obj.Ti * vs .* obj.is;
            obj.vc = sqrt(2*abs(obj.Ec) .* sign(obj.Ec) / obj.C);
            obj.is = obj.is + obj.Ti / obj.L * (vB + vo - vs + obj.R * obj.is);
        end
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

%% Method: Properties validation through set methods (?)
% methods
%     function set.S(M3C,state)
%         validateattributes(state,{'numeric'},{'finite','real','vector','numel',4},'','State');
%         M3C.S = double(state(:));
%         notifyEnvUpdated(M3C);
%     end
% end
end