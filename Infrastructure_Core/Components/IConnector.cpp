#include "IConnector.h"

IConnector::IConnector(int32_t n32Id, const std::string &Name) : IComponent(n32Id, Name) {

    m_pcListener = nullptr;
}

IConnector::~IConnector() {

    // No implementation.
}

void IConnector::AddMate(IComponent *pcMate) noexcept {

    if(nullptr != pcMate) {

        m_pcListener = dynamic_cast<IConnectorListener*>(pcMate);
    }
}

void IConnector::Do() noexcept {

    while(true) {

        Receive();
    }
}

IConnectorListener *IConnector::GetListener() noexcept {

    return m_pcListener;
}
