#ifndef PCM_CORE_FACTORY_CPCMCOREFACTORY_H
#define PCM_CORE_FACTORY_CPCMCOREFACTORY_H

#include "components/IFactory.h"

class CPcmCoreFactory : public IFactory {

    public:

        CPcmCoreFactory(int32_t n32Id, const std::string &Name);
        virtual ~CPcmCoreFactory();
};

#endif // CPCMCOREFACTORY_H
