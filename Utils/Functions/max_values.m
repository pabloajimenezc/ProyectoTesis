function [ix_max, iy_max, is_max, vo_max] = max_values(Ax, Ay)
ix_max = 200;               % Maximum input current
iy_max = Ax / Ay * ix_max;  % Maximum output current
is_max = 250;               % Maximum cluster current
% vo_max = (Ax + Ay) / 2;     % Maximum common mode voltage
vo_max = 1000;     % Maximum common mode voltage
end

