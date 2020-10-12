#ifndef PCM_CORE_APPLICATIONS_PCM_TRANSFORM_CPCMTRANSFORMAPPLICATION_H
#define PCM_CORE_APPLICATIONS_PCM_TRANSFORM_CPCMTRANSFORMAPPLICATION_H

#include "components/IApplication.h"
#include "list/IList.h"
#include "services/filter_service/IFilterService.h"

class CPcmTransformApplication : public IApplication {

    public:

        CPcmTransformApplication(int32_t n32Id, const std::string &Name);
        virtual ~CPcmTransformApplication();

        // -------------------------------------------------
        // -------------- Component Functions --------------
        // -------------------------------------------------
        bool Start() noexcept override;
        bool Stop() noexcept override;
        bool Init(const std::string &File) noexcept override;
        void AddMate(IComponent *pcMate) noexcept override;

        // -------------------------------------------------
        // ------------ PCM Transform Functions ------------
        // -------------------------------------------------
        bool Filter(CVoiceFrameElement *pcInFrame, CVoiceFrameElement *pcOutFrame) noexcept;
        bool Filter(CVoiceFrameElement *pcFrame) noexcept;

        bool SetProperty(std::string &Name, double dValue) noexcept;
        bool GetProperty(std::string &Name, double &rdValue) noexcept;

    private:

        IList<IFilterService*> *m_pcFilters;
};

#endif // CPCMTRANSFORMAPPLICATION_H
