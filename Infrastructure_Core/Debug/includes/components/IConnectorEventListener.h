#ifndef INFRASTRUCTURE_CORE_COMPONENTS_ICONNECTOREVENTLISTENER_H
#define INFRASTRUCTURE_CORE_COMPONENTS_ICONNECTOREVENTLISTENER_H

#include "components/IEventListener.h"

class IConnectorEventListener : public IEventListener {

    public:

        IConnectorEventListener();
        virtual ~IConnectorEventListener();

        virtual void OnIncomingData(char *pchBuffer, uint32_t un32BufferSize, void *pvSource) = 0;
};

#endif // ICONNECTOREVENTLISTENER_H
