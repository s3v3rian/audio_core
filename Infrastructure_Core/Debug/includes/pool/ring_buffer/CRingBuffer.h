#ifndef INFRASTRUCTURE_CORE_POOL_RING_BUFFER_CRINGBUFFER_H
#define INFRASTRUCTURE_CORE_POOL_RING_BUFFER_CRINGBUFFER_H

#include "pool/IPool.h"
#include "pool/IPoolElementFactory.h"
#include "pool/ring_buffer/IRingBufferProducerStrategy.h"

class CRingBuffer : public IPool {

    public:

        CRingBuffer(bool bIsProducerSingleThreaded);
        virtual ~CRingBuffer();

        bool Init(uint32_t un32Capacity, IPoolElementFactory *pcFactory) noexcept override;

        IPoolElement* Allocate() noexcept override;
        bool Deallocate(IPoolElement *pcElement) noexcept override;
        uint32_t Size() noexcept override;
        bool IsEmpty() noexcept override;

    private:

        IRingBufferProducerStrategy *m_pcProducerStrategy;

        uint32_t m_un32Capacity;
        IPoolElement **m_p2cElementsArray;
};

#endif // CRINGBUFFER_H
