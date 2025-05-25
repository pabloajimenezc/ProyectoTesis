classdef vsRefGenerator
    % vsRefGenerator: Generate steady state clusters voltages references

    properties
        Topology
        pinvA
        As
        invBs
        RFT
        rot
    end

    methods
        function obj = vsRefGenerator(specs)
            obj.Topology = specs.MMCC.Topology;
            obj.pinvA    = specs.MMCC.pinvA;
            obj.As       = specs.MMCC.As;
            obj.invBs    = pinv(specs.MMCC.Bs);
            obj.RFT      = specs.RFT;
            obj.rot      = specs.rot;
        end

        function vs_ref = get_vs_ref(obj, ix_ref, iy_ref, iB_ref, vB, wx, wy)
            % get_vs_ref: Calculate steady state cluster voltage reference
            
            if strcmp(obj.Topology, 'M3C')
                ixab_ref  = obj.RFT.abc2ab * ix_ref;
                dixab_ref = wx * obj.rot * ixab_ref;
                dix_ref   = obj.RFT.ab2abc * dixab_ref;
            elseif strcmp(obj.Topology, 'M2C')
                dix_ref = [0; 0];
            end
            iyab_ref  = obj.RFT.abc2ab * iy_ref;
            diyab_ref = wy * obj.rot * iyab_ref;
            diy_ref   = obj.RFT.ab2abc * diyab_ref;
            dixy_ref  = [dix_ref; diy_ref];
            diB_ref   = obj.pinvA * dixy_ref;
            
            vs_ref = vB + obj.invBs * (diB_ref - obj.As * iB_ref);
        end
    end
end