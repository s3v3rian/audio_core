cmake_minimum_required(VERSION 3.5)

project(RTP_Core LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Core REQUIRED)

add_library(RTP_Core STATIC
  rtp_core.cpp
  rtp_core.h
)

target_link_libraries(RTP_Core PRIVATE Qt5::Core)

target_compile_definitions(RTP_Core PRIVATE RTP_CORE_LIBRARY)
