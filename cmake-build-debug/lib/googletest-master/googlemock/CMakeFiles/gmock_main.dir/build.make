# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /opt/clion-2017.2.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /opt/clion-2017.2.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
<<<<<<< HEAD
CMAKE_SOURCE_DIR = /home/natanno4/Desktop/project/ex4/Nirnnat

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/natanno4/Desktop/project/ex4/Nirnnat/cmake-build-debug
=======
CMAKE_SOURCE_DIR = /home/natanno4/Desktop/test/Nirnnat

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/natanno4/Desktop/test/Nirnnat/cmake-build-debug
>>>>>>> 80c6f875702c36cd2224b6c0801deb0b824dc5b4

# Include any dependencies generated for this target.
include lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/depend.make

# Include the progress variables for this target.
include lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/progress.make

# Include the compile flags for this target's objects.
include lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/flags.make

lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/__/googletest/src/gtest-all.cc.o: lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/flags.make
lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/__/googletest/src/gtest-all.cc.o: ../lib/googletest-master/googletest/src/gtest-all.cc
<<<<<<< HEAD
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/natanno4/Desktop/project/ex4/Nirnnat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/__/googletest/src/gtest-all.cc.o"
	cd /home/natanno4/Desktop/project/ex4/Nirnnat/cmake-build-debug/lib/googletest-master/googlemock && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gmock_main.dir/__/googletest/src/gtest-all.cc.o -c /home/natanno4/Desktop/project/ex4/Nirnnat/lib/googletest-master/googletest/src/gtest-all.cc

lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/__/googletest/src/gtest-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gmock_main.dir/__/googletest/src/gtest-all.cc.i"
	cd /home/natanno4/Desktop/project/ex4/Nirnnat/cmake-build-debug/lib/googletest-master/googlemock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/natanno4/Desktop/project/ex4/Nirnnat/lib/googletest-master/googletest/src/gtest-all.cc > CMakeFiles/gmock_main.dir/__/googletest/src/gtest-all.cc.i

lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/__/googletest/src/gtest-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gmock_main.dir/__/googletest/src/gtest-all.cc.s"
	cd /home/natanno4/Desktop/project/ex4/Nirnnat/cmake-build-debug/lib/googletest-master/googlemock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/natanno4/Desktop/project/ex4/Nirnnat/lib/googletest-master/googletest/src/gtest-all.cc -o CMakeFiles/gmock_main.dir/__/googletest/src/gtest-all.cc.s
=======
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/natanno4/Desktop/test/Nirnnat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/__/googletest/src/gtest-all.cc.o"
	cd /home/natanno4/Desktop/test/Nirnnat/cmake-build-debug/lib/googletest-master/googlemock && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gmock_main.dir/__/googletest/src/gtest-all.cc.o -c /home/natanno4/Desktop/test/Nirnnat/lib/googletest-master/googletest/src/gtest-all.cc

lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/__/googletest/src/gtest-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gmock_main.dir/__/googletest/src/gtest-all.cc.i"
	cd /home/natanno4/Desktop/test/Nirnnat/cmake-build-debug/lib/googletest-master/googlemock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/natanno4/Desktop/test/Nirnnat/lib/googletest-master/googletest/src/gtest-all.cc > CMakeFiles/gmock_main.dir/__/googletest/src/gtest-all.cc.i

lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/__/googletest/src/gtest-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gmock_main.dir/__/googletest/src/gtest-all.cc.s"
	cd /home/natanno4/Desktop/test/Nirnnat/cmake-build-debug/lib/googletest-master/googlemock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/natanno4/Desktop/test/Nirnnat/lib/googletest-master/googletest/src/gtest-all.cc -o CMakeFiles/gmock_main.dir/__/googletest/src/gtest-all.cc.s
>>>>>>> 80c6f875702c36cd2224b6c0801deb0b824dc5b4

lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/__/googletest/src/gtest-all.cc.o.requires:

.PHONY : lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/__/googletest/src/gtest-all.cc.o.requires

lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/__/googletest/src/gtest-all.cc.o.provides: lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/__/googletest/src/gtest-all.cc.o.requires
	$(MAKE) -f lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/build.make lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/__/googletest/src/gtest-all.cc.o.provides.build
.PHONY : lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/__/googletest/src/gtest-all.cc.o.provides

lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/__/googletest/src/gtest-all.cc.o.provides.build: lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/__/googletest/src/gtest-all.cc.o


lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock-all.cc.o: lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/flags.make
lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock-all.cc.o: ../lib/googletest-master/googlemock/src/gmock-all.cc
<<<<<<< HEAD
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/natanno4/Desktop/project/ex4/Nirnnat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock-all.cc.o"
	cd /home/natanno4/Desktop/project/ex4/Nirnnat/cmake-build-debug/lib/googletest-master/googlemock && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gmock_main.dir/src/gmock-all.cc.o -c /home/natanno4/Desktop/project/ex4/Nirnnat/lib/googletest-master/googlemock/src/gmock-all.cc

lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gmock_main.dir/src/gmock-all.cc.i"
	cd /home/natanno4/Desktop/project/ex4/Nirnnat/cmake-build-debug/lib/googletest-master/googlemock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/natanno4/Desktop/project/ex4/Nirnnat/lib/googletest-master/googlemock/src/gmock-all.cc > CMakeFiles/gmock_main.dir/src/gmock-all.cc.i

lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gmock_main.dir/src/gmock-all.cc.s"
	cd /home/natanno4/Desktop/project/ex4/Nirnnat/cmake-build-debug/lib/googletest-master/googlemock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/natanno4/Desktop/project/ex4/Nirnnat/lib/googletest-master/googlemock/src/gmock-all.cc -o CMakeFiles/gmock_main.dir/src/gmock-all.cc.s
=======
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/natanno4/Desktop/test/Nirnnat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock-all.cc.o"
	cd /home/natanno4/Desktop/test/Nirnnat/cmake-build-debug/lib/googletest-master/googlemock && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gmock_main.dir/src/gmock-all.cc.o -c /home/natanno4/Desktop/test/Nirnnat/lib/googletest-master/googlemock/src/gmock-all.cc

lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gmock_main.dir/src/gmock-all.cc.i"
	cd /home/natanno4/Desktop/test/Nirnnat/cmake-build-debug/lib/googletest-master/googlemock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/natanno4/Desktop/test/Nirnnat/lib/googletest-master/googlemock/src/gmock-all.cc > CMakeFiles/gmock_main.dir/src/gmock-all.cc.i

lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gmock_main.dir/src/gmock-all.cc.s"
	cd /home/natanno4/Desktop/test/Nirnnat/cmake-build-debug/lib/googletest-master/googlemock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/natanno4/Desktop/test/Nirnnat/lib/googletest-master/googlemock/src/gmock-all.cc -o CMakeFiles/gmock_main.dir/src/gmock-all.cc.s
>>>>>>> 80c6f875702c36cd2224b6c0801deb0b824dc5b4

lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock-all.cc.o.requires:

.PHONY : lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock-all.cc.o.requires

lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock-all.cc.o.provides: lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock-all.cc.o.requires
	$(MAKE) -f lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/build.make lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock-all.cc.o.provides.build
.PHONY : lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock-all.cc.o.provides

lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock-all.cc.o.provides.build: lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock-all.cc.o


lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o: lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/flags.make
lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o: ../lib/googletest-master/googlemock/src/gmock_main.cc
<<<<<<< HEAD
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/natanno4/Desktop/project/ex4/Nirnnat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o"
	cd /home/natanno4/Desktop/project/ex4/Nirnnat/cmake-build-debug/lib/googletest-master/googlemock && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gmock_main.dir/src/gmock_main.cc.o -c /home/natanno4/Desktop/project/ex4/Nirnnat/lib/googletest-master/googlemock/src/gmock_main.cc

lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gmock_main.dir/src/gmock_main.cc.i"
	cd /home/natanno4/Desktop/project/ex4/Nirnnat/cmake-build-debug/lib/googletest-master/googlemock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/natanno4/Desktop/project/ex4/Nirnnat/lib/googletest-master/googlemock/src/gmock_main.cc > CMakeFiles/gmock_main.dir/src/gmock_main.cc.i

lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gmock_main.dir/src/gmock_main.cc.s"
	cd /home/natanno4/Desktop/project/ex4/Nirnnat/cmake-build-debug/lib/googletest-master/googlemock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/natanno4/Desktop/project/ex4/Nirnnat/lib/googletest-master/googlemock/src/gmock_main.cc -o CMakeFiles/gmock_main.dir/src/gmock_main.cc.s
=======
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/natanno4/Desktop/test/Nirnnat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o"
	cd /home/natanno4/Desktop/test/Nirnnat/cmake-build-debug/lib/googletest-master/googlemock && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gmock_main.dir/src/gmock_main.cc.o -c /home/natanno4/Desktop/test/Nirnnat/lib/googletest-master/googlemock/src/gmock_main.cc

lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gmock_main.dir/src/gmock_main.cc.i"
	cd /home/natanno4/Desktop/test/Nirnnat/cmake-build-debug/lib/googletest-master/googlemock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/natanno4/Desktop/test/Nirnnat/lib/googletest-master/googlemock/src/gmock_main.cc > CMakeFiles/gmock_main.dir/src/gmock_main.cc.i

lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gmock_main.dir/src/gmock_main.cc.s"
	cd /home/natanno4/Desktop/test/Nirnnat/cmake-build-debug/lib/googletest-master/googlemock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/natanno4/Desktop/test/Nirnnat/lib/googletest-master/googlemock/src/gmock_main.cc -o CMakeFiles/gmock_main.dir/src/gmock_main.cc.s
>>>>>>> 80c6f875702c36cd2224b6c0801deb0b824dc5b4

lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o.requires:

.PHONY : lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o.requires

lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o.provides: lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o.requires
	$(MAKE) -f lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/build.make lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o.provides.build
.PHONY : lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o.provides

lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o.provides.build: lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o


# Object files for target gmock_main
gmock_main_OBJECTS = \
"CMakeFiles/gmock_main.dir/__/googletest/src/gtest-all.cc.o" \
"CMakeFiles/gmock_main.dir/src/gmock-all.cc.o" \
"CMakeFiles/gmock_main.dir/src/gmock_main.cc.o"

# External object files for target gmock_main
gmock_main_EXTERNAL_OBJECTS =

lib/googletest-master/googlemock/libgmock_maind.a: lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/__/googletest/src/gtest-all.cc.o
lib/googletest-master/googlemock/libgmock_maind.a: lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock-all.cc.o
lib/googletest-master/googlemock/libgmock_maind.a: lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o
lib/googletest-master/googlemock/libgmock_maind.a: lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/build.make
lib/googletest-master/googlemock/libgmock_maind.a: lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/link.txt
<<<<<<< HEAD
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/natanno4/Desktop/project/ex4/Nirnnat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library libgmock_maind.a"
	cd /home/natanno4/Desktop/project/ex4/Nirnnat/cmake-build-debug/lib/googletest-master/googlemock && $(CMAKE_COMMAND) -P CMakeFiles/gmock_main.dir/cmake_clean_target.cmake
	cd /home/natanno4/Desktop/project/ex4/Nirnnat/cmake-build-debug/lib/googletest-master/googlemock && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gmock_main.dir/link.txt --verbose=$(VERBOSE)
=======
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/natanno4/Desktop/test/Nirnnat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library libgmock_maind.a"
	cd /home/natanno4/Desktop/test/Nirnnat/cmake-build-debug/lib/googletest-master/googlemock && $(CMAKE_COMMAND) -P CMakeFiles/gmock_main.dir/cmake_clean_target.cmake
	cd /home/natanno4/Desktop/test/Nirnnat/cmake-build-debug/lib/googletest-master/googlemock && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gmock_main.dir/link.txt --verbose=$(VERBOSE)
>>>>>>> 80c6f875702c36cd2224b6c0801deb0b824dc5b4

# Rule to build all files generated by this target.
lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/build: lib/googletest-master/googlemock/libgmock_maind.a

.PHONY : lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/build

lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/requires: lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/__/googletest/src/gtest-all.cc.o.requires
lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/requires: lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock-all.cc.o.requires
lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/requires: lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o.requires

.PHONY : lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/requires

lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/clean:
<<<<<<< HEAD
	cd /home/natanno4/Desktop/project/ex4/Nirnnat/cmake-build-debug/lib/googletest-master/googlemock && $(CMAKE_COMMAND) -P CMakeFiles/gmock_main.dir/cmake_clean.cmake
.PHONY : lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/clean

lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/depend:
	cd /home/natanno4/Desktop/project/ex4/Nirnnat/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/natanno4/Desktop/project/ex4/Nirnnat /home/natanno4/Desktop/project/ex4/Nirnnat/lib/googletest-master/googlemock /home/natanno4/Desktop/project/ex4/Nirnnat/cmake-build-debug /home/natanno4/Desktop/project/ex4/Nirnnat/cmake-build-debug/lib/googletest-master/googlemock /home/natanno4/Desktop/project/ex4/Nirnnat/cmake-build-debug/lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/DependInfo.cmake --color=$(COLOR)
=======
	cd /home/natanno4/Desktop/test/Nirnnat/cmake-build-debug/lib/googletest-master/googlemock && $(CMAKE_COMMAND) -P CMakeFiles/gmock_main.dir/cmake_clean.cmake
.PHONY : lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/clean

lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/depend:
	cd /home/natanno4/Desktop/test/Nirnnat/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/natanno4/Desktop/test/Nirnnat /home/natanno4/Desktop/test/Nirnnat/lib/googletest-master/googlemock /home/natanno4/Desktop/test/Nirnnat/cmake-build-debug /home/natanno4/Desktop/test/Nirnnat/cmake-build-debug/lib/googletest-master/googlemock /home/natanno4/Desktop/test/Nirnnat/cmake-build-debug/lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/DependInfo.cmake --color=$(COLOR)
>>>>>>> 80c6f875702c36cd2224b6c0801deb0b824dc5b4
.PHONY : lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/depend

