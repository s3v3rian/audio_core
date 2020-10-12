#ifndef INFRASTRUCTURE_CORE_POOL_RING_BUFFER_CRINGBUFFERSINGLEPRODUCERSTRATEGY_H
#define INFRASTRUCTURE_CORE_POOL_RING_BUFFER_CRINGBUFFERSINGLEPRODUCERSTRATEGY_H

#include "pool/ring_buffer/IRingBufferProducerStrategy.h"

class CRingBufferSingleProducerStrategy : public IRingBufferProducerStrategy {

    public:

        CRingBufferSingleProducerStrategy();
        virtual ~CRingBufferSingleProducerStrategy();

        uint32_t Claim() noexcept override;

    private:

        uint32_t m_un32AllocateIndex;
};

#endif // CRINGBUFFERSINGLEPRODUCERSTRATEGY_H
