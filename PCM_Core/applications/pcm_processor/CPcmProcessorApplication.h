#ifndef PCM_CORE_APPLICATIONS_PCM_PROCESSOR_CPCMPROCESSORAPPLICATION_H
#define PCM_CORE_APPLICATIONS_PCM_PROCESSOR_CPCMPROCESSORAPPLICATION_H

#include "common/IPcmCore.h"

class CPcmProcessorApplication : public IPcmCore {

    public:

        CPcmProcessorApplication(int32_t n32Id, const std::string &Name);

        // -------------------------------------------------
        // -------------- Component Functions --------------
        // -------------------------------------------------
        bool Start() noexcept override;
        bool Stop() noexcept override;
        bool Init(const std::string &File) noexcept override;
        void AddMate(IComponent *pcMate) noexcept override;

        // -------------------------------------------------
        // --------------- PCM Core Functions --------------
        // -------------------------------------------------
        bool OnPlaybackServices(CVoiceFrameElement *pcFrame, SPcmAudioDetails *psDetails) noexcept override;
        bool OnPlaybackServices(CVoiceFrameElement *pcFrame) noexcept override;

        void RegisterPcmCaptureListener(IEventListener *pcListener) noexcept override;
        bool SetTransformProperty(const std::string &Name, double dPropertyValue) noexcept override;
        bool GetTransformProperty(const std::string &Name, double &rdPropertyValue) noexcept override;
};

#endif // CPCMPROCESSORAPPLICATION_H
