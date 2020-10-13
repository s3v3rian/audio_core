#ifndef INFRASTRUCTURE_CORE_COMPONENTS_IDEVICE_H
#define INFRASTRUCTURE_CORE_COMPONENTS_IDEVICE_H

#include "common/CommonDefinitions.h"
#include "components/IComponent.h"
#include "components/IEventSender.h"
#include "components/IConnectorEventListener.h"
#include "list/IList.h"

class IDevice : public IComponent, public IEventSender, public IConnectorEventListener {

    public:

        IDevice(int32_t n32Id, const std::string &Name);
        virtual ~IDevice();

        virtual void AddMate(IComponent *pcMate) noexcept override;

        virtual const char *Type() noexcept override { return RSDK_DEVICE_COMPONENT_TYPE; }

    protected:

        virtual void NotifyListeners(int32_t n32EventId, char *pchBuffer, uint32_t un32Size) noexcept;
        virtual int32_t NotifySender(char *pchBuffer, uint32_t un32BufferSize, void *pvSource) noexcept;

    private:

        IList<IEventListener*> *m_pcListeners;
        IEventSender *m_pcSender;
};

#endif // IDEVICE_H
