function vs_ref = get_vs_ref(ixy_ref, iB_ref, vB, wx, wy, pinvA, As, invBs, RFT, rot)
% get_vs_ref: Generate steady state clusters voltages references

ix_ref    = ixy_ref(1:3);
iy_ref    = ixy_ref(4:6);
ixab_ref  = RFT.abc2ab * ix_ref;
iyab_ref  = RFT.abc2ab * iy_ref;
dixab_ref = wx * rot * ixab_ref;
diyab_ref = wy * rot * iyab_ref;
dix_ref   = RFT.ab2abc * dixab_ref;
diy_ref   = RFT.ab2abc * diyab_ref;
dixy_ref  = [dix_ref; diy_ref];
diB_ref   = pinvA * dixy_ref;

vs_ref = vB + invBs * (diB_ref - As * iB_ref);
end