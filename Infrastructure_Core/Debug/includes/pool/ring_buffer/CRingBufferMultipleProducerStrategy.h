#ifndef INFRASTRUCTURE_CORE_POOL_RING_BUFFER_CRINGBUFFERMULTIPLEPRODUCERSTRATEGY_H
#define INFRASTRUCTURE_CORE_POOL_RING_BUFFER_CRINGBUFFERMULTIPLEPRODUCERSTRATEGY_H

#include <atomic>
#include "pool/ring_buffer/IRingBufferProducerStrategy.h"

class CRingBufferMultipleProducerStrategy : public IRingBufferProducerStrategy {

    public:

        CRingBufferMultipleProducerStrategy();
        virtual ~CRingBufferMultipleProducerStrategy();

        uint32_t Claim() noexcept override;

    private:

        std::atomic<uint32_t> m_un32aAllocateIndex;
};

#endif // CRINGBUFFERMULTIPLEPRODUCERSTRATEGY_H
