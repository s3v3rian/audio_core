# --------------------------------------------------
# ----------------- CMAKE Settings -----------------
# --------------------------------------------------
cmake_minimum_required(VERSION 3.5)

project(Infrastructure_Core LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)

add_library(Infrastructure_Core STATIC

    Components/ILifeCycle.cpp
    Components/IComponent.cpp
    Components/IDevice.cpp
    Components/IService.cpp
    Components/IApplication.cpp
    Components/IBoundary.cpp
    Components/IFactory.cpp
    Components/IListener.cpp
    Components/IConnector.cpp
    Components/IConnectorListener.cpp

    Task/ITask.cpp
    Task/IScheduledTask.cpp

    Queue/CSPSCQueue.cpp
    Queue/CMPSCQueue.cpp

    Disruptor/CDisruptor.cpp

    Logger/CLogger.cpp

    Components/ILifeCycle.h
    Components/IComponent.h
    Components/IDevice.h
    Components/IService.h
    Components/IApplication.h
    Components/IBoundary.h
    Components/IFactory.h
    Components/IListener.h
    Components/IConnector.h
    Components/IConnectorListener.h

    Task/ITask.h
    Task/IScheduledTask.h

    Queue/IQueue.h
    Queue/CSPSCQueue.h
    Queue/CMPSCQueue.h

    Disruptor/CDisruptor.h

    Logger/CLogger.h
)

add_definitions(-D__LINUX_SYSTEM__)

target_compile_definitions(Infrastructure_Core PRIVATE INFRASTRUCTURE_CORE_LIBRARY)
