#ifndef INFRASTRUCTURE_CORE_COMPONENTS_IEVENTLISTENER_H
#define INFRASTRUCTURE_CORE_COMPONENTS_IEVENTLISTENER_H

#include <cstdint>

class IEventListener {

    public:

        IEventListener();
        virtual ~IEventListener();

        virtual void OnEvent(int32_t n32SourceId, int32_t n32EventId, char *pchBuffer, uint32_t un32BufferSize) noexcept;
};

#endif // IEVENTLISTENER_H
