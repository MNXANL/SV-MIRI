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
CMAKE_SOURCE_DIR = /home/misham/MIRI/SV/3D/imebra_5_2_1_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/misham/MIRI/SV/3D/imebra_5_2_1_1

# Include any dependencies generated for this target.
include CMakeFiles/changeTransferSyntax.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/changeTransferSyntax.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/changeTransferSyntax.dir/flags.make

CMakeFiles/changeTransferSyntax.dir/examples/c++/changeTransferSyntax/changeTransferSyntax.cpp.o: CMakeFiles/changeTransferSyntax.dir/flags.make
CMakeFiles/changeTransferSyntax.dir/examples/c++/changeTransferSyntax/changeTransferSyntax.cpp.o: examples/c++/changeTransferSyntax/changeTransferSyntax.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/misham/MIRI/SV/3D/imebra_5_2_1_1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/changeTransferSyntax.dir/examples/c++/changeTransferSyntax/changeTransferSyntax.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/changeTransferSyntax.dir/examples/c++/changeTransferSyntax/changeTransferSyntax.cpp.o -c /home/misham/MIRI/SV/3D/imebra_5_2_1_1/examples/c++/changeTransferSyntax/changeTransferSyntax.cpp

CMakeFiles/changeTransferSyntax.dir/examples/c++/changeTransferSyntax/changeTransferSyntax.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/changeTransferSyntax.dir/examples/c++/changeTransferSyntax/changeTransferSyntax.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/misham/MIRI/SV/3D/imebra_5_2_1_1/examples/c++/changeTransferSyntax/changeTransferSyntax.cpp > CMakeFiles/changeTransferSyntax.dir/examples/c++/changeTransferSyntax/changeTransferSyntax.cpp.i

CMakeFiles/changeTransferSyntax.dir/examples/c++/changeTransferSyntax/changeTransferSyntax.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/changeTransferSyntax.dir/examples/c++/changeTransferSyntax/changeTransferSyntax.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/misham/MIRI/SV/3D/imebra_5_2_1_1/examples/c++/changeTransferSyntax/changeTransferSyntax.cpp -o CMakeFiles/changeTransferSyntax.dir/examples/c++/changeTransferSyntax/changeTransferSyntax.cpp.s

CMakeFiles/changeTransferSyntax.dir/examples/c++/changeTransferSyntax/changeTransferSyntax.cpp.o.requires:

.PHONY : CMakeFiles/changeTransferSyntax.dir/examples/c++/changeTransferSyntax/changeTransferSyntax.cpp.o.requires

CMakeFiles/changeTransferSyntax.dir/examples/c++/changeTransferSyntax/changeTransferSyntax.cpp.o.provides: CMakeFiles/changeTransferSyntax.dir/examples/c++/changeTransferSyntax/changeTransferSyntax.cpp.o.requires
	$(MAKE) -f CMakeFiles/changeTransferSyntax.dir/build.make CMakeFiles/changeTransferSyntax.dir/examples/c++/changeTransferSyntax/changeTransferSyntax.cpp.o.provides.build
.PHONY : CMakeFiles/changeTransferSyntax.dir/examples/c++/changeTransferSyntax/changeTransferSyntax.cpp.o.provides

CMakeFiles/changeTransferSyntax.dir/examples/c++/changeTransferSyntax/changeTransferSyntax.cpp.o.provides.build: CMakeFiles/changeTransferSyntax.dir/examples/c++/changeTransferSyntax/changeTransferSyntax.cpp.o


# Object files for target changeTransferSyntax
changeTransferSyntax_OBJECTS = \
"CMakeFiles/changeTransferSyntax.dir/examples/c++/changeTransferSyntax/changeTransferSyntax.cpp.o"

# External object files for target changeTransferSyntax
changeTransferSyntax_EXTERNAL_OBJECTS =

changeTransferSyntax: CMakeFiles/changeTransferSyntax.dir/examples/c++/changeTransferSyntax/changeTransferSyntax.cpp.o
changeTransferSyntax: CMakeFiles/changeTransferSyntax.dir/build.make
changeTransferSyntax: libimebra.so.5.0.0
changeTransferSyntax: CMakeFiles/changeTransferSyntax.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/misham/MIRI/SV/3D/imebra_5_2_1_1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable changeTransferSyntax"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/changeTransferSyntax.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/changeTransferSyntax.dir/build: changeTransferSyntax

.PHONY : CMakeFiles/changeTransferSyntax.dir/build

CMakeFiles/changeTransferSyntax.dir/requires: CMakeFiles/changeTransferSyntax.dir/examples/c++/changeTransferSyntax/changeTransferSyntax.cpp.o.requires

.PHONY : CMakeFiles/changeTransferSyntax.dir/requires

CMakeFiles/changeTransferSyntax.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/changeTransferSyntax.dir/cmake_clean.cmake
.PHONY : CMakeFiles/changeTransferSyntax.dir/clean

CMakeFiles/changeTransferSyntax.dir/depend:
	cd /home/misham/MIRI/SV/3D/imebra_5_2_1_1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/misham/MIRI/SV/3D/imebra_5_2_1_1 /home/misham/MIRI/SV/3D/imebra_5_2_1_1 /home/misham/MIRI/SV/3D/imebra_5_2_1_1 /home/misham/MIRI/SV/3D/imebra_5_2_1_1 /home/misham/MIRI/SV/3D/imebra_5_2_1_1/CMakeFiles/changeTransferSyntax.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/changeTransferSyntax.dir/depend

