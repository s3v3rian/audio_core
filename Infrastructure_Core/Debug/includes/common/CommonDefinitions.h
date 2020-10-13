#ifndef INFRASTRUCTURE_CORE_COMMON_COMMONDEFINITIONS_H
#define INFRASTRUCTURE_CORE_COMMON_COMMONDEFINITIONS_H

#include <cstdint>

constexpr char RSDK_COMPONENT_TYPE[]						= "RsdkComponent";
constexpr char RSDK_FACTORY_COMPONENT_TYPE[]				= "RsdkFactory";
constexpr char RSDK_CONNECTOR_COMPONENT_TYPE[]				= "RsdkConnector";
constexpr char RSDK_APPLICATION_COMPONENT_TYPE[]			= "RsdkApplication";
constexpr char RSDK_SERVICE_COMPONENT_TYPE[]				= "RsdkService";
constexpr char RSDK_DEVICE_COMPONENT_TYPE[]					= "RsdkDevice";

constexpr uint32_t PCM_CORE_EVENTS_ID_						= 128;
constexpr uint32_t RTP_CORE_EVENTS_ID_						= 256;
constexpr uint32_t CONTROL_PLANE_EVENTS_ID_					= 384;
constexpr uint32_t CONTROLLER_EVENTS_ID						= 512;

#endif // COMMONDEFINITIONS_H
