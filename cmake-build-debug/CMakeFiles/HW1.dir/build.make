# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.7

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files (x86)\JetBrains\CLion 2017.1\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\JetBrains\CLion 2017.1\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\KaktusX\Google Drive\Studies\My\Design Patterns\C++\HW1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\KaktusX\Google Drive\Studies\My\Design Patterns\C++\HW1\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/HW1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HW1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HW1.dir/flags.make

CMakeFiles/HW1.dir/main.cpp.obj: CMakeFiles/HW1.dir/flags.make
CMakeFiles/HW1.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\KaktusX\Google Drive\Studies\My\Design Patterns\C++\HW1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HW1.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\HW1.dir\main.cpp.obj -c "C:\Users\KaktusX\Google Drive\Studies\My\Design Patterns\C++\HW1\main.cpp"

CMakeFiles/HW1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW1.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\KaktusX\Google Drive\Studies\My\Design Patterns\C++\HW1\main.cpp" > CMakeFiles\HW1.dir\main.cpp.i

CMakeFiles/HW1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW1.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\KaktusX\Google Drive\Studies\My\Design Patterns\C++\HW1\main.cpp" -o CMakeFiles\HW1.dir\main.cpp.s

CMakeFiles/HW1.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/HW1.dir/main.cpp.obj.requires

CMakeFiles/HW1.dir/main.cpp.obj.provides: CMakeFiles/HW1.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\HW1.dir\build.make CMakeFiles/HW1.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/HW1.dir/main.cpp.obj.provides

CMakeFiles/HW1.dir/main.cpp.obj.provides.build: CMakeFiles/HW1.dir/main.cpp.obj


CMakeFiles/HW1.dir/ViewAble.cpp.obj: CMakeFiles/HW1.dir/flags.make
CMakeFiles/HW1.dir/ViewAble.cpp.obj: ../ViewAble.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\KaktusX\Google Drive\Studies\My\Design Patterns\C++\HW1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/HW1.dir/ViewAble.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\HW1.dir\ViewAble.cpp.obj -c "C:\Users\KaktusX\Google Drive\Studies\My\Design Patterns\C++\HW1\ViewAble.cpp"

CMakeFiles/HW1.dir/ViewAble.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW1.dir/ViewAble.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\KaktusX\Google Drive\Studies\My\Design Patterns\C++\HW1\ViewAble.cpp" > CMakeFiles\HW1.dir\ViewAble.cpp.i

CMakeFiles/HW1.dir/ViewAble.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW1.dir/ViewAble.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\KaktusX\Google Drive\Studies\My\Design Patterns\C++\HW1\ViewAble.cpp" -o CMakeFiles\HW1.dir\ViewAble.cpp.s

CMakeFiles/HW1.dir/ViewAble.cpp.obj.requires:

.PHONY : CMakeFiles/HW1.dir/ViewAble.cpp.obj.requires

CMakeFiles/HW1.dir/ViewAble.cpp.obj.provides: CMakeFiles/HW1.dir/ViewAble.cpp.obj.requires
	$(MAKE) -f CMakeFiles\HW1.dir\build.make CMakeFiles/HW1.dir/ViewAble.cpp.obj.provides.build
.PHONY : CMakeFiles/HW1.dir/ViewAble.cpp.obj.provides

CMakeFiles/HW1.dir/ViewAble.cpp.obj.provides.build: CMakeFiles/HW1.dir/ViewAble.cpp.obj


CMakeFiles/HW1.dir/Client.cpp.obj: CMakeFiles/HW1.dir/flags.make
CMakeFiles/HW1.dir/Client.cpp.obj: ../Client.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\KaktusX\Google Drive\Studies\My\Design Patterns\C++\HW1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/HW1.dir/Client.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\HW1.dir\Client.cpp.obj -c "C:\Users\KaktusX\Google Drive\Studies\My\Design Patterns\C++\HW1\Client.cpp"

CMakeFiles/HW1.dir/Client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW1.dir/Client.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\KaktusX\Google Drive\Studies\My\Design Patterns\C++\HW1\Client.cpp" > CMakeFiles\HW1.dir\Client.cpp.i

CMakeFiles/HW1.dir/Client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW1.dir/Client.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\KaktusX\Google Drive\Studies\My\Design Patterns\C++\HW1\Client.cpp" -o CMakeFiles\HW1.dir\Client.cpp.s

CMakeFiles/HW1.dir/Client.cpp.obj.requires:

.PHONY : CMakeFiles/HW1.dir/Client.cpp.obj.requires

CMakeFiles/HW1.dir/Client.cpp.obj.provides: CMakeFiles/HW1.dir/Client.cpp.obj.requires
	$(MAKE) -f CMakeFiles\HW1.dir\build.make CMakeFiles/HW1.dir/Client.cpp.obj.provides.build
.PHONY : CMakeFiles/HW1.dir/Client.cpp.obj.provides

CMakeFiles/HW1.dir/Client.cpp.obj.provides.build: CMakeFiles/HW1.dir/Client.cpp.obj


CMakeFiles/HW1.dir/ClientService.cpp.obj: CMakeFiles/HW1.dir/flags.make
CMakeFiles/HW1.dir/ClientService.cpp.obj: ../ClientService.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\KaktusX\Google Drive\Studies\My\Design Patterns\C++\HW1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/HW1.dir/ClientService.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\HW1.dir\ClientService.cpp.obj -c "C:\Users\KaktusX\Google Drive\Studies\My\Design Patterns\C++\HW1\ClientService.cpp"

CMakeFiles/HW1.dir/ClientService.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW1.dir/ClientService.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\KaktusX\Google Drive\Studies\My\Design Patterns\C++\HW1\ClientService.cpp" > CMakeFiles\HW1.dir\ClientService.cpp.i

CMakeFiles/HW1.dir/ClientService.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW1.dir/ClientService.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\KaktusX\Google Drive\Studies\My\Design Patterns\C++\HW1\ClientService.cpp" -o CMakeFiles\HW1.dir\ClientService.cpp.s

CMakeFiles/HW1.dir/ClientService.cpp.obj.requires:

.PHONY : CMakeFiles/HW1.dir/ClientService.cpp.obj.requires

CMakeFiles/HW1.dir/ClientService.cpp.obj.provides: CMakeFiles/HW1.dir/ClientService.cpp.obj.requires
	$(MAKE) -f CMakeFiles\HW1.dir\build.make CMakeFiles/HW1.dir/ClientService.cpp.obj.provides.build
.PHONY : CMakeFiles/HW1.dir/ClientService.cpp.obj.provides

CMakeFiles/HW1.dir/ClientService.cpp.obj.provides.build: CMakeFiles/HW1.dir/ClientService.cpp.obj


CMakeFiles/HW1.dir/PlayerService.cpp.obj: CMakeFiles/HW1.dir/flags.make
CMakeFiles/HW1.dir/PlayerService.cpp.obj: ../PlayerService.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\KaktusX\Google Drive\Studies\My\Design Patterns\C++\HW1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/HW1.dir/PlayerService.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\HW1.dir\PlayerService.cpp.obj -c "C:\Users\KaktusX\Google Drive\Studies\My\Design Patterns\C++\HW1\PlayerService.cpp"

CMakeFiles/HW1.dir/PlayerService.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW1.dir/PlayerService.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\KaktusX\Google Drive\Studies\My\Design Patterns\C++\HW1\PlayerService.cpp" > CMakeFiles\HW1.dir\PlayerService.cpp.i

CMakeFiles/HW1.dir/PlayerService.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW1.dir/PlayerService.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\KaktusX\Google Drive\Studies\My\Design Patterns\C++\HW1\PlayerService.cpp" -o CMakeFiles\HW1.dir\PlayerService.cpp.s

CMakeFiles/HW1.dir/PlayerService.cpp.obj.requires:

.PHONY : CMakeFiles/HW1.dir/PlayerService.cpp.obj.requires

CMakeFiles/HW1.dir/PlayerService.cpp.obj.provides: CMakeFiles/HW1.dir/PlayerService.cpp.obj.requires
	$(MAKE) -f CMakeFiles\HW1.dir\build.make CMakeFiles/HW1.dir/PlayerService.cpp.obj.provides.build
.PHONY : CMakeFiles/HW1.dir/PlayerService.cpp.obj.provides

CMakeFiles/HW1.dir/PlayerService.cpp.obj.provides.build: CMakeFiles/HW1.dir/PlayerService.cpp.obj


CMakeFiles/HW1.dir/SimulationService.cpp.obj: CMakeFiles/HW1.dir/flags.make
CMakeFiles/HW1.dir/SimulationService.cpp.obj: ../SimulationService.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\KaktusX\Google Drive\Studies\My\Design Patterns\C++\HW1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/HW1.dir/SimulationService.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\HW1.dir\SimulationService.cpp.obj -c "C:\Users\KaktusX\Google Drive\Studies\My\Design Patterns\C++\HW1\SimulationService.cpp"

CMakeFiles/HW1.dir/SimulationService.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW1.dir/SimulationService.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\KaktusX\Google Drive\Studies\My\Design Patterns\C++\HW1\SimulationService.cpp" > CMakeFiles\HW1.dir\SimulationService.cpp.i

CMakeFiles/HW1.dir/SimulationService.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW1.dir/SimulationService.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\KaktusX\Google Drive\Studies\My\Design Patterns\C++\HW1\SimulationService.cpp" -o CMakeFiles\HW1.dir\SimulationService.cpp.s

CMakeFiles/HW1.dir/SimulationService.cpp.obj.requires:

.PHONY : CMakeFiles/HW1.dir/SimulationService.cpp.obj.requires

CMakeFiles/HW1.dir/SimulationService.cpp.obj.provides: CMakeFiles/HW1.dir/SimulationService.cpp.obj.requires
	$(MAKE) -f CMakeFiles\HW1.dir\build.make CMakeFiles/HW1.dir/SimulationService.cpp.obj.provides.build
.PHONY : CMakeFiles/HW1.dir/SimulationService.cpp.obj.provides

CMakeFiles/HW1.dir/SimulationService.cpp.obj.provides.build: CMakeFiles/HW1.dir/SimulationService.cpp.obj


# Object files for target HW1
HW1_OBJECTS = \
"CMakeFiles/HW1.dir/main.cpp.obj" \
"CMakeFiles/HW1.dir/ViewAble.cpp.obj" \
"CMakeFiles/HW1.dir/Client.cpp.obj" \
"CMakeFiles/HW1.dir/ClientService.cpp.obj" \
"CMakeFiles/HW1.dir/PlayerService.cpp.obj" \
"CMakeFiles/HW1.dir/SimulationService.cpp.obj"

# External object files for target HW1
HW1_EXTERNAL_OBJECTS =

HW1.exe: CMakeFiles/HW1.dir/main.cpp.obj
HW1.exe: CMakeFiles/HW1.dir/ViewAble.cpp.obj
HW1.exe: CMakeFiles/HW1.dir/Client.cpp.obj
HW1.exe: CMakeFiles/HW1.dir/ClientService.cpp.obj
HW1.exe: CMakeFiles/HW1.dir/PlayerService.cpp.obj
HW1.exe: CMakeFiles/HW1.dir/SimulationService.cpp.obj
HW1.exe: CMakeFiles/HW1.dir/build.make
HW1.exe: CMakeFiles/HW1.dir/linklibs.rsp
HW1.exe: CMakeFiles/HW1.dir/objects1.rsp
HW1.exe: CMakeFiles/HW1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\KaktusX\Google Drive\Studies\My\Design Patterns\C++\HW1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable HW1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\HW1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HW1.dir/build: HW1.exe

.PHONY : CMakeFiles/HW1.dir/build

CMakeFiles/HW1.dir/requires: CMakeFiles/HW1.dir/main.cpp.obj.requires
CMakeFiles/HW1.dir/requires: CMakeFiles/HW1.dir/ViewAble.cpp.obj.requires
CMakeFiles/HW1.dir/requires: CMakeFiles/HW1.dir/Client.cpp.obj.requires
CMakeFiles/HW1.dir/requires: CMakeFiles/HW1.dir/ClientService.cpp.obj.requires
CMakeFiles/HW1.dir/requires: CMakeFiles/HW1.dir/PlayerService.cpp.obj.requires
CMakeFiles/HW1.dir/requires: CMakeFiles/HW1.dir/SimulationService.cpp.obj.requires

.PHONY : CMakeFiles/HW1.dir/requires

CMakeFiles/HW1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\HW1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/HW1.dir/clean

CMakeFiles/HW1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\KaktusX\Google Drive\Studies\My\Design Patterns\C++\HW1" "C:\Users\KaktusX\Google Drive\Studies\My\Design Patterns\C++\HW1" "C:\Users\KaktusX\Google Drive\Studies\My\Design Patterns\C++\HW1\cmake-build-debug" "C:\Users\KaktusX\Google Drive\Studies\My\Design Patterns\C++\HW1\cmake-build-debug" "C:\Users\KaktusX\Google Drive\Studies\My\Design Patterns\C++\HW1\cmake-build-debug\CMakeFiles\HW1.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/HW1.dir/depend

