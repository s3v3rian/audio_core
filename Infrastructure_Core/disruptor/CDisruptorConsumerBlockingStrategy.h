#ifndef INFRASTRUCTURE_CORE_DISRUPTOR_CDISRUPTORCONSUMERBLOCKINGSTRATEGY_H
#define INFRASTRUCTURE_CORE_DISRUPTOR_CDISRUPTORCONSUMERBLOCKINGSTRATEGY_H

#include "disruptor/IDisruptorConsumerStrategy.h"

class CDisruptorConsumerBlockingStrategy : public IDisruptorConsumerStrategy {

    public:

        CDisruptorConsumerBlockingStrategy(uint32_t un32Capacity);
        virtual ~CDisruptorConsumerBlockingStrategy();

        void Do() noexcept override;

        bool HandleElement(CDisruptorElement *pcElement) noexcept override;
};

#endif // CDISRUPTORCONSUMERBLOCKINGSTRATEGY_H
