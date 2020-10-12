#ifndef INFRASTRUCTURE_CORE_POOL_IPOOL_H
#define INFRASTRUCTURE_CORE_POOL_IPOOL_H

#include "pool/IPoolElementFactory.h"

class IPool {

    public:

        IPool();
        virtual ~IPool();

        virtual bool Init(uint32_t un32Capacity, IPoolElementFactory *pcFactory) = 0;

        virtual IPoolElement *Allocate() = 0;
        virtual bool Deallocate(IPoolElement *pcElement) = 0;
        virtual uint32_t Size() = 0;
        virtual bool IsEmpty() = 0;
};

#endif // IPOOL_H
