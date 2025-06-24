function T = reference_frame_transforms()
% reference_frame_transforms: Matrices for reference frame transforms

% abc to dq
T.abc2dq = @(g) (2/3)*[cos(g),  cos(g-2*pi/3),  cos(g+2*pi/3);
                      -sin(g), -sin(g-2*pi/3), -sin(g+2*pi/3)];

% dq to abc
T.dq2abc = @(g) [cos(g),        -sin(g);
                 cos(g-2*pi/3), -sin(g-2*pi/3);
                 cos(g+2*pi/3), -sin(g+2*pi/3)];

% abc to alpha-beta
T.abc2ab = (2/3)*[1,      -1/2,       -1/2;
                  0, sqrt(3)/2, -sqrt(3)/2];

% alpha-beta to abc
T.ab2abc = (1/2)*[2,        0;
                 -1,  sqrt(3);
                 -1, -sqrt(3)];

% pi/2 rotation matrix
T.rot = [0 -1
         1  0];

% g rotation matrix
T.rotg = @(g) [cos(g), -sin(g);
               sin(g), cos(g)];

end