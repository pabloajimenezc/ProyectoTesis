classdef ClassIM
    % ClassIM: Induction Machine model in abc frame of reference

    properties % Induction Machine Parameters
        Ti
        VLLN
        fN
        PN
        FPn
        SN
        wN
        IN
        
        np
        J
        TN
        Rs
        Rr
        Los
        Lor
        Lm
        Ls
        Lr
        
        kr
        ks
        tau_r
        sigma
        Rsig
        
        FrN
        isdN
        
        R
        Lss
        Lrr
        pi23
        Lsr
        dLsr_dt
        dLsr_dg 
        L
        dL
        A
        B
    end
    
    properties % Induction Machine Variables (abc)
        i
        is
        ir
        F
        Fs
        Fr
        Te
        w
        g
    end

    methods
        function obj = ClassIM(specs)
            %ClassIM: Construct an instance of this class
            
            % Induction Machine Parameters
            obj.Ti   = specs.Ti;
            obj.VLLN = 380;
            obj.fN   = 50;
            obj.PN   = 3000;
            obj.FPn  = 0.81;
            obj.SN   = obj.PN / obj.FPn;
            obj.wN   = 1450 * pi / 30;
            obj.IN   = obj.SN / (obj.VLLN * sqrt(3));
            
            obj.np   = 2;
            obj.J    = 0.006;
            obj.TN   = obj.PN / obj.wN;
            obj.Rs   = 1.8;
            obj.Rr   = 1.8;
            obj.Los  = 2.6e-3;
            obj.Lor  = 2.6e-3;
            obj.Lm   = 235.1e-3;
            obj.Ls   = obj.Los + obj.Lm;
            obj.Lr   = obj.Lor + obj.Lm;
            
            obj.kr    = obj.Lm / obj.Lr;
            obj.ks    = obj.Lm / obj.Ls;
            obj.tau_r = obj.Lr / obj.Rr;
            obj.sigma = 1 - obj.ks * obj.kr;
            obj.Rsig  = obj.Rs + obj.Rr * obj.kr^2;
            
            obj.FrN  = sqrt(2/3) * obj.VLLN / (2 * pi * obj.fN);
            obj.isdN = obj.FrN / obj.Lm;
            
            obj.R    = diag([obj.Rs * ones(1, 3), obj.Rr * ones(1, 3)]);
            obj.Lss  = (obj.Los + obj.Ls) * eye(3) - 0.5 * obj.Ls + 0.5 * obj.Ls * eye(3);
            obj.Lrr  = (obj.Lor + obj.Lr) * eye(3) - 0.5 * obj.Lr + 0.5 * obj.Lr * eye(3);
            obj.pi23 = pi * 2 / 3;
            obj.Lsr  = @(g) obj.Lm * cos(g + obj.pi23 * [0,  1, -1;
                                                        -1,  0,  1;
                                                         1, -1,  0]);
            obj.dLsr_dg = @(g) -obj.Lm * sin(g + obj.pi23 * [0,  1, -1;
                                                            -1,  0,  1;
                                                             1, -1,  0]);
            obj.dLsr_dt = @(g, w) obj.np * w * obj.dLsr_dg(g);
            obj.L = @(g) [obj.Lss, obj.Lsr(g)
                          obj.Lsr(g)', obj.Lrr];
            obj.dL = @(g, w) [zeros(3), obj.dLsr_dt(g, w)
                              obj.dLsr_dt(g, w)', zeros(3)];
            obj.A = @(g, w) -inv(obj.L(g)) * (obj.R + obj.dL(g, w));
            obj.B = @(g) inv(obj.L(g));

            % Initialize variables
            obj = obj.reset();
        end

        function obj = step(obj, vs)
            % step: Perform one step of numerical integration
            obj.Te = obj.np / 2 * obj.i(1:3)' * obj.dLsr_dg(obj.g) * obj.i(4:6);

            v     = [vs; zeros(3, 1)];
            di    = obj.A(obj.g, obj.w) * obj.i + obj.B(obj.g) * v;
            dw    = obj.Te * obj.np / 2 / obj.J;
            obj.i = obj.i + obj.Ti * di;
            obj.w = obj.w + obj.Ti * dw;
        
            obj.g = obj.g + obj.np * obj.w * obj.Ti;
            obj.F = obj.L(obj.g) * obj.i;

            obj.is = obj.i(1:3);
            obj.ir = obj.i(4:6);
            obj.Fs = obj.F(1:3);
            obj.Fr = obj.F(4:6);
        end

        function obj = reset(obj)
            obj.i  = zeros(6, 1);
            obj.is = zeros(3, 1);
            obj.ir = zeros(3, 1);
            obj.F  = zeros(6, 1);
            obj.Fs = zeros(3, 1);
            obj.Fr = zeros(3, 1);
            obj.Te = 0;
            obj.w  = 0;
            obj.g  = 0;
        end
    end
end