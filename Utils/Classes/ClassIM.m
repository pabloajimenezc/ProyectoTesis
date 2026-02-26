classdef ClassIM
    % ClassIM: Induction Machine model

    properties % Induction Machine Parameters

        VLLN  % [V] Line-line rms rated stator voltage
        PN    % [W] Rated active power
        FPn   % Rated power factor
        SN    % [VA] Rated apparent power
        fN    % [Hz] Rated stator frequency
        f_max % [Hz] Max. stator frequency
        wN    % [rad/s] Rated rotor speed
        w_max % [rad/s] Max. rotor speed
        IN    % [A] Rms rated stator current
        TN    % [Nm] Rated electrical torque
        FrN   % [Wb] Rated rotor flux
        np    % Number of pole pairs
        
        J     % [kg/m^2] Rotor inertia
        Rs    % [Ohm] Stator resistance
        Rr    % [Ohm] Equivalent rotor resistance
        Los   % [H] Stator leakage inductance
        Lor   % [H] Rotor leakage inductance
        Lm    % [H] Mutual inductance
        Ls    % [H] Stator inductance
        Lr    % [H] Rotor inductance
        
        kr    % Rotor magnetic coupling factor  
        ks    % Stator magnetic coupling factor
        tau_r % [s] Rotor time constant
        o     % Magnetic dispersion factor (sigma)
        Ro    % [Ohm] Stator equivalent resistance
        Lo    % [H] Stator equivalent inductance
        tau_o % [s] Stator time constant
        kT    % Torque constant
        
        isdN  % Rated d-axis current
        isqN  % Rated q-axis current

        % Per unit
        Sb    % [W] Base power
        wb    % [rad/s] Base angular speed
        Tb    % [Nm] Base torque
        H     % [s] Inertia constant
        Zb    % [Ohm] Base impedance
        Lb    % [H] Base inductance
        rs    % [pu] Stator resistance
        rr    % [pu] Stator resistance
        los   % [pu] Stator leakage reactance
        lor   % [pu] Rotor leakage reactance
        lm    % [pu] Stator magnetizing reactance
    end

    methods
        function IM = ClassIM()
            %ClassIM: Construct an instance of this class

            IM.VLLN  = 380;
            IM.PN    = 3000;
            IM.FPn   = 0.81;
            IM.SN    = IM.PN / IM.FPn;
            IM.fN    = 50;
            IM.f_max = IM.fN * 0.5;
            IM.wN    = 1450 * pi / 30;
            IM.w_max = IM.wN * 0.5;
            IM.IN    = IM.SN / (IM.VLLN * sqrt(3));
            IM.TN    = IM.PN / IM.wN;
            IM.FrN   = sqrt(2/3)*IM.VLLN/(2*pi*IM.fN);
            IM.np    = 2;
            
            IM.J    = 0.006;
            % IM.J    = 0.1;
            IM.Rs   = 1.8;
            IM.Rr   = 1.8;
            IM.Los  = 2.6e-3;
            IM.Lor  = 2.6e-3;
            IM.Lm   = 235.1e-3;
            IM.Ls   = IM.Los + IM.Lm;
            IM.Lr   = IM.Lor + IM.Lm;
            
            IM.kr    = IM.Lm / IM.Lr;
            IM.ks    = IM.Lm / IM.Ls;
            IM.tau_r = IM.Lr / IM.Rr;
            IM.o     = 1 - IM.ks * IM.kr;
            IM.Ro    = IM.Rs + IM.Rr * IM.kr^2;
            IM.Lo    = IM.o * IM.Ls;
            IM.tau_o = IM.Lo / IM.Ro;
            IM.kT    = 1.5 * IM.np * IM.kr;
            
            IM.isdN  = IM.FrN / IM.Lm;
            IM.isqN  = IM.TN / (IM.kT*IM.FrN);

            % Per unit
            IM.Sb  = 10000;
            IM.wb  = 2 * pi * IM.fN;
            IM.Tb  = IM.Sb / IM.wb;
            IM.Zb  = IM.VLLN^2 / IM.Sb;
            IM.Lb  = IM.Zb / IM.Zb;
            IM.H   = 0.5 * IM.J * IM.wb^2 / IM.Sb;
            IM.rs  = IM.Rs / IM.Zb;
            IM.rr  = IM.Rr / IM.Zb;
            IM.los = IM.wb * IM.Los / IM.Zb;
            IM.lor = IM.wb * IM.Lor / IM.Zb;
            IM.lm  = IM.wb * IM.Lm / IM.Zb;
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