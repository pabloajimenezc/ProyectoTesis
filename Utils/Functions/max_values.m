function [ix_max, iy_max, is_max, vo_max, vB_max, VCdiff] = max_values(Ax, Ay)
ix_max = 200;                           % Maximum input current
iy_max = Ax / Ay * ix_max;              % Maximum output current
eta = 1;
is_max = (ix_max + iy_max)*(1 + eta)/3; % Maximum cluster current
% vo_max = (Ax + Ay) / 2;               % Maximum common mode voltage
vo_max = 1000;
vB_max = Ax + Ay;                       % Maximum branch voltage
VCdiff = 0.002;                         % Max. fraction of capacitor voltage deviation
% VCdiff is used for training
% and is supposed to be maximum deviation during real operation.
end

