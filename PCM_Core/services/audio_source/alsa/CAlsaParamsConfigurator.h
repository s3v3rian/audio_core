#ifndef PCM_CORE_SERVICES_AUDIO_SOURCE_ALSA_CALSAPARAMSCONFIGURATOR_H
#define PCM_CORE_SERVICES_AUDIO_SOURCE_ALSA_CALSAPARAMSCONFIGURATOR_H

#include <alsa/asoundlib.h>
#include "common/PcmCoreTypes.h"

class CAlsaParamsConfigurator {

    public:

        CAlsaParamsConfigurator(int32_t n32LoggerId);
        virtual ~CAlsaParamsConfigurator();

        int32_t Init(snd_pcm_t *pHandle, SAudioSourceConfigurationParameters &rsParams) noexcept;

        snd_pcm_hw_params_t *GetHwParams() noexcept;
        snd_pcm_sw_params_t *GetSwParams() noexcept;

    private:

        // Handle parameters.
        snd_pcm_hw_params_t *m_pHwParams;
        snd_pcm_sw_params_t *m_pSwParams;

        int32_t m_n32LoggerId;
};

#endif // CALSAPARAMSCONFIGURATOR_H
