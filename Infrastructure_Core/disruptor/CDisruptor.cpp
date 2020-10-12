#include "CDisruptor.h"

#include "configuration/CConfiguration.h"
#include "pool/ring_buffer/CRingBuffer.h"
#include "disruptor/CDisruptorElementFactory.h"
#include "disruptor/CDisruptorConsumerBlockingStrategy.h"

CDisruptor::CDisruptor() {

    m_pcPool = nullptr;
    m_pcConsumerStrategy = nullptr;
}

CDisruptor::~CDisruptor() {

    if(nullptr != m_pcPool) {

        delete m_pcPool;
    }

    if(nullptr != m_pcConsumerStrategy) {

        delete m_pcConsumerStrategy;
    }
}

bool CDisruptor::Init(const std::string &File) noexcept {

    CConfiguration *pcConfiguration = CConfiguration::GetInstance(File);

    if(nullptr == pcConfiguration) {

        return false;
    }

    bool bResult = true;
    uint32_t un32Capacity = 0;
    uint32_t un32Size = 0;
    bResult = bResult && pcConfiguration->Get("disruptor", "ring_buffer_element_size", un32Size);
    bResult = bResult && pcConfiguration->Get("disruptor", "ring_buffer_element_capacity", un32Capacity);

    bool bIsSingleThreaded = false;
    pcConfiguration->Get("disruptor", "disruptor_producer_strategy", bIsSingleThreaded, false);

    CRingBuffer *pcRingBuffer = new CRingBuffer(bIsSingleThreaded);
    bResult = bResult && pcRingBuffer->Init(un32Capacity, new CDisruptorElementFactory(un32Size));
    m_pcPool = pcRingBuffer;

    std::string ConsumerStrategy;
    pcConfiguration->Get("disruptor", "disruptor_consumer_strategy", ConsumerStrategy, "blocking");

    if("blocking" == ConsumerStrategy) {

        m_pcConsumerStrategy = new CDisruptorConsumerBlockingStrategy(un32Capacity);
    }

    // Sanity check.
    bResult = bResult && (nullptr != m_pcPool);
    bResult = bResult && (nullptr != m_pcConsumerStrategy);
    return bResult;
}

bool CDisruptor::Process(char *pchBuffer, uint32_t un32BufferSize, uint64_t un64UserData, int32_t n32ThreadId) noexcept {

    CDisruptorElement *pcElement = static_cast<CDisruptorElement*>(m_pcPool->Allocate());

    if(nullptr == pcElement) {

        return false;
    }

    pcElement->SetBuffer(pchBuffer, un32BufferSize);
    pcElement->SetUserData(un64UserData);
    pcElement->SetProducerThreadId(n32ThreadId);

    return m_pcConsumerStrategy->HandleElement(pcElement);
}

bool CDisruptor::Process(char *pchBuffer, uint32_t un32BufferSize, uint64_t un64UserData) noexcept {

    return Process(pchBuffer, un32BufferSize, un64UserData, -1);
}

bool CDisruptor::Process(char *pchBuffer, uint32_t un32BufferSize) noexcept {

    return Process(pchBuffer, un32BufferSize, 0);
}
