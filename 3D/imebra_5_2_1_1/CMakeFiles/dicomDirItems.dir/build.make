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
include CMakeFiles/dicomDirItems.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dicomDirItems.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dicomDirItems.dir/flags.make

CMakeFiles/dicomDirItems.dir/examples/c++/dicomdirItems/dicomdirItems.cpp.o: CMakeFiles/dicomDirItems.dir/flags.make
CMakeFiles/dicomDirItems.dir/examples/c++/dicomdirItems/dicomdirItems.cpp.o: examples/c++/dicomdirItems/dicomdirItems.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/misham/MIRI/SV/3D/imebra_5_2_1_1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/dicomDirItems.dir/examples/c++/dicomdirItems/dicomdirItems.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dicomDirItems.dir/examples/c++/dicomdirItems/dicomdirItems.cpp.o -c /home/misham/MIRI/SV/3D/imebra_5_2_1_1/examples/c++/dicomdirItems/dicomdirItems.cpp

CMakeFiles/dicomDirItems.dir/examples/c++/dicomdirItems/dicomdirItems.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dicomDirItems.dir/examples/c++/dicomdirItems/dicomdirItems.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/misham/MIRI/SV/3D/imebra_5_2_1_1/examples/c++/dicomdirItems/dicomdirItems.cpp > CMakeFiles/dicomDirItems.dir/examples/c++/dicomdirItems/dicomdirItems.cpp.i

CMakeFiles/dicomDirItems.dir/examples/c++/dicomdirItems/dicomdirItems.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dicomDirItems.dir/examples/c++/dicomdirItems/dicomdirItems.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/misham/MIRI/SV/3D/imebra_5_2_1_1/examples/c++/dicomdirItems/dicomdirItems.cpp -o CMakeFiles/dicomDirItems.dir/examples/c++/dicomdirItems/dicomdirItems.cpp.s

CMakeFiles/dicomDirItems.dir/examples/c++/dicomdirItems/dicomdirItems.cpp.o.requires:

.PHONY : CMakeFiles/dicomDirItems.dir/examples/c++/dicomdirItems/dicomdirItems.cpp.o.requires

CMakeFiles/dicomDirItems.dir/examples/c++/dicomdirItems/dicomdirItems.cpp.o.provides: CMakeFiles/dicomDirItems.dir/examples/c++/dicomdirItems/dicomdirItems.cpp.o.requires
	$(MAKE) -f CMakeFiles/dicomDirItems.dir/build.make CMakeFiles/dicomDirItems.dir/examples/c++/dicomdirItems/dicomdirItems.cpp.o.provides.build
.PHONY : CMakeFiles/dicomDirItems.dir/examples/c++/dicomdirItems/dicomdirItems.cpp.o.provides

CMakeFiles/dicomDirItems.dir/examples/c++/dicomdirItems/dicomdirItems.cpp.o.provides.build: CMakeFiles/dicomDirItems.dir/examples/c++/dicomdirItems/dicomdirItems.cpp.o


# Object files for target dicomDirItems
dicomDirItems_OBJECTS = \
"CMakeFiles/dicomDirItems.dir/examples/c++/dicomdirItems/dicomdirItems.cpp.o"

# External object files for target dicomDirItems
dicomDirItems_EXTERNAL_OBJECTS =

dicomDirItems: CMakeFiles/dicomDirItems.dir/examples/c++/dicomdirItems/dicomdirItems.cpp.o
dicomDirItems: CMakeFiles/dicomDirItems.dir/build.make
dicomDirItems: libimebra.so.5.0.0
dicomDirItems: CMakeFiles/dicomDirItems.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/misham/MIRI/SV/3D/imebra_5_2_1_1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable dicomDirItems"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dicomDirItems.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dicomDirItems.dir/build: dicomDirItems

.PHONY : CMakeFiles/dicomDirItems.dir/build

CMakeFiles/dicomDirItems.dir/requires: CMakeFiles/dicomDirItems.dir/examples/c++/dicomdirItems/dicomdirItems.cpp.o.requires

.PHONY : CMakeFiles/dicomDirItems.dir/requires

CMakeFiles/dicomDirItems.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/dicomDirItems.dir/cmake_clean.cmake
.PHONY : CMakeFiles/dicomDirItems.dir/clean

CMakeFiles/dicomDirItems.dir/depend:
	cd /home/misham/MIRI/SV/3D/imebra_5_2_1_1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/misham/MIRI/SV/3D/imebra_5_2_1_1 /home/misham/MIRI/SV/3D/imebra_5_2_1_1 /home/misham/MIRI/SV/3D/imebra_5_2_1_1 /home/misham/MIRI/SV/3D/imebra_5_2_1_1 /home/misham/MIRI/SV/3D/imebra_5_2_1_1/CMakeFiles/dicomDirItems.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dicomDirItems.dir/depend

