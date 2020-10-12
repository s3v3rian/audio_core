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

    common/IControlPlane.cpp
    common/IRtpCore.cpp
    common/IPcmCore.cpp
    common/objects/CVoiceFrameElement.cpp

    components/ILifeCycle.cpp
    components/IComponent.cpp
    components/IDevice.cpp
    components/IService.cpp
    components/IApplication.cpp
    components/IEventSender.cpp
    components/IFactory.cpp
    components/IEventListener.cpp
    components/IConnectorEventListener.cpp
    components/IConnector.cpp

    task/ITask.cpp
    task/IScheduledTask.cpp

    pool/IPool.cpp
    pool/IPoolElementFactory.cpp
    pool/IPoolElement.cpp
    pool/ring_buffer/CRingBuffer.cpp
    pool/ring_buffer/CRingBufferSingleProducerStrategy.cpp
    pool/ring_buffer/CRingBufferMultipleProducerStrategy.cpp

    disruptor/CDisruptorElementFactory.cpp
    disruptor/CDisruptorConsumerBlockingStrategy.cpp
    disruptor/CDeepDisruptorElement.cpp
    disruptor/CDisruptorElement.cpp
    disruptor/CDisruptor.cpp
    disruptor/IDisruptorConsumerStrategy.cpp

    logger/CLogger.cpp

    time/CStopWatch.cpp

    configuration/XML/tinyxml2.cpp
    configuration/XML/CConfigurationXmlParser.cpp
    configuration/IConfigurationParser.cpp
    configuration/CConfiguration.cpp

    components/ILifeCycle.h
    components/IComponent.h
    components/IDevice.h
    components/IService.h
    components/IApplication.h
    components/IEventSender.h
    components/IFactory.h
    components/IEventListener.h
    components/IConnectorEventListener.h
    components/IConnector.h

    task/ITask.h
    task/IScheduledTask.h

    queue/IQueue.h
    queue/CSPSCLockFreeQueue.h
    queue/CMPSCLockFreeQueue.h
    queue/CBlockingQueue.h

    list/CArrayVector.h
    list/IList.h

    map/IMap.h

    pool/IPool.h
    pool/IPoolElementFactory.h
    pool/IPoolElement.h
    pool/ring_buffer/CRingBuffer.h
    pool/ring_buffer/CRingBufferSingleProducerStrategy.h
    pool/ring_buffer/CRingBufferMultipleProducerStrategy.h
    pool/ring_buffer/IRingBufferProducerStrategy.h

    disruptor/CDisruptorElementFactory.h
    disruptor/CDisruptorConsumerBlockingStrategy.h
    disruptor/CDeepDisruptorElement.h
    disruptor/CDisruptorElement.h
    disruptor/CDisruptor.h
    disruptor/IDisruptorConsumerStrategy.h
    disruptor/IDisruptorConsumer.h

    logger/CLogger.h

    time/CStopWatch.h

    configuration/XML/tinyxml2.h
    configuration/XML/CConfigurationXmlParser.h
    configuration/IConfigurationParser.h
    configuration/CConfiguration.h

    common/CommonDefinitions.h
    common/IControlPlane.h
    common/IPcmCore.h
    common/IRtpCore.h
    common/objects/CVoiceFrameElement.h
)

add_definitions(-D__LINUX_SYSTEM__)

target_compile_definitions(Infrastructure_Core PRIVATE INFRASTRUCTURE_CORE_LIBRARY)
