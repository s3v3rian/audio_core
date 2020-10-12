#ifndef PCM_CORE_SERVICS_FILTER_SERVICE_IFILTERSERVICE_H
#define PCM_CORE_SERVICS_FILTER_SERVICE_IFILTERSERVICE_H

#include <string>
#include "components/IService.h"
#include "common/objects/CVoiceFrameElement.h"

class IFilterService : public IService {

    public:

        IFilterService(int32_t n32Id, const std::string &Name);
        virtual ~IFilterService();

        virtual bool Filter(CVoiceFrameElement *pcInFrame, CVoiceFrameElement *pcOutFrame) = 0;
        virtual bool Filter(CVoiceFrameElement *pcFrame) = 0;
        virtual bool SetProperty(std::string &Name, double dValue) = 0;
        virtual bool GetProperty(std::string &Name, double &rdValue) = 0;
};

#endif // IFILTERSERVICE_H
