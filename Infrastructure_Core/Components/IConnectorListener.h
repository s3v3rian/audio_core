#ifndef INFRASTRUCTURE_CORE_COMPONENTS_ICONNECTORLISTENER_H
#define INFRASTRUCTURE_CORE_COMPONENTS_ICONNECTORLISTENER_H

#include "Components/IListener.h"

class CConnectorParameters {

    // TODO Fill in...
};

class IConnectorListener : public IListener {

    public:

        IConnectorListener();
        virtual ~IConnectorListener();

        virtual void OnConnected(CConnectorParameters *pcParams) = 0;
        virtual void OnDisconnected(CConnectorParameters *pcParams) = 0;
};

#endif // ICONNECTORLISTENER_H
