#ifndef INFRASTRUCTURE_CORE_COMPONENTS_IEVENTSENDER_H
#define INFRASTRUCTURE_CORE_COMPONENTS_IEVENTSENDER_H

#include <cstdint>

class IEventSender {

    public:

        IEventSender();
        virtual ~IEventSender();

        virtual int32_t Send(int32_t n32EventId, char *pchBuffer, uint32_t un32BufferSize, void *pvSource) = 0;
};

#endif // IEVENTSENDER_H
