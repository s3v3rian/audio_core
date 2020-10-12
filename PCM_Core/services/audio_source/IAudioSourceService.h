#ifndef PCM_CORE_SERVICES_AUDIO_SOURCESERVICE_IAUDIOSOURCESERVICE_H
#define PCM_CORE_SERVICES_AUDIO_SOURCESERVICE_IAUDIOSOURCESERVICE_H

#include "components/IService.h"
#include "common/PcmCoreTypes.h"
#include "common/objects/CVoiceFrameElement.h"

class IAudioSourceService : public IService {

    public:

        IAudioSourceService(int32_t n32Id, const std::string &Name);
        virtual ~IAudioSourceService();

        // Abstract functions.
        virtual bool Process(CVoiceFrameElement *pcFrame) = 0;

        // Overriden functions.
        virtual bool Init(const std::string &File) noexcept override;

        // Class functions.
        virtual SAudioSourceConfigurationParameters &GetParameters() noexcept;

    private:

        // Configuration.
        SAudioSourceConfigurationParameters m_sParameters;
};

#endif // IAUDIOSOURCESERVICE_H
