#ifndef INFRASTRUCTURE_CORE_COMPONENTS_IBOUNDARY_H
#define INFRASTRUCTURE_CORE_COMPONENTS_IBOUNDARY_H

#include <cstdint>

class IBoundary {

    public:

        IBoundary();
        virtual ~IBoundary();

        virtual void Send(char *pchBuffer, uint32_t un32BufferSize, void *pvSource) = 0;
        virtual void Receive() = 0;
};

#endif // IBOUNDARY_H
