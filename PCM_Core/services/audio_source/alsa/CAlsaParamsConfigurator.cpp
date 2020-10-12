#include "CAlsaParamsConfigurator.h"

#include "logger/CLogger.h"

CAlsaParamsConfigurator::CAlsaParamsConfigurator(int32_t n32LoggerId) {

    m_n32LoggerId = n32LoggerId;

    m_pHwParams = nullptr;
    m_pSwParams = nullptr;
}

CAlsaParamsConfigurator::~CAlsaParamsConfigurator() {

    if(nullptr != m_pHwParams) {

        snd_pcm_hw_params_free(m_pHwParams);
    }

    if(nullptr != m_pSwParams) {

        snd_pcm_sw_params_free(m_pSwParams);
    }
}

int CAlsaParamsConfigurator::Init(snd_pcm_t *pHandle, SAudioSourceConfigurationParameters &rsParams) noexcept {

    int nErrorCode = 0;

    if(0 > (nErrorCode = snd_pcm_hw_params_malloc(&m_pHwParams))) {

        ERR(m_n32LoggerId, "Cannot allocate hardware parameter structure");

    } else if(0 > (nErrorCode = snd_pcm_hw_params_any(pHandle, m_pHwParams))) {

        ERR(m_n32LoggerId, "Cannot initialize hardware parameter structure");

    } else if(0 > (nErrorCode = snd_pcm_hw_params_set_access(pHandle, m_pHwParams, SND_PCM_ACCESS_RW_INTERLEAVED))) {

        ERR(m_n32LoggerId, "Cannot set access type");

    } else if(0 >  (nErrorCode = snd_pcm_hw_params_set_format(pHandle, m_pHwParams, SND_PCM_FORMAT_S16_LE))) {

        ERR(m_n32LoggerId, "Cannot set sample format");

    } else if(0 > (nErrorCode = snd_pcm_hw_params_set_rate_near(pHandle, m_pHwParams, &rsParams.m_un32FrameSampleRateInHz, 0))) {

        ERR(m_n32LoggerId, "Cannot set sample rate");

    } else if(0 > (nErrorCode = snd_pcm_hw_params_set_channels(pHandle, m_pHwParams, rsParams.m_un32NumberOfChannels))) {

        ERR(m_n32LoggerId, "Cannot set channel count");

    } else if(0 > (nErrorCode = snd_pcm_hw_params(pHandle, m_pHwParams))) {

        ERR(m_n32LoggerId, "Cannot set parameters");

    } else if(0 > (nErrorCode = snd_pcm_sw_params_malloc (&m_pSwParams))) {

        ERR(m_n32LoggerId, "Cannot allocate software parameters structure");

    } else if(0 > (nErrorCode = snd_pcm_sw_params_current(pHandle, m_pSwParams))) {

        ERR(m_n32LoggerId, "Cannot initialize software parameters structure");

    } else if(0 > (nErrorCode = snd_pcm_sw_params_set_avail_min(pHandle, m_pSwParams, 4096))) {

        ERR(m_n32LoggerId, "Cannot set minimum available count");

    } else if(0 > (nErrorCode = snd_pcm_sw_params_set_start_threshold(pHandle, m_pSwParams, 0U))) {

        ERR(m_n32LoggerId, "Cannot set start mode");

    } else if(0 > (nErrorCode = snd_pcm_sw_params(pHandle, m_pSwParams))) {

        ERR(m_n32LoggerId, "Cannot set software parameters");
    }

    return nErrorCode;
}

snd_pcm_hw_params_t *CAlsaParamsConfigurator::GetHwParams() noexcept {

    return m_pHwParams;
}

snd_pcm_sw_params_t *CAlsaParamsConfigurator::GetSwParams() noexcept {

    return m_pSwParams;
}
