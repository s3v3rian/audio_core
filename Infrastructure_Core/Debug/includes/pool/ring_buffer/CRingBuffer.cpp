#include "CRingBuffer.h"

#include "pool/ring_buffer/CRingBufferSingleProducerStrategy.h"
#include "pool/ring_buffer/CRingBufferMultipleProducerStrategy.h"

CRingBuffer::CRingBuffer(bool bIsProducerSingleThreaded) {

    m_un32Capacity = 0;

    if(true == bIsProducerSingleThreaded) {
        m_pcProducerStrategy = new CRingBufferSingleProducerStrategy();
    } else {
        m_pcProducerStrategy = new CRingBufferMultipleProducerStrategy();
    }
}

CRingBuffer::~CRingBuffer() {

    if(nullptr != m_pcProducerStrategy) {

        delete m_pcProducerStrategy;
    }

    if(0 == m_un32Capacity) {

        return;
    }

    for(uint32_t un32Index = 0; un32Index < m_un32Capacity; un32Index++) {

        delete m_p2cElementsArray[un32Index];
    }

    delete [] m_p2cElementsArray;
}

bool CRingBuffer::Init(uint32_t un32Capacity, IPoolElementFactory *pcFactory) noexcept {

    if(0 == m_un32Capacity) {

        m_un32Capacity = un32Capacity;
        m_p2cElementsArray = new IPoolElement*[m_un32Capacity];

        for(uint32_t un32Index = 0; un32Index < m_un32Capacity; un32Index++) {

            m_p2cElementsArray[un32Index] = pcFactory->Create();

            m_p2cElementsArray[un32Index]->SetID(un32Index);
            m_p2cElementsArray[un32Index]->SetPool(this);

            m_p2cElementsArray[un32Index]->Reset();
        }
    }

    delete pcFactory;

    return true;
}

IPoolElement *CRingBuffer::Allocate() noexcept {

    if(0 == m_un32Capacity) {

        return nullptr;
    }

    uint32_t un32Index = m_pcProducerStrategy->Claim() % m_un32Capacity;
    IPoolElement *pcElement = m_p2cElementsArray[un32Index];

    if(nullptr != pcElement) {

        m_p2cElementsArray[pcElement->ID()] = nullptr;
    }

    return pcElement;
}

bool CRingBuffer::Deallocate(IPoolElement *pcElement) noexcept {

    if(0 == m_un32Capacity) {

        return false;
    }

    if(nullptr != m_p2cElementsArray[pcElement->ID()]) {

        return false;
    }

    pcElement->Reset();
    m_p2cElementsArray[pcElement->ID()] = pcElement;

    return true;
}

uint32_t CRingBuffer::Size() noexcept {

    uint32_t un32NumberOfElementsAllocated = 0;
    for(uint32_t un32Index = 0; un32Index < m_un32Capacity; un32Index++) {

        if(nullptr == m_p2cElementsArray[un32Index]) {

            un32NumberOfElementsAllocated++;
        }
    }
    return un32NumberOfElementsAllocated;
}

bool CRingBuffer::IsEmpty() noexcept {

    if(m_un32Capacity == Size()) {

        return true;
    }

    return false;
}
