#ifndef PCM_CORE_SERVICES_AUDIO_SOURCE_ALSA_CALSAPLAYBACKSERVICE_H
#define PCM_CORE_SERVICES_AUDIO_SOURCE_ALSA_CALSAPLAYBACKSERVICE_H

#include "services/audio_source/IAudioSourceService.h"
#include "services/audio_source/alsa/CAlsaParamsConfigurator.h"

class CAlsaPlaybackService : public IAudioSourceService {

    public:

        CAlsaPlaybackService(int32_t n32Id, const std::string &Name);
        virtual ~CAlsaPlaybackService();

        bool Start() noexcept override;
        bool Stop() noexcept override;

        bool Process(CVoiceFrameElement *pcFrame) noexcept override;

    private:

        // Configuration.
        CAlsaParamsConfigurator *m_pcConfigurator;

        // Device Handle.
        snd_pcm_t *m_pHandle;
};

#endif // CALSAPLAYBACKSERVICE_H
