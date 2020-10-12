#include "IDisruptorConsumerStrategy.h"

IDisruptorConsumerStrategy::IDisruptorConsumerStrategy(IQueue<CDisruptorElement*> *pcQueue) {

    m_pcQueue = pcQueue;
}

IDisruptorConsumerStrategy::~IDisruptorConsumerStrategy() {

    // No implementation.
}

void IDisruptorConsumerStrategy::NotifyConsumers(CDisruptorElement *pcElement) noexcept {

    for(uint32_t un32Index = 0; un32Index < m_pcConsumers->Size(); un32Index++) {

        m_pcConsumers->Get(un32Index)->Consume(pcElement);
    }
}
