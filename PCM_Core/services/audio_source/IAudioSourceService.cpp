#include "IAudioSourceService.h"

#include "configuration/CConfiguration.h"

IAudioSourceService::IAudioSourceService(int32_t n32Id, const std::string &Name) : IService(n32Id, Name) {

    // No implementation.
}

IAudioSourceService::~IAudioSourceService() {

    // No implementation.
}

bool IAudioSourceService::Init(const std::string &File) noexcept {

    CConfiguration *pcConfiguration = CConfiguration::GetInstance(File);

    if(nullptr == pcConfiguration) {

        return false;
    }

    // Parse parameters.
    bool bResult = true;
    bResult = bResult && pcConfiguration->Get("audio_source", "source_locator", m_sParameters.m_SourceLocator);
    bResult = bResult && pcConfiguration->Get("audio_source", "period_size_in_us", m_sParameters.m_un32PeriodSizeInUs);
    bResult = bResult && pcConfiguration->Get("audio_source", "frame_sample_rate_in_hz", m_sParameters.m_un32FrameSampleRateInHz);
    bResult = bResult && pcConfiguration->Get("audio_source", "is_interleaved", m_sParameters.m_bIsInterleaved);
    return bResult;
}

SAudioSourceConfigurationParameters &IAudioSourceService::GetParameters() noexcept {

    return m_sParameters;
}
