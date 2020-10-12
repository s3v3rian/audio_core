#include "CRingBufferMultipleProducerStrategy.h"

CRingBufferMultipleProducerStrategy::CRingBufferMultipleProducerStrategy() {

    m_un32aAllocateIndex = 0;
}

CRingBufferMultipleProducerStrategy::~CRingBufferMultipleProducerStrategy() {

    // No implementation.
}

uint32_t CRingBufferMultipleProducerStrategy::Claim() noexcept {

    uint32_t un32Index = m_un32aAllocateIndex++;
    return un32Index;
}
