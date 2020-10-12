#ifndef INFRASTRUCTURE_CORE_COMMON_IPCMCORE_H
#define INFRASTRUCTURE_CORE_COMMON_IPCMCORE_H

#include "components/IApplication.h"
#include "components/IEventListener.h"
#include "common/objects/CVoiceFrameElement.h"

enum class EN_PcmCoreEvent {

    NEW_SOURCE_AUDIO		= 128,
    SOURCE_FATAL_ERROR,
};

struct SPcmAudioDetails {

    int32_t m_n32SampleRate;
    int32_t m_n32PeriodSize;
    int32_t m_n32TransformModuleId;

    SPcmAudioDetails() {

        m_n32SampleRate = 0;
        m_n32PeriodSize = 0;
        m_n32TransformModuleId = 0;
    }
};

class IPcmCore : public IApplication {

    public:

        IPcmCore(int32_t n32Id, const std::string &Name);
        virtual ~IPcmCore();

        virtual bool OnPlaybackServices(CVoiceFrameElement *pcFrame, SPcmAudioDetails *psDetails) = 0;
        virtual bool OnPlaybackServices(CVoiceFrameElement *pcFrame) = 0;

        virtual void RegisterPcmCaptureListener(IEventListener *pcListener) = 0;
        virtual bool SetTransformProperty(const std::string &Name, double dPropertyValue) = 0;
        virtual bool GetTransformProperty(const std::string &Name, double &rdPropertyValue) = 0;
};

#endif // IPCMCORE_H
