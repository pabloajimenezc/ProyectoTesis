classdef ClassInGrid
    % ClassInGrid: Input grid
    %   M3C: three-phase symmetrical voltage sources
    %   M2C: DC constant voltage source
    
    properties % Constants
        Ti        % Integration step
        Topology  % MMCC topology
        init_vals % Initial values
    end

    properties % Variables
        Ax % Input grid voltage amplitude
        wx % Input grid voltage angular frequency
        gx % Input grid voltage angle
        vx % Input voltage vector
    end
    
    methods
        function obj = ClassInGrid(specs, init_vals)
            % ClassInGrid: Construct an instance of this class

            obj.init_vals = init_vals;
            
            % Constants
            obj.Ti       = specs.Ti;
            obj.Topology = specs.Topology;

            % Variables
            obj = obj.reset(init_vals);
        end
        
        function obj = step(obj)
            % step: Perform one step of numerical integration
            
            if strcmp(obj.Topology, 'M3C')
                obj.gx = mod(obj.gx + obj.Ti * obj.wx, 2*pi); % Integrate and map to [0, 2*pi]
                obj.vx = obj.Ax * cos(obj.gx + [0; -2*pi/3; 2*pi/3]);
            elseif strcmp(obj.Topology, 'M2C')
                obj.vx = obj.Ax * [1; -1];
            end
        end

        function obj = reset(obj, init_vals)
            % reset: Reset system variables

            obj.Ax = init_vals.Ax0;
            
            if strcmp(obj.Topology, 'M3C')
                obj.wx = init_vals.wx0;
                obj.gx = init_vals.gx0;
                obj.vx = obj.Ax * cos(obj.gx + [0; -2*pi/3; 2*pi/3]);
            elseif strcmp(obj.Topology, 'M2C')
                obj.wx = 0;
                obj.gx = 0;
                obj.vx = obj.Ax * [1; -1];
            end
        end
    end
end

