#ifndef INFRASTRUCTURE_CORE_COMPONENTS_ILISTENER_H
#define INFRASTRUCTURE_CORE_COMPONENTS_ILISTENER_H

#include <cstdint>

class IListener {

    public:

        IListener();
        virtual ~IListener();

        virtual void Accept(int32_t n32SourceId, int32_t n32EventId, char *pchBuffer, uint32_t un32BufferSize) noexcept;
};

#endif // ILISTENER_H
