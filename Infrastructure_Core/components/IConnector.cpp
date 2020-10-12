#include "IConnector.h"

#include <cstring>
#include "configuration/CConfiguration.h"
#include "pool/ring_buffer/CRingBuffer.h"

CConnectorBufferElementFactory::CConnectorBufferElementFactory(uint32_t un32Capacity) {

    m_un32Capacity = un32Capacity;
}

IPoolElement *CConnectorBufferElementFactory::Create() noexcept {

    return new CConnectorBufferElement(m_un32Capacity);
}

CConnectorBufferElement::CConnectorBufferElement(uint32_t un32Capacity) {

    m_un32Capacity = un32Capacity;
    m_pBuffer = new char[un32Capacity];
    m_un32Size = 0;
}

CConnectorBufferElement::~CConnectorBufferElement() {

    delete [] m_pBuffer;
}

void CConnectorBufferElement::Reset() noexcept {

    m_un32Size = 0;
    m_pvSource = nullptr;
}

void CConnectorBufferElement::SetSize(uint32_t un32Size) noexcept {

    m_un32Size = un32Size;
}

char *CConnectorBufferElement::GetBuffer() noexcept {

    return m_pBuffer;
}

uint32_t CConnectorBufferElement::GetSize() noexcept {

    return m_un32Size;
}

uint32_t CConnectorBufferElement::GetCapacity() noexcept {

    return m_un32Capacity;
}

void *CConnectorBufferElement::GetSource() noexcept {

    return m_pvSource;
}
IConnector::IConnector(int32_t n32Id, const std::string &Name) : IComponent(n32Id, Name), ITask(Name) {

    memset(&m_sParameters, 0, sizeof(m_sParameters));
    m_pcEventListener = nullptr;
    m_pcBufferPool = nullptr;
}

IConnector::~IConnector() {

    if(nullptr != m_pcBufferPool) {

        delete m_pcBufferPool;
    }
}

bool IConnector::Start() noexcept {

    bool bResult = true;
    bResult = bResult && ITask::Start();
    Connect();
    return bResult;
}

bool IConnector::Stop() noexcept {

    bool bResult = true;
    Disconnect();
    bResult = bResult && ITask::Stop();
    return bResult;
}

bool IConnector::Init(const std::string &File) noexcept {

    if(nullptr == m_pcEventListener) {

        return false;
    }

    CConfiguration *pcConfiguration = CConfiguration::GetInstance(File);

    if(nullptr == pcConfiguration) {

        return false;
    }

    bool bResult = false;
    uint32_t un32NumberOfConnectors = pcConfiguration->GetNumberOfKeys("connector");

    for(uint32_t un32Index = 0; un32Index < un32NumberOfConnectors; un32Index++) {

        CConfiguration *pcSubConfiguration = pcConfiguration->GetSubConfiguration("connector[" + std::to_string(un32Index) + "]");

        std::string ConnectorName;
        pcSubConfiguration->Get("name", "value", ConnectorName);

        if(Name() == ConnectorName) {

            bResult = true;
            bResult = bResult && pcSubConfiguration->Get("source", "value", GetParameters().m_Source);
            bResult = bResult && pcSubConfiguration->Get("destination", "value", GetParameters().m_Destination);
            bResult = bResult && pcSubConfiguration->Get("ring_buffer_element_size", "value", GetParameters().m_un32RingBufferElementSize);
            bResult = bResult && pcSubConfiguration->Get("ring_buffer_size", "value", GetParameters().m_un32RingBufferSize);
            break;
        }

        delete pcSubConfiguration;
    }

    if(true == bResult) {

        CRingBuffer *pcRingBuffer = new CRingBuffer(true);
        bResult = bResult && m_pcBufferPool->Init(GetParameters().m_un32RingBufferSize, new CConnectorBufferElementFactory(GetParameters().m_un32RingBufferElementSize));
        m_pcBufferPool = pcRingBuffer;
    }

    return bResult;
}

void IConnector::AddMate(IComponent *pcMate) noexcept {

    if(RSDK_DEVICE_COMPONENT_TYPE == pcMate->Type()) {

        // This is ok because a device is an event listener.
        m_pcEventListener = dynamic_cast<IConnectorEventListener*>(pcMate);
    }
}

void IConnector::Do() noexcept {

    CConnectorBufferElement *pcElement = nullptr;

    while(true) {

        pcElement = static_cast<CConnectorBufferElement*>(m_pcBufferPool->Allocate());

        if(nullptr == pcElement) {

            continue;
        }

        // Call concrete impl.
        Receive(pcElement);

        // Notify listener of received data.
        GetListener()->OnIncomingData(pcElement->GetBuffer(), pcElement->GetSize(), pcElement->GetSource());

        pcElement->Release();
    }
}

SConnectorParameters &IConnector::GetParameters() noexcept {

    return m_sParameters;
}

IConnectorEventListener *IConnector::GetListener() noexcept {

    return m_pcEventListener;
}
