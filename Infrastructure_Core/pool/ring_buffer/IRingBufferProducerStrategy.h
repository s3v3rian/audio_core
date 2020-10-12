#ifndef INFRASTRUCTURE_CORE_POOL_RING_BUFFER_IRINGBUFFERPRODUCERSTRATEGY_H
#define INFRASTRUCTURE_CORE_POOL_RING_BUFFER_IRINGBUFFERPRODUCERSTRATEGY_H

#include <cstdint>

class IRingBufferProducerStrategy {

    public:

        virtual ~IRingBufferProducerStrategy() { }

        virtual uint32_t Claim() = 0;
};

#endif // IRINGBUFFERPRODUCERSTRATEGY_H
