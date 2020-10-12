# --------------------------------------------------
# ----------------- CMAKE Settings -----------------
# --------------------------------------------------
cmake_minimum_required(VERSION 3.5)

project(PCM_Core LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)

add_library(PCM_Core STATIC

    services/audio_source/IAudioSourceService.cpp

    services/audio_source/alsa/CAlsaCaptureService.cpp
    services/audio_source/alsa/CAlsaPlaybackService.cpp
    services/audio_source/alsa/CAlsaParamsConfigurator.cpp
    services/audio_source/binary_file/CBinaryFileReaderService.cpp
    services/audio_source/binary_file/CBinaryFileWriterService.cpp
    services/filter_service/CFilterService.cpp
    services/filter_service/IFilterService.cpp

    applications/pcm_processor/logic/CAudioSourceProcessor.cpp
    applications/pcm_processor/CPcmProcessorApplication.cpp
    applications/pcm_transform/logic/CPcmRecorder.cpp
    applications/pcm_transform/CPcmTransformApplication.cpp

    factory/CPcmCoreFactory.cpp

    services/audio_source/IAudioSourceService.h
    services/filter_service/IFilterService.h

    services/audio_source/alsa/CAlsaCaptureService.h
    services/audio_source/alsa/CAlsaPlaybackService.h
    services/audio_source/alsa/CAlsaParamsConfigurator.h
    services/audio_source/binary_file/CBinaryFileReaderService.h
    services/audio_source/binary_file/CBinaryFileWriterService.h
    services/filter_service/CFilterService.h

    applications/pcm_processor/logic/CAudioSourceProcessor.h
    applications/pcm_processor/CPcmProcessorApplication.h
    applications/pcm_transform/logic/CPcmRecorder.h
    applications/pcm_transform/CPcmTransformApplication.h

    factory/CPcmCoreFactory.h

    common/PcmCoreDefinitions.h
    common/PcmCoreTypes.h
)

add_definitions(-D__LINUX_SYSTEM__)

include_directories(../Infrastructure_Core/Debug/includes)

target_compile_definitions(PCM_Core PRIVATE PCM_CORE_LIBRARY)
