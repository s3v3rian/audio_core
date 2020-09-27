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

    Services/Filter_Service/CFilterService.cpp
    Applications/PCM_Processor/CPcmProcessorApplication.cpp

    Services/Filter_Service/CFilterService.h
    Applications/PCM_Processor/CPcmProcessorApplication.h
)

add_definitions(-D__LINUX_SYSTEM__)

target_compile_definitions(PCM_Core PRIVATE PCM_CORE_LIBRARY)
