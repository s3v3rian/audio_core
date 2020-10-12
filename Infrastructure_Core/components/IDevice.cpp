#include "IDevice.h"

#include "components/IConnector.h"

IDevice::IDevice(int32_t n32Id, const std::string &Name) : IComponent(n32Id, Name) {

    // No implementation.
}

IDevice::~IDevice() {

    // No implementation.
}

void IDevice::AddMate(IComponent *pcMate) noexcept {

    if(RSDK_CONNECTOR_COMPONENT_TYPE == pcMate->Type()) {

        // This is ok because a connector is a boundary component.
        m_pcSender = dynamic_cast<IEventSender*>(pcMate);

    } else {

        // TODO Fix this it can cause a runtime error.
        m_pcListeners->Add(dynamic_cast<IEventListener*>(pcMate));
    }
}

void IDevice::NotifyListeners(int32_t n32EventId, char *pchBuffer, uint32_t un32Size) noexcept {

    for(uint32_t un32Index = 0; un32Index < m_pcListeners->Size(); un32Index++) {

        m_pcListeners->Get(un32Index)->OnEvent(ID(), n32EventId, pchBuffer, un32Size);
    }
}

int32_t IDevice::NotifySender(char *pchBuffer, uint32_t un32BufferSize, void *pvSource) noexcept {

    return m_pcSender->Send(0, pchBuffer, un32BufferSize, pvSource);
}
