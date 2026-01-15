classdef ClassIM
    % ClassIM: Induction Machine model in abc frame of reference

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
        H     % [s] Inertia constant
        Zb    % [Ohm] Base impedance
        sN    % [pu] Nominal apparent power
        rs    % [pu] Stator resistance
        rr    % [pu] Stator resistance
        xos   % [pu] Stator leakage reactance
        xor   % [pu] Rotor leakage reactance
        xm    % [pu] Stator magnetizing reactance
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
            
            % IM.J    = 0.006; % Original (Too low for the RTDS -> Numerical errors)
            IM.J    = 0.08;
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
            IM.isqN  = IM.TN / (3/2*IM.np*IM.kr*IM.FrN);

            % Per unit
            IM.Sb = 10000;
            IM.Zb = IM.VLLN^2 / IM.Sb;
            IM.H = 0.5 * IM.J * IM.wN^2 / IM.Sb;
            IM.sN = IM.SN / IM.Sb;
            IM.rs = IM.Rs / IM.Zb;
            IM.rr = IM.Rr / IM.Zb;
            IM.xos = 2*pi * IM.fN * IM.Los / IM.Zb;
            IM.xor = 2*pi * IM.fN * IM.Lor / IM.Zb;
            IM.xm = 2*pi * IM.fN * IM.Lm / IM.Zb;
        end
    end
end