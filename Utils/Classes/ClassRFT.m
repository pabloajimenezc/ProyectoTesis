classdef ClassRFT
    % ClassRFT: Matrices for reference frame transforms

    properties
        abc2ab % abc to alpha-beta
        ab2abc % alpha-beta to abc
        rot    % pi/2 rotation matrix
    end

    methods
        function RFT = ClassRFT()
            % ClassRFT: Construct an instance of this class

            RFT.abc2ab = (2/3)*[1,      -1/2,       -1/2;
                                0, sqrt(3)/2, -sqrt(3)/2];
            RFT.ab2abc = (1/2)*[2,        0;
                         -1,  sqrt(3);
                         -1, -sqrt(3)];
            RFT.rot    = [0 -1
                          1  0];
        end

        function y = abc2dq(RFT, g)
            % abc2dq: abc to dq
            
            y = (2/3)*[cos(g),  cos(g-2*pi/3),  cos(g+2*pi/3);
                      -sin(g), -sin(g-2*pi/3), -sin(g+2*pi/3)];
        end

        function y = dq2abc(RFT, g)
            % dq2abc: dq to abc
            
            y = [cos(g),        -sin(g);
                 cos(g-2*pi/3), -sin(g-2*pi/3);
                 cos(g+2*pi/3), -sin(g+2*pi/3)];
        end

        function y = rotg(RFT, g)
            % rotg: rotation of g radians
            
            y = [cos(g), -sin(g);
                 sin(g), cos(g)];
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