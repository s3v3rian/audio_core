#ifndef PCM_CORE_SERVICES_AUDIO_SOURCE_ALSA_CALSACAPTURESERVICE_H
#define PCM_CORE_SERVICES_AUDIO_SOURCE_ALSA_CALSACAPTURESERVICE_H

#include "services/audio_source/IAudioSourceService.h"
#include "services/audio_source/alsa/CAlsaParamsConfigurator.h"

class CAlsaCaptureService : public IAudioSourceService {

    public:

        CAlsaCaptureService(int32_t n32Id, const std::string &Name);
        virtual ~CAlsaCaptureService();

        bool Start() noexcept override;
        bool Stop() noexcept override;
        bool Init(const std::string &File) noexcept override;

        bool Process(CVoiceFrameElement *pcFrame) noexcept override;

    private:

        // Configuration.
        CAlsaParamsConfigurator *m_pcConfigurator;

        // Device Handle.
        snd_pcm_t *m_pHandle;
};

#endif // CALSACAPTURESERVICE_H
