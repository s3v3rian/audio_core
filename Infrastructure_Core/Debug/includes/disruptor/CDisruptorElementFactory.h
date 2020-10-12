#ifndef INFRASTRUCTURE_CORE_DISRUPTOR_CDISRUPTORELEMENTFACTORY_H
#define INFRASTRUCTURE_CORE_DISRUPTOR_CDISRUPTORELEMENTFACTORY_H

#include "pool/IPoolElementFactory.h"

class CDisruptorElementFactory : public IPoolElementFactory {

    public:

        CDisruptorElementFactory(uint32_t un32ElementSize);
        virtual ~CDisruptorElementFactory();

        IPoolElement * Create() noexcept override;

    private:

        uint32_t m_un32ElementSize;
};

#endif // CDISRUPTORELEMENTFACTORY_H
