#ifndef PCM_CORE_APPLICATIONS_PCM_PROCESSOR_CAUDIOSOURCEPROCESSOR_H
#define PCM_CORE_APPLICATIONS_PCM_PROCESSOR_CAUDIOSOURCEPROCESSOR_H

#include "task/ITask.h"
#include "services/audio_source/IAudioSourceService.h"

class CAudioSourceProcessor : public ITask {

    public:

        CAudioSourceProcessor();

        void Do() noexcept override;

        void SetAudioSource(IAudioSourceService *pcAudioSource) noexcept;

    private:

        IAudioSourceService *m_pcAudioSource;
};

#endif // CAUDIOSOURCEPROCESSOR_H
