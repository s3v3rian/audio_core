#include "CDisruptorConsumerBlockingStrategy.h"

#include "queue/CBlockingQueue.h"

CDisruptorConsumerBlockingStrategy::CDisruptorConsumerBlockingStrategy(uint32_t un32Capacity) : IDisruptorConsumerStrategy(new CBlockingQueue<CDisruptorElement*>(un32Capacity)) {

    // No implementation.
}

CDisruptorConsumerBlockingStrategy::~CDisruptorConsumerBlockingStrategy() {

    // No implementation.
}

void CDisruptorConsumerBlockingStrategy::Do() noexcept {

    while(true) {

        CDisruptorElement *pcElement = m_pcQueue->Pop();

        if(nullptr == pcElement) {

            continue;
        }

        NotifyConsumers(pcElement);
    }
}

bool CDisruptorConsumerBlockingStrategy::HandleElement(CDisruptorElement *pcElement) noexcept {

    m_pcQueue->Push(pcElement);

    return true;
}
