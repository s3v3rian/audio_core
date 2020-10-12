#ifndef PCM_CORE_COMMON_PCMCORETYPES_H
#define PCM_CORE_COMMON_PCMCORETYPES_H

#include <string>
#include "common/PcmCoreDefinitions.h"

struct SAudioSourceConfigurationParameters {

    std::string m_SourceLocator;
    uint32_t m_un32PeriodSizeInUs;
    uint32_t m_un32FrameSampleRateInHz;
    bool m_bIsInterleaved;
    uint32_t m_un32NumberOfChannels;

    SAudioSourceConfigurationParameters() {

        m_SourceLocator = "";
        m_un32PeriodSizeInUs = 0;
        m_un32FrameSampleRateInHz = 0;
        m_bIsInterleaved = false;
        m_un32NumberOfChannels = 0;
    }
};

#endif // PCMCORETYPES_H
