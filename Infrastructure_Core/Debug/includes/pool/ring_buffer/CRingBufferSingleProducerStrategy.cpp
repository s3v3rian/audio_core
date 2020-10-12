#include "CRingBufferSingleProducerStrategy.h"

CRingBufferSingleProducerStrategy::CRingBufferSingleProducerStrategy() {

    m_un32AllocateIndex = 0;
}

CRingBufferSingleProducerStrategy::~CRingBufferSingleProducerStrategy() {

    // No implementation.
}

uint32_t CRingBufferSingleProducerStrategy::Claim() noexcept {

    uint32_t un32Index = m_un32AllocateIndex++;
    return un32Index;
}
