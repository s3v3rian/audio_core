#include "IPoolElement.h"

#include "IPool.h"

IPoolElement::IPoolElement() {

    // No implementation.
}

IPoolElement::~IPoolElement() {

    // No implementation.
}

void IPoolElement::Release() noexcept {

    m_pcPool->Deallocate(this);
}

void IPoolElement::SetID(uint32_t un32ID) noexcept {

    m_un32ID = un32ID;
}

void IPoolElement::SetPool(IPool *pcPool) noexcept {

    m_pcPool = pcPool;
}

uint32_t IPoolElement::ID() noexcept {

    return m_un32ID;
}
