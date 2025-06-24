classdef IM_voltage_estimator
    % IM_voltage_estimator: Induction machine stator voltage estimator

    properties
        IM
        RFT
        M
    end

    methods
        function obj = IM_voltage_estimator(specs)
            obj.IM  = specs.IM;
            obj.RFT = specs.RFT;
            obj.M = [obj.IM.Ro           , -obj.IM.o * obj.IM.Ls, -obj.IM.kr / obj.IM.tau_r;
                     obj.IM.o * obj.IM.Ls,             obj.IM.Ro,                 obj.IM.kr];
            
        end

        function vs = get_IM_vs(obj, isd_ref, isq_ref, Frd, ws, w, gr)
            % get_IM_vs: Estimate induction machine stator voltage

            M = obj.M;
            M(1, 2) = M(1, 2) * ws;
            M(2, 1) = M(2, 1) * ws;
            M(2, 3) = M(2, 3) * w;

            is_dq = [isd_ref; isq_ref];
            x = [is_dq; Frd];

            % Steady state
            vs = M * x;

            % % Estimate stator current derivative
            % is_ab = obj.RFT.rotg(gr) * is_dq;
            % dis_ab = ws * obj.RFT.rot * is_ab;
            % dis_dq = obj.RFT.rotg(-gr) * dis_ab;

            % % Transient
            % vs = vs + obj.IM.o * obj.IM.Ls * dis_dq;

            % To abc reference frame
            vs = obj.RFT.dq2abc(gr) * vs;
        end
    end
end