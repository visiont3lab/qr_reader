# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/manuel/visiont3lab-github/qr_reader/qr_reader_ros_ws/src/gazebo_models_pkg

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/manuel/visiont3lab-github/qr_reader/qr_reader_ros_ws/src/gazebo_models_pkg/build

# Utility rule file for sdf.

# Include the progress variables for this target.
include CMakeFiles/sdf.dir/progress.make

CMakeFiles/sdf:
	cd /home/manuel/visiont3lab-github/qr_reader/qr_reader_ros_ws/src/gazebo_models_pkg && rm -f /home/manuel/visiont3lab-github/qr_reader/qr_reader_ros_ws/src/gazebo_models_pkg/models/iris/iris.sdf
	cd /home/manuel/visiont3lab-github/qr_reader/qr_reader_ros_ws/src/gazebo_models_pkg && python /home/manuel/visiont3lab-github/qr_reader/qr_reader_ros_ws/src/gazebo_models_pkg/scripts/xacro.py -o /home/manuel/visiont3lab-github/qr_reader/qr_reader_ros_ws/src/gazebo_models_pkg/models/rotors_description/urdf/iris_base.urdf /home/manuel/visiont3lab-github/qr_reader/qr_reader_ros_ws/src/gazebo_models_pkg/models/rotors_description/urdf/iris_base.xacro enable_mavlink_interface:=true enable_ground_truth:=false enable_logging:=false rotors_description_dir:=/home/manuel/visiont3lab-github/qr_reader/qr_reader_ros_ws/src/gazebo_models_pkg/models/rotors_description
	cd /home/manuel/visiont3lab-github/qr_reader/qr_reader_ros_ws/src/gazebo_models_pkg && gz sdf -p /home/manuel/visiont3lab-github/qr_reader/qr_reader_ros_ws/src/gazebo_models_pkg/models/rotors_description/urdf/iris_base.urdf >> /home/manuel/visiont3lab-github/qr_reader/qr_reader_ros_ws/src/gazebo_models_pkg/models/iris/iris.sdf
	cd /home/manuel/visiont3lab-github/qr_reader/qr_reader_ros_ws/src/gazebo_models_pkg && rm -f /home/manuel/visiont3lab-github/qr_reader/qr_reader_ros_ws/src/gazebo_models_pkg/models/rotors_description/urdf/iris_base.urdf

sdf: CMakeFiles/sdf
sdf: CMakeFiles/sdf.dir/build.make

.PHONY : sdf

# Rule to build all files generated by this target.
CMakeFiles/sdf.dir/build: sdf

.PHONY : CMakeFiles/sdf.dir/build

CMakeFiles/sdf.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sdf.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sdf.dir/clean

CMakeFiles/sdf.dir/depend:
	cd /home/manuel/visiont3lab-github/qr_reader/qr_reader_ros_ws/src/gazebo_models_pkg/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/manuel/visiont3lab-github/qr_reader/qr_reader_ros_ws/src/gazebo_models_pkg /home/manuel/visiont3lab-github/qr_reader/qr_reader_ros_ws/src/gazebo_models_pkg /home/manuel/visiont3lab-github/qr_reader/qr_reader_ros_ws/src/gazebo_models_pkg/build /home/manuel/visiont3lab-github/qr_reader/qr_reader_ros_ws/src/gazebo_models_pkg/build /home/manuel/visiont3lab-github/qr_reader/qr_reader_ros_ws/src/gazebo_models_pkg/build/CMakeFiles/sdf.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sdf.dir/depend
