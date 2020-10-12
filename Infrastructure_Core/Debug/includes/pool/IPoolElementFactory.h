#ifndef INFRASTRUCTURE_CORE_POOL_IPOOLELEMENTFACTORY_H
#define INFRASTRUCTURE_CORE_POOL_IPOOLELEMENTFACTORY_H

#include "pool/IPoolElement.h"

class IPoolElementFactory {

    public:

        IPoolElementFactory();
        virtual ~IPoolElementFactory();

        virtual IPoolElement *Create() = 0;
};

#endif // IPOOLELEMENTFACTORY_H
