#ifndef PCM_CORE_COMMON_PCMCOREDEFINITIONS_H
#define PCM_CORE_COMMON_PCMCOREDEFINITIONS_H

#include "common/CommonDefinitions.h"

enum class EN_PcmCoreComponent {

    // ------------------------------------------------
    // ---------------- Applications ------------------
    // ------------------------------------------------

    PCM_PROCESSOR_APPLICATION,
    PCM_TRANSFORM_APPLICATION,

    // ------------------------------------------------
    // ------------------ Services --------------------
    // ------------------------------------------------

    AUDIO_SOURCE_SERVICE,
    FILTER_SERVICE,

    // ------------------------------------------------
    // ------------------ Devices --------------------
    // ------------------------------------------------

    RECORDER_DEVICE,
};

enum class EN_PcmCoreEvent {

    NEW_AUDIO_CAPTURE_FRAME				= PCM_CORE_EVENTS_ID_,
    NEW_AUDIO_PLAYBACK_FRAME,
};

constexpr uint32_t PCM_CORE_MAX_NUMBER_OF_FILTERS_IN_TRANSFORM_PATH					= 10;

#endif // PCMCOREDEFINITIONS_H
