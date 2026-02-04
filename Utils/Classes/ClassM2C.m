classdef ClassM2C
    % ClassM2C: Modular Multilevel Converter model
    properties
        Ax       % Input incidence matrix
        Ay       % Output incidence matrix
        p        % # of input ports
        q        % # of output ports
        A        % Incidence matrix
        m        % # of clusters
        pinvA    % Incidence matrix inverse
        N        % Nullspace matrix
        n        % # of LICCs (Linearly Independent Circulating Currents)
        pinvN    % Nullspace matrix inverse
        R        % [Ohm] Branch resistance
        L        % [H] Branch inductance
        Csm      % [F] Submodule capacitance
        Nsm      % # of submodules per cluster
        C        % [F] Equivalent branch capacitance
        Vdc      % [V] DC-link voltage
        Ax_max   % Max. input voltage
        Ay_max   % Max. output voltage
        ix_max   % Max. input current
        iy_max   % Max. output current
        is_max   % Max. branch current
        Vc_ref   % Cluster capacitor voltage reference
        vo_max   % Max. CMV at zero machine speed
        Ec_ref   % Cluster energy reference
        vc_ref   % Submodule capacitor voltage reference
        vc_dev   % [pu] Max. capacitor voltage deviation from reference
        vc_m_dev % [pu] Max. cap. voltage MEAN deviation from reference
        Ec_dev   % [pu] Max. cap. energy deviation from reference
    end
    
    methods
        function M2C = ClassM2C(IM)
            % ClassM3C: Construct an instance of this class
    
            M2C.Ax     = [1, 1, 1, 0, 0, 0;         % Input incidence matrix
                          0, 0, 0, 1, 1, 1];
            M2C.Ay     = [1, 0, 0, 1, 0, 0;         % Output incidence matrix
                          0, 1, 0, 0, 1, 0;
                          0, 0, 1, 0, 0, 1];
            M2C.p      = size(M2C.Ax, 1);           % # of input ports
            M2C.q      = size(M2C.Ay, 1);           % # of output ports
            M2C.A      = [M2C.Ax;                   % Incidence matrix
                         -M2C.Ay];
            M2C.m      = size(M2C.A, 2);            % # of clusters
            M2C.pinvA  = pinv(M2C.A);               % Incidence matrix inverse
            M2C.N      = null(M2C.A, 'rational');   % Nullspace matrix
            M2C.n      = size(M2C.N, 2);            % # of LICCs (Linearly Independent Circulating Currents)
            M2C.pinvN  = pinv(M2C.N);               % Nullspace matrix inverse
            M2C.R     = 0.2;                       % [Ohm] Branch resistance
            M2C.L     = 5e-3;                      % [H] Branch inductance
            M2C.Csm    = 987e-6;                    % [F] Submodule capacitance
            M2C.Nsm    = 4;                         % # of submodules per cluster
            M2C.C      = M2C.Csm / M2C.Nsm;         % [F] Equivalent branch capacitance
            M2C.Vdc    = 520;                       % [V] DC-link voltage
            M2C.Ax_max = M2C.Vdc / 2;               % Max. input voltage
            M2C.Ay_max = sqrt(2/3)*IM.VLLN*IM.w_max/IM.wN + IM.Rs*IM.IN; % Max. output voltage (50% machine's nominal speed)
            M2C.ix_max = 4.2;                       % Max. input current
            M2C.iy_max = sqrt(IM.isdN^2+(0.5*IM.isqN)^2); % Max. output current
            M2C.is_max = 8.5;                       % Max. branch current
            M2C.Vc_ref = 520;                       % Cluster capacitor voltage reference
            M2C.vo_max = M2C.Vc_ref - M2C.Ax_max;   % Max. CMV at zero machine speed
            M2C.Ec_ref = M2C.C / 2 * M2C.Vc_ref^2;  % Cluster energy reference
            M2C.vc_ref = M2C.Vc_ref / M2C.Nsm;      % Submodule capacitor voltage reference
            M2C.vc_dev = 0.15;                      % [pu] Max. capacitor voltage deviation from reference
            M2C.vc_m_dev = 10/M2C.Vc_ref;           % [pu] Max. cap. voltage MEAN deviation from reference
            M2C.Ec_dev = ((1+M2C.vc_dev)^2 - 1);    % [pu] Max. cap. energy deviation from reference
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