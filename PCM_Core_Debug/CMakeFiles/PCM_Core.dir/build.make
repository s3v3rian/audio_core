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
CMAKE_SOURCE_DIR = /home/s3v3rian/audio_core/PCM_Core

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/s3v3rian/audio_core/PCM_Core_Debug

# Include any dependencies generated for this target.
include CMakeFiles/PCM_Core.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PCM_Core.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PCM_Core.dir/flags.make

CMakeFiles/PCM_Core.dir/services/audio_source/IAudioSourceService.cpp.o: CMakeFiles/PCM_Core.dir/flags.make
CMakeFiles/PCM_Core.dir/services/audio_source/IAudioSourceService.cpp.o: /home/s3v3rian/audio_core/PCM_Core/services/audio_source/IAudioSourceService.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/s3v3rian/audio_core/PCM_Core_Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PCM_Core.dir/services/audio_source/IAudioSourceService.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PCM_Core.dir/services/audio_source/IAudioSourceService.cpp.o -c /home/s3v3rian/audio_core/PCM_Core/services/audio_source/IAudioSourceService.cpp

CMakeFiles/PCM_Core.dir/services/audio_source/IAudioSourceService.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PCM_Core.dir/services/audio_source/IAudioSourceService.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/s3v3rian/audio_core/PCM_Core/services/audio_source/IAudioSourceService.cpp > CMakeFiles/PCM_Core.dir/services/audio_source/IAudioSourceService.cpp.i

CMakeFiles/PCM_Core.dir/services/audio_source/IAudioSourceService.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PCM_Core.dir/services/audio_source/IAudioSourceService.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/s3v3rian/audio_core/PCM_Core/services/audio_source/IAudioSourceService.cpp -o CMakeFiles/PCM_Core.dir/services/audio_source/IAudioSourceService.cpp.s

CMakeFiles/PCM_Core.dir/services/audio_source/IAudioSourceService.cpp.o.requires:

.PHONY : CMakeFiles/PCM_Core.dir/services/audio_source/IAudioSourceService.cpp.o.requires

CMakeFiles/PCM_Core.dir/services/audio_source/IAudioSourceService.cpp.o.provides: CMakeFiles/PCM_Core.dir/services/audio_source/IAudioSourceService.cpp.o.requires
	$(MAKE) -f CMakeFiles/PCM_Core.dir/build.make CMakeFiles/PCM_Core.dir/services/audio_source/IAudioSourceService.cpp.o.provides.build
.PHONY : CMakeFiles/PCM_Core.dir/services/audio_source/IAudioSourceService.cpp.o.provides

CMakeFiles/PCM_Core.dir/services/audio_source/IAudioSourceService.cpp.o.provides.build: CMakeFiles/PCM_Core.dir/services/audio_source/IAudioSourceService.cpp.o


CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaCaptureService.cpp.o: CMakeFiles/PCM_Core.dir/flags.make
CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaCaptureService.cpp.o: /home/s3v3rian/audio_core/PCM_Core/services/audio_source/alsa/CAlsaCaptureService.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/s3v3rian/audio_core/PCM_Core_Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaCaptureService.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaCaptureService.cpp.o -c /home/s3v3rian/audio_core/PCM_Core/services/audio_source/alsa/CAlsaCaptureService.cpp

CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaCaptureService.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaCaptureService.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/s3v3rian/audio_core/PCM_Core/services/audio_source/alsa/CAlsaCaptureService.cpp > CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaCaptureService.cpp.i

CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaCaptureService.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaCaptureService.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/s3v3rian/audio_core/PCM_Core/services/audio_source/alsa/CAlsaCaptureService.cpp -o CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaCaptureService.cpp.s

CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaCaptureService.cpp.o.requires:

.PHONY : CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaCaptureService.cpp.o.requires

CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaCaptureService.cpp.o.provides: CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaCaptureService.cpp.o.requires
	$(MAKE) -f CMakeFiles/PCM_Core.dir/build.make CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaCaptureService.cpp.o.provides.build
.PHONY : CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaCaptureService.cpp.o.provides

CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaCaptureService.cpp.o.provides.build: CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaCaptureService.cpp.o


CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaPlaybackService.cpp.o: CMakeFiles/PCM_Core.dir/flags.make
CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaPlaybackService.cpp.o: /home/s3v3rian/audio_core/PCM_Core/services/audio_source/alsa/CAlsaPlaybackService.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/s3v3rian/audio_core/PCM_Core_Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaPlaybackService.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaPlaybackService.cpp.o -c /home/s3v3rian/audio_core/PCM_Core/services/audio_source/alsa/CAlsaPlaybackService.cpp

CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaPlaybackService.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaPlaybackService.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/s3v3rian/audio_core/PCM_Core/services/audio_source/alsa/CAlsaPlaybackService.cpp > CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaPlaybackService.cpp.i

CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaPlaybackService.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaPlaybackService.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/s3v3rian/audio_core/PCM_Core/services/audio_source/alsa/CAlsaPlaybackService.cpp -o CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaPlaybackService.cpp.s

CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaPlaybackService.cpp.o.requires:

.PHONY : CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaPlaybackService.cpp.o.requires

CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaPlaybackService.cpp.o.provides: CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaPlaybackService.cpp.o.requires
	$(MAKE) -f CMakeFiles/PCM_Core.dir/build.make CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaPlaybackService.cpp.o.provides.build
.PHONY : CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaPlaybackService.cpp.o.provides

CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaPlaybackService.cpp.o.provides.build: CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaPlaybackService.cpp.o


CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaParamsConfigurator.cpp.o: CMakeFiles/PCM_Core.dir/flags.make
CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaParamsConfigurator.cpp.o: /home/s3v3rian/audio_core/PCM_Core/services/audio_source/alsa/CAlsaParamsConfigurator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/s3v3rian/audio_core/PCM_Core_Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaParamsConfigurator.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaParamsConfigurator.cpp.o -c /home/s3v3rian/audio_core/PCM_Core/services/audio_source/alsa/CAlsaParamsConfigurator.cpp

CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaParamsConfigurator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaParamsConfigurator.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/s3v3rian/audio_core/PCM_Core/services/audio_source/alsa/CAlsaParamsConfigurator.cpp > CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaParamsConfigurator.cpp.i

CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaParamsConfigurator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaParamsConfigurator.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/s3v3rian/audio_core/PCM_Core/services/audio_source/alsa/CAlsaParamsConfigurator.cpp -o CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaParamsConfigurator.cpp.s

CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaParamsConfigurator.cpp.o.requires:

.PHONY : CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaParamsConfigurator.cpp.o.requires

CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaParamsConfigurator.cpp.o.provides: CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaParamsConfigurator.cpp.o.requires
	$(MAKE) -f CMakeFiles/PCM_Core.dir/build.make CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaParamsConfigurator.cpp.o.provides.build
.PHONY : CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaParamsConfigurator.cpp.o.provides

CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaParamsConfigurator.cpp.o.provides.build: CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaParamsConfigurator.cpp.o


CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileReaderService.cpp.o: CMakeFiles/PCM_Core.dir/flags.make
CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileReaderService.cpp.o: /home/s3v3rian/audio_core/PCM_Core/services/audio_source/binary_file/CBinaryFileReaderService.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/s3v3rian/audio_core/PCM_Core_Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileReaderService.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileReaderService.cpp.o -c /home/s3v3rian/audio_core/PCM_Core/services/audio_source/binary_file/CBinaryFileReaderService.cpp

CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileReaderService.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileReaderService.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/s3v3rian/audio_core/PCM_Core/services/audio_source/binary_file/CBinaryFileReaderService.cpp > CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileReaderService.cpp.i

CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileReaderService.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileReaderService.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/s3v3rian/audio_core/PCM_Core/services/audio_source/binary_file/CBinaryFileReaderService.cpp -o CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileReaderService.cpp.s

CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileReaderService.cpp.o.requires:

.PHONY : CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileReaderService.cpp.o.requires

CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileReaderService.cpp.o.provides: CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileReaderService.cpp.o.requires
	$(MAKE) -f CMakeFiles/PCM_Core.dir/build.make CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileReaderService.cpp.o.provides.build
.PHONY : CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileReaderService.cpp.o.provides

CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileReaderService.cpp.o.provides.build: CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileReaderService.cpp.o


CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileWriterService.cpp.o: CMakeFiles/PCM_Core.dir/flags.make
CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileWriterService.cpp.o: /home/s3v3rian/audio_core/PCM_Core/services/audio_source/binary_file/CBinaryFileWriterService.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/s3v3rian/audio_core/PCM_Core_Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileWriterService.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileWriterService.cpp.o -c /home/s3v3rian/audio_core/PCM_Core/services/audio_source/binary_file/CBinaryFileWriterService.cpp

CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileWriterService.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileWriterService.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/s3v3rian/audio_core/PCM_Core/services/audio_source/binary_file/CBinaryFileWriterService.cpp > CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileWriterService.cpp.i

CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileWriterService.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileWriterService.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/s3v3rian/audio_core/PCM_Core/services/audio_source/binary_file/CBinaryFileWriterService.cpp -o CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileWriterService.cpp.s

CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileWriterService.cpp.o.requires:

.PHONY : CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileWriterService.cpp.o.requires

CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileWriterService.cpp.o.provides: CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileWriterService.cpp.o.requires
	$(MAKE) -f CMakeFiles/PCM_Core.dir/build.make CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileWriterService.cpp.o.provides.build
.PHONY : CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileWriterService.cpp.o.provides

CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileWriterService.cpp.o.provides.build: CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileWriterService.cpp.o


CMakeFiles/PCM_Core.dir/services/filter_service/CFilterService.cpp.o: CMakeFiles/PCM_Core.dir/flags.make
CMakeFiles/PCM_Core.dir/services/filter_service/CFilterService.cpp.o: /home/s3v3rian/audio_core/PCM_Core/services/filter_service/CFilterService.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/s3v3rian/audio_core/PCM_Core_Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/PCM_Core.dir/services/filter_service/CFilterService.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PCM_Core.dir/services/filter_service/CFilterService.cpp.o -c /home/s3v3rian/audio_core/PCM_Core/services/filter_service/CFilterService.cpp

CMakeFiles/PCM_Core.dir/services/filter_service/CFilterService.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PCM_Core.dir/services/filter_service/CFilterService.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/s3v3rian/audio_core/PCM_Core/services/filter_service/CFilterService.cpp > CMakeFiles/PCM_Core.dir/services/filter_service/CFilterService.cpp.i

CMakeFiles/PCM_Core.dir/services/filter_service/CFilterService.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PCM_Core.dir/services/filter_service/CFilterService.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/s3v3rian/audio_core/PCM_Core/services/filter_service/CFilterService.cpp -o CMakeFiles/PCM_Core.dir/services/filter_service/CFilterService.cpp.s

CMakeFiles/PCM_Core.dir/services/filter_service/CFilterService.cpp.o.requires:

.PHONY : CMakeFiles/PCM_Core.dir/services/filter_service/CFilterService.cpp.o.requires

CMakeFiles/PCM_Core.dir/services/filter_service/CFilterService.cpp.o.provides: CMakeFiles/PCM_Core.dir/services/filter_service/CFilterService.cpp.o.requires
	$(MAKE) -f CMakeFiles/PCM_Core.dir/build.make CMakeFiles/PCM_Core.dir/services/filter_service/CFilterService.cpp.o.provides.build
.PHONY : CMakeFiles/PCM_Core.dir/services/filter_service/CFilterService.cpp.o.provides

CMakeFiles/PCM_Core.dir/services/filter_service/CFilterService.cpp.o.provides.build: CMakeFiles/PCM_Core.dir/services/filter_service/CFilterService.cpp.o


CMakeFiles/PCM_Core.dir/services/filter_service/IFilterService.cpp.o: CMakeFiles/PCM_Core.dir/flags.make
CMakeFiles/PCM_Core.dir/services/filter_service/IFilterService.cpp.o: /home/s3v3rian/audio_core/PCM_Core/services/filter_service/IFilterService.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/s3v3rian/audio_core/PCM_Core_Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/PCM_Core.dir/services/filter_service/IFilterService.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PCM_Core.dir/services/filter_service/IFilterService.cpp.o -c /home/s3v3rian/audio_core/PCM_Core/services/filter_service/IFilterService.cpp

CMakeFiles/PCM_Core.dir/services/filter_service/IFilterService.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PCM_Core.dir/services/filter_service/IFilterService.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/s3v3rian/audio_core/PCM_Core/services/filter_service/IFilterService.cpp > CMakeFiles/PCM_Core.dir/services/filter_service/IFilterService.cpp.i

CMakeFiles/PCM_Core.dir/services/filter_service/IFilterService.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PCM_Core.dir/services/filter_service/IFilterService.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/s3v3rian/audio_core/PCM_Core/services/filter_service/IFilterService.cpp -o CMakeFiles/PCM_Core.dir/services/filter_service/IFilterService.cpp.s

CMakeFiles/PCM_Core.dir/services/filter_service/IFilterService.cpp.o.requires:

.PHONY : CMakeFiles/PCM_Core.dir/services/filter_service/IFilterService.cpp.o.requires

CMakeFiles/PCM_Core.dir/services/filter_service/IFilterService.cpp.o.provides: CMakeFiles/PCM_Core.dir/services/filter_service/IFilterService.cpp.o.requires
	$(MAKE) -f CMakeFiles/PCM_Core.dir/build.make CMakeFiles/PCM_Core.dir/services/filter_service/IFilterService.cpp.o.provides.build
.PHONY : CMakeFiles/PCM_Core.dir/services/filter_service/IFilterService.cpp.o.provides

CMakeFiles/PCM_Core.dir/services/filter_service/IFilterService.cpp.o.provides.build: CMakeFiles/PCM_Core.dir/services/filter_service/IFilterService.cpp.o


CMakeFiles/PCM_Core.dir/applications/pcm_processor/logic/CAudioSourceProcessor.cpp.o: CMakeFiles/PCM_Core.dir/flags.make
CMakeFiles/PCM_Core.dir/applications/pcm_processor/logic/CAudioSourceProcessor.cpp.o: /home/s3v3rian/audio_core/PCM_Core/applications/pcm_processor/logic/CAudioSourceProcessor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/s3v3rian/audio_core/PCM_Core_Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/PCM_Core.dir/applications/pcm_processor/logic/CAudioSourceProcessor.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PCM_Core.dir/applications/pcm_processor/logic/CAudioSourceProcessor.cpp.o -c /home/s3v3rian/audio_core/PCM_Core/applications/pcm_processor/logic/CAudioSourceProcessor.cpp

CMakeFiles/PCM_Core.dir/applications/pcm_processor/logic/CAudioSourceProcessor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PCM_Core.dir/applications/pcm_processor/logic/CAudioSourceProcessor.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/s3v3rian/audio_core/PCM_Core/applications/pcm_processor/logic/CAudioSourceProcessor.cpp > CMakeFiles/PCM_Core.dir/applications/pcm_processor/logic/CAudioSourceProcessor.cpp.i

CMakeFiles/PCM_Core.dir/applications/pcm_processor/logic/CAudioSourceProcessor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PCM_Core.dir/applications/pcm_processor/logic/CAudioSourceProcessor.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/s3v3rian/audio_core/PCM_Core/applications/pcm_processor/logic/CAudioSourceProcessor.cpp -o CMakeFiles/PCM_Core.dir/applications/pcm_processor/logic/CAudioSourceProcessor.cpp.s

CMakeFiles/PCM_Core.dir/applications/pcm_processor/logic/CAudioSourceProcessor.cpp.o.requires:

.PHONY : CMakeFiles/PCM_Core.dir/applications/pcm_processor/logic/CAudioSourceProcessor.cpp.o.requires

CMakeFiles/PCM_Core.dir/applications/pcm_processor/logic/CAudioSourceProcessor.cpp.o.provides: CMakeFiles/PCM_Core.dir/applications/pcm_processor/logic/CAudioSourceProcessor.cpp.o.requires
	$(MAKE) -f CMakeFiles/PCM_Core.dir/build.make CMakeFiles/PCM_Core.dir/applications/pcm_processor/logic/CAudioSourceProcessor.cpp.o.provides.build
.PHONY : CMakeFiles/PCM_Core.dir/applications/pcm_processor/logic/CAudioSourceProcessor.cpp.o.provides

CMakeFiles/PCM_Core.dir/applications/pcm_processor/logic/CAudioSourceProcessor.cpp.o.provides.build: CMakeFiles/PCM_Core.dir/applications/pcm_processor/logic/CAudioSourceProcessor.cpp.o


CMakeFiles/PCM_Core.dir/applications/pcm_processor/CPcmProcessorApplication.cpp.o: CMakeFiles/PCM_Core.dir/flags.make
CMakeFiles/PCM_Core.dir/applications/pcm_processor/CPcmProcessorApplication.cpp.o: /home/s3v3rian/audio_core/PCM_Core/applications/pcm_processor/CPcmProcessorApplication.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/s3v3rian/audio_core/PCM_Core_Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/PCM_Core.dir/applications/pcm_processor/CPcmProcessorApplication.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PCM_Core.dir/applications/pcm_processor/CPcmProcessorApplication.cpp.o -c /home/s3v3rian/audio_core/PCM_Core/applications/pcm_processor/CPcmProcessorApplication.cpp

CMakeFiles/PCM_Core.dir/applications/pcm_processor/CPcmProcessorApplication.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PCM_Core.dir/applications/pcm_processor/CPcmProcessorApplication.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/s3v3rian/audio_core/PCM_Core/applications/pcm_processor/CPcmProcessorApplication.cpp > CMakeFiles/PCM_Core.dir/applications/pcm_processor/CPcmProcessorApplication.cpp.i

CMakeFiles/PCM_Core.dir/applications/pcm_processor/CPcmProcessorApplication.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PCM_Core.dir/applications/pcm_processor/CPcmProcessorApplication.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/s3v3rian/audio_core/PCM_Core/applications/pcm_processor/CPcmProcessorApplication.cpp -o CMakeFiles/PCM_Core.dir/applications/pcm_processor/CPcmProcessorApplication.cpp.s

CMakeFiles/PCM_Core.dir/applications/pcm_processor/CPcmProcessorApplication.cpp.o.requires:

.PHONY : CMakeFiles/PCM_Core.dir/applications/pcm_processor/CPcmProcessorApplication.cpp.o.requires

CMakeFiles/PCM_Core.dir/applications/pcm_processor/CPcmProcessorApplication.cpp.o.provides: CMakeFiles/PCM_Core.dir/applications/pcm_processor/CPcmProcessorApplication.cpp.o.requires
	$(MAKE) -f CMakeFiles/PCM_Core.dir/build.make CMakeFiles/PCM_Core.dir/applications/pcm_processor/CPcmProcessorApplication.cpp.o.provides.build
.PHONY : CMakeFiles/PCM_Core.dir/applications/pcm_processor/CPcmProcessorApplication.cpp.o.provides

CMakeFiles/PCM_Core.dir/applications/pcm_processor/CPcmProcessorApplication.cpp.o.provides.build: CMakeFiles/PCM_Core.dir/applications/pcm_processor/CPcmProcessorApplication.cpp.o


CMakeFiles/PCM_Core.dir/applications/pcm_transform/logic/CPcmRecorder.cpp.o: CMakeFiles/PCM_Core.dir/flags.make
CMakeFiles/PCM_Core.dir/applications/pcm_transform/logic/CPcmRecorder.cpp.o: /home/s3v3rian/audio_core/PCM_Core/applications/pcm_transform/logic/CPcmRecorder.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/s3v3rian/audio_core/PCM_Core_Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/PCM_Core.dir/applications/pcm_transform/logic/CPcmRecorder.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PCM_Core.dir/applications/pcm_transform/logic/CPcmRecorder.cpp.o -c /home/s3v3rian/audio_core/PCM_Core/applications/pcm_transform/logic/CPcmRecorder.cpp

CMakeFiles/PCM_Core.dir/applications/pcm_transform/logic/CPcmRecorder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PCM_Core.dir/applications/pcm_transform/logic/CPcmRecorder.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/s3v3rian/audio_core/PCM_Core/applications/pcm_transform/logic/CPcmRecorder.cpp > CMakeFiles/PCM_Core.dir/applications/pcm_transform/logic/CPcmRecorder.cpp.i

CMakeFiles/PCM_Core.dir/applications/pcm_transform/logic/CPcmRecorder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PCM_Core.dir/applications/pcm_transform/logic/CPcmRecorder.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/s3v3rian/audio_core/PCM_Core/applications/pcm_transform/logic/CPcmRecorder.cpp -o CMakeFiles/PCM_Core.dir/applications/pcm_transform/logic/CPcmRecorder.cpp.s

CMakeFiles/PCM_Core.dir/applications/pcm_transform/logic/CPcmRecorder.cpp.o.requires:

.PHONY : CMakeFiles/PCM_Core.dir/applications/pcm_transform/logic/CPcmRecorder.cpp.o.requires

CMakeFiles/PCM_Core.dir/applications/pcm_transform/logic/CPcmRecorder.cpp.o.provides: CMakeFiles/PCM_Core.dir/applications/pcm_transform/logic/CPcmRecorder.cpp.o.requires
	$(MAKE) -f CMakeFiles/PCM_Core.dir/build.make CMakeFiles/PCM_Core.dir/applications/pcm_transform/logic/CPcmRecorder.cpp.o.provides.build
.PHONY : CMakeFiles/PCM_Core.dir/applications/pcm_transform/logic/CPcmRecorder.cpp.o.provides

CMakeFiles/PCM_Core.dir/applications/pcm_transform/logic/CPcmRecorder.cpp.o.provides.build: CMakeFiles/PCM_Core.dir/applications/pcm_transform/logic/CPcmRecorder.cpp.o


CMakeFiles/PCM_Core.dir/applications/pcm_transform/CPcmTransformApplication.cpp.o: CMakeFiles/PCM_Core.dir/flags.make
CMakeFiles/PCM_Core.dir/applications/pcm_transform/CPcmTransformApplication.cpp.o: /home/s3v3rian/audio_core/PCM_Core/applications/pcm_transform/CPcmTransformApplication.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/s3v3rian/audio_core/PCM_Core_Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/PCM_Core.dir/applications/pcm_transform/CPcmTransformApplication.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PCM_Core.dir/applications/pcm_transform/CPcmTransformApplication.cpp.o -c /home/s3v3rian/audio_core/PCM_Core/applications/pcm_transform/CPcmTransformApplication.cpp

CMakeFiles/PCM_Core.dir/applications/pcm_transform/CPcmTransformApplication.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PCM_Core.dir/applications/pcm_transform/CPcmTransformApplication.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/s3v3rian/audio_core/PCM_Core/applications/pcm_transform/CPcmTransformApplication.cpp > CMakeFiles/PCM_Core.dir/applications/pcm_transform/CPcmTransformApplication.cpp.i

CMakeFiles/PCM_Core.dir/applications/pcm_transform/CPcmTransformApplication.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PCM_Core.dir/applications/pcm_transform/CPcmTransformApplication.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/s3v3rian/audio_core/PCM_Core/applications/pcm_transform/CPcmTransformApplication.cpp -o CMakeFiles/PCM_Core.dir/applications/pcm_transform/CPcmTransformApplication.cpp.s

CMakeFiles/PCM_Core.dir/applications/pcm_transform/CPcmTransformApplication.cpp.o.requires:

.PHONY : CMakeFiles/PCM_Core.dir/applications/pcm_transform/CPcmTransformApplication.cpp.o.requires

CMakeFiles/PCM_Core.dir/applications/pcm_transform/CPcmTransformApplication.cpp.o.provides: CMakeFiles/PCM_Core.dir/applications/pcm_transform/CPcmTransformApplication.cpp.o.requires
	$(MAKE) -f CMakeFiles/PCM_Core.dir/build.make CMakeFiles/PCM_Core.dir/applications/pcm_transform/CPcmTransformApplication.cpp.o.provides.build
.PHONY : CMakeFiles/PCM_Core.dir/applications/pcm_transform/CPcmTransformApplication.cpp.o.provides

CMakeFiles/PCM_Core.dir/applications/pcm_transform/CPcmTransformApplication.cpp.o.provides.build: CMakeFiles/PCM_Core.dir/applications/pcm_transform/CPcmTransformApplication.cpp.o


CMakeFiles/PCM_Core.dir/factory/CPcmCoreFactory.cpp.o: CMakeFiles/PCM_Core.dir/flags.make
CMakeFiles/PCM_Core.dir/factory/CPcmCoreFactory.cpp.o: /home/s3v3rian/audio_core/PCM_Core/factory/CPcmCoreFactory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/s3v3rian/audio_core/PCM_Core_Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/PCM_Core.dir/factory/CPcmCoreFactory.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PCM_Core.dir/factory/CPcmCoreFactory.cpp.o -c /home/s3v3rian/audio_core/PCM_Core/factory/CPcmCoreFactory.cpp

CMakeFiles/PCM_Core.dir/factory/CPcmCoreFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PCM_Core.dir/factory/CPcmCoreFactory.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/s3v3rian/audio_core/PCM_Core/factory/CPcmCoreFactory.cpp > CMakeFiles/PCM_Core.dir/factory/CPcmCoreFactory.cpp.i

CMakeFiles/PCM_Core.dir/factory/CPcmCoreFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PCM_Core.dir/factory/CPcmCoreFactory.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/s3v3rian/audio_core/PCM_Core/factory/CPcmCoreFactory.cpp -o CMakeFiles/PCM_Core.dir/factory/CPcmCoreFactory.cpp.s

CMakeFiles/PCM_Core.dir/factory/CPcmCoreFactory.cpp.o.requires:

.PHONY : CMakeFiles/PCM_Core.dir/factory/CPcmCoreFactory.cpp.o.requires

CMakeFiles/PCM_Core.dir/factory/CPcmCoreFactory.cpp.o.provides: CMakeFiles/PCM_Core.dir/factory/CPcmCoreFactory.cpp.o.requires
	$(MAKE) -f CMakeFiles/PCM_Core.dir/build.make CMakeFiles/PCM_Core.dir/factory/CPcmCoreFactory.cpp.o.provides.build
.PHONY : CMakeFiles/PCM_Core.dir/factory/CPcmCoreFactory.cpp.o.provides

CMakeFiles/PCM_Core.dir/factory/CPcmCoreFactory.cpp.o.provides.build: CMakeFiles/PCM_Core.dir/factory/CPcmCoreFactory.cpp.o


# Object files for target PCM_Core
PCM_Core_OBJECTS = \
"CMakeFiles/PCM_Core.dir/services/audio_source/IAudioSourceService.cpp.o" \
"CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaCaptureService.cpp.o" \
"CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaPlaybackService.cpp.o" \
"CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaParamsConfigurator.cpp.o" \
"CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileReaderService.cpp.o" \
"CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileWriterService.cpp.o" \
"CMakeFiles/PCM_Core.dir/services/filter_service/CFilterService.cpp.o" \
"CMakeFiles/PCM_Core.dir/services/filter_service/IFilterService.cpp.o" \
"CMakeFiles/PCM_Core.dir/applications/pcm_processor/logic/CAudioSourceProcessor.cpp.o" \
"CMakeFiles/PCM_Core.dir/applications/pcm_processor/CPcmProcessorApplication.cpp.o" \
"CMakeFiles/PCM_Core.dir/applications/pcm_transform/logic/CPcmRecorder.cpp.o" \
"CMakeFiles/PCM_Core.dir/applications/pcm_transform/CPcmTransformApplication.cpp.o" \
"CMakeFiles/PCM_Core.dir/factory/CPcmCoreFactory.cpp.o"

# External object files for target PCM_Core
PCM_Core_EXTERNAL_OBJECTS =

libPCM_Core.a: CMakeFiles/PCM_Core.dir/services/audio_source/IAudioSourceService.cpp.o
libPCM_Core.a: CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaCaptureService.cpp.o
libPCM_Core.a: CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaPlaybackService.cpp.o
libPCM_Core.a: CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaParamsConfigurator.cpp.o
libPCM_Core.a: CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileReaderService.cpp.o
libPCM_Core.a: CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileWriterService.cpp.o
libPCM_Core.a: CMakeFiles/PCM_Core.dir/services/filter_service/CFilterService.cpp.o
libPCM_Core.a: CMakeFiles/PCM_Core.dir/services/filter_service/IFilterService.cpp.o
libPCM_Core.a: CMakeFiles/PCM_Core.dir/applications/pcm_processor/logic/CAudioSourceProcessor.cpp.o
libPCM_Core.a: CMakeFiles/PCM_Core.dir/applications/pcm_processor/CPcmProcessorApplication.cpp.o
libPCM_Core.a: CMakeFiles/PCM_Core.dir/applications/pcm_transform/logic/CPcmRecorder.cpp.o
libPCM_Core.a: CMakeFiles/PCM_Core.dir/applications/pcm_transform/CPcmTransformApplication.cpp.o
libPCM_Core.a: CMakeFiles/PCM_Core.dir/factory/CPcmCoreFactory.cpp.o
libPCM_Core.a: CMakeFiles/PCM_Core.dir/build.make
libPCM_Core.a: CMakeFiles/PCM_Core.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/s3v3rian/audio_core/PCM_Core_Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Linking CXX static library libPCM_Core.a"
	$(CMAKE_COMMAND) -P CMakeFiles/PCM_Core.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PCM_Core.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PCM_Core.dir/build: libPCM_Core.a

.PHONY : CMakeFiles/PCM_Core.dir/build

CMakeFiles/PCM_Core.dir/requires: CMakeFiles/PCM_Core.dir/services/audio_source/IAudioSourceService.cpp.o.requires
CMakeFiles/PCM_Core.dir/requires: CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaCaptureService.cpp.o.requires
CMakeFiles/PCM_Core.dir/requires: CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaPlaybackService.cpp.o.requires
CMakeFiles/PCM_Core.dir/requires: CMakeFiles/PCM_Core.dir/services/audio_source/alsa/CAlsaParamsConfigurator.cpp.o.requires
CMakeFiles/PCM_Core.dir/requires: CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileReaderService.cpp.o.requires
CMakeFiles/PCM_Core.dir/requires: CMakeFiles/PCM_Core.dir/services/audio_source/binary_file/CBinaryFileWriterService.cpp.o.requires
CMakeFiles/PCM_Core.dir/requires: CMakeFiles/PCM_Core.dir/services/filter_service/CFilterService.cpp.o.requires
CMakeFiles/PCM_Core.dir/requires: CMakeFiles/PCM_Core.dir/services/filter_service/IFilterService.cpp.o.requires
CMakeFiles/PCM_Core.dir/requires: CMakeFiles/PCM_Core.dir/applications/pcm_processor/logic/CAudioSourceProcessor.cpp.o.requires
CMakeFiles/PCM_Core.dir/requires: CMakeFiles/PCM_Core.dir/applications/pcm_processor/CPcmProcessorApplication.cpp.o.requires
CMakeFiles/PCM_Core.dir/requires: CMakeFiles/PCM_Core.dir/applications/pcm_transform/logic/CPcmRecorder.cpp.o.requires
CMakeFiles/PCM_Core.dir/requires: CMakeFiles/PCM_Core.dir/applications/pcm_transform/CPcmTransformApplication.cpp.o.requires
CMakeFiles/PCM_Core.dir/requires: CMakeFiles/PCM_Core.dir/factory/CPcmCoreFactory.cpp.o.requires

.PHONY : CMakeFiles/PCM_Core.dir/requires

CMakeFiles/PCM_Core.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PCM_Core.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PCM_Core.dir/clean

CMakeFiles/PCM_Core.dir/depend:
	cd /home/s3v3rian/audio_core/PCM_Core_Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/s3v3rian/audio_core/PCM_Core /home/s3v3rian/audio_core/PCM_Core /home/s3v3rian/audio_core/PCM_Core_Debug /home/s3v3rian/audio_core/PCM_Core_Debug /home/s3v3rian/audio_core/PCM_Core_Debug/CMakeFiles/PCM_Core.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PCM_Core.dir/depend
