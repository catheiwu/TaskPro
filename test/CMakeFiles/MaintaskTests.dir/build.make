# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /data/class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571

# Include any dependencies generated for this target.
include test/CMakeFiles/MaintaskTests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include test/CMakeFiles/MaintaskTests.dir/compiler_depend.make

# Include the progress variables for this target.
include test/CMakeFiles/MaintaskTests.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/MaintaskTests.dir/flags.make

test/CMakeFiles/MaintaskTests.dir/testMainTask.cpp.o: test/CMakeFiles/MaintaskTests.dir/flags.make
test/CMakeFiles/MaintaskTests.dir/testMainTask.cpp.o: /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/test/testMainTask.cpp
test/CMakeFiles/MaintaskTests.dir/testMainTask.cpp.o: test/CMakeFiles/MaintaskTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/data/class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/MaintaskTests.dir/testMainTask.cpp.o"
	cd /data/class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/CMakeFiles/MaintaskTests.dir/testMainTask.cpp.o -MF CMakeFiles/MaintaskTests.dir/testMainTask.cpp.o.d -o CMakeFiles/MaintaskTests.dir/testMainTask.cpp.o -c /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/test/testMainTask.cpp

test/CMakeFiles/MaintaskTests.dir/testMainTask.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MaintaskTests.dir/testMainTask.cpp.i"
	cd /data/class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/test/testMainTask.cpp > CMakeFiles/MaintaskTests.dir/testMainTask.cpp.i

test/CMakeFiles/MaintaskTests.dir/testMainTask.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MaintaskTests.dir/testMainTask.cpp.s"
	cd /data/class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/test/testMainTask.cpp -o CMakeFiles/MaintaskTests.dir/testMainTask.cpp.s

test/CMakeFiles/MaintaskTests.dir/hmain.cpp.o: test/CMakeFiles/MaintaskTests.dir/flags.make
test/CMakeFiles/MaintaskTests.dir/hmain.cpp.o: /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/test/hmain.cpp
test/CMakeFiles/MaintaskTests.dir/hmain.cpp.o: test/CMakeFiles/MaintaskTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/data/class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object test/CMakeFiles/MaintaskTests.dir/hmain.cpp.o"
	cd /data/class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/CMakeFiles/MaintaskTests.dir/hmain.cpp.o -MF CMakeFiles/MaintaskTests.dir/hmain.cpp.o.d -o CMakeFiles/MaintaskTests.dir/hmain.cpp.o -c /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/test/hmain.cpp

test/CMakeFiles/MaintaskTests.dir/hmain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MaintaskTests.dir/hmain.cpp.i"
	cd /data/class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/test/hmain.cpp > CMakeFiles/MaintaskTests.dir/hmain.cpp.i

test/CMakeFiles/MaintaskTests.dir/hmain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MaintaskTests.dir/hmain.cpp.s"
	cd /data/class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/test/hmain.cpp -o CMakeFiles/MaintaskTests.dir/hmain.cpp.s

# Object files for target MaintaskTests
MaintaskTests_OBJECTS = \
"CMakeFiles/MaintaskTests.dir/testMainTask.cpp.o" \
"CMakeFiles/MaintaskTests.dir/hmain.cpp.o"

# External object files for target MaintaskTests
MaintaskTests_EXTERNAL_OBJECTS =

bin/MaintaskTests: test/CMakeFiles/MaintaskTests.dir/testMainTask.cpp.o
bin/MaintaskTests: test/CMakeFiles/MaintaskTests.dir/hmain.cpp.o
bin/MaintaskTests: test/CMakeFiles/MaintaskTests.dir/build.make
bin/MaintaskTests: lib/libgmock.a
bin/MaintaskTests: lib/libgtest.a
bin/MaintaskTests: lib/libgtest_main.a
bin/MaintaskTests: lib/libtaskLibrary.a
bin/MaintaskTests: lib/libgtest.a
bin/MaintaskTests: test/CMakeFiles/MaintaskTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/data/class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../bin/MaintaskTests"
	cd /data/class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MaintaskTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/MaintaskTests.dir/build: bin/MaintaskTests
.PHONY : test/CMakeFiles/MaintaskTests.dir/build

test/CMakeFiles/MaintaskTests.dir/clean:
	cd /data/class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/test && $(CMAKE_COMMAND) -P CMakeFiles/MaintaskTests.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/MaintaskTests.dir/clean

test/CMakeFiles/MaintaskTests.dir/depend:
	cd /data/class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571 /class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/test /data/class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571 /data/class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/test /data/class/classes/cwu247/final-project-fmoha020-cwu247-bjian018-xwang571/test/CMakeFiles/MaintaskTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/MaintaskTests.dir/depend

