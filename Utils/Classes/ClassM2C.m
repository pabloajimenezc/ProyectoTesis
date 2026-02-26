classdef ClassM2C
    % ClassM2C: Modular Multilevel Converter model
    properties
        Ax       % Input incidence matrix
        Ay       % Output incidence matrix
        p        % # of input ports
        q        % # of output ports
        A        % Incidence matrix
        pinvA
        m        % # of clusters
        N        % Nullspace matrix
        pinvN
        n        % # of LICCs (Linearly Independent Circulating Currents)
        R        % [Ohm] Branch resistance
        L        % [H] Branch inductance
        Csm      % [F] Submodule capacitance
        Nsm      % # of submodules per cluster
        C        % [F] Equivalent branch capacitance
        Vdc      % [V] DC-link voltage
        vx_max   % Max. input line to neutral voltage
        vy_max   % Max. output line to neutral voltage
        ix_max   % Max. input current
        iy_max   % Max. output current
        is_max   % Max. cluster current
        Vc_ref   % Cluster capacitor voltage reference
        vo_max   % Max. CMV at zero machine speed
        Ec_ref   % Cluster energy reference
        vc_ref   % Submodule capacitor voltage reference
        vc_dev   % [pu] Max. capacitor voltage deviation from reference
        vc_m_dev % [pu] Max. cap. voltage MEAN deviation from reference
        Ec_dev   % [pu] Max. cap. energy deviation from reference
        TD       % Delta transform
        Tx       % Input current transform
        Ty       % Output current transform
        Te       % L.I. circulating current transform
        T        % Current decoupling transform
        pinvTx
        pinvTy
        pinvTe
        pinvT
    end
    
    methods
        function M2C = ClassM2C(IM, RFT)
            % ClassM2C: Construct an instance of this class
    
            M2C.Ax     = [1, 1, 1, 0, 0, 0;
                          0, 0, 0, 1, 1, 1];
            M2C.Ay     = -[1, 0, 0, 1, 0, 0;
                           0, 1, 0, 0, 1, 0;
                           0, 0, 1, 0, 0, 1];
            M2C.p      = size(M2C.Ax, 1);
            M2C.q      = size(M2C.Ay, 1);
            M2C.A      = [M2C.Ax;
                          M2C.Ay];
            M2C.m      = size(M2C.A, 2);
            M2C.pinvA  = pinv(M2C.A);
            M2C.N      = null(M2C.A, 'rational');
            M2C.n      = size(M2C.N, 2);
            M2C.pinvN  = pinv(M2C.N);
            M2C.R      = 0.2;
            M2C.L      = 5e-3;
            M2C.Csm    = 987e-6;
            M2C.Nsm    = 4;
            M2C.C      = M2C.Csm / M2C.Nsm;
            M2C.Vdc    = 520;
            M2C.vx_max = M2C.Vdc / 2;
            M2C.vy_max = sqrt(2/3)*IM.VLLN*IM.w_max/IM.wN + IM.Rs*IM.IN;
            M2C.ix_max = 4.2;
            M2C.iy_max = sqrt(IM.isdN^2+(0.5*IM.isqN)^2);
            M2C.is_max = 8.5;
            M2C.Vc_ref = 520;
            M2C.vo_max = M2C.Vc_ref - M2C.vx_max;
            M2C.Ec_ref = M2C.C / 2 * M2C.Vc_ref^2;
            M2C.vc_ref = M2C.Vc_ref / M2C.Nsm;
            M2C.vc_dev = 0.15;
            M2C.vc_m_dev = 10/M2C.Vc_ref;
            M2C.Ec_dev = ((1+M2C.vc_dev)^2 - 1);
            M2C.TD     = 0.5 * [1, -1];
            M2C.Tx     = M2C.TD * M2C.Ax;
            M2C.Ty     = RFT.abc2ab * M2C.Ay;
            M2C.Te     = M2C.pinvN * (eye(M2C.m) - M2C.pinvA * M2C.A);
            M2C.T      = [M2C.Tx; M2C.Ty; M2C.Te];
            M2C.pinvTx = pinv(M2C.Tx);
            M2C.pinvTy = pinv(M2C.Ty);
            M2C.pinvTe = pinv(M2C.Te);
            M2C.pinvT  = pinv(M2C.T);
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