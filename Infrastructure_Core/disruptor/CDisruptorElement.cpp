#include "CDisruptorElement.h"

CDisruptorElement::CDisruptorElement() {

    m_pchBuffer = nullptr;
    m_un32BufferUsed = 0;
    m_un64UserData = 0;
    m_n32ProducerThreadId = 0;
}

CDisruptorElement::~CDisruptorElement() {

    // No implementation.
}

void CDisruptorElement::Reset() noexcept {

    m_pchBuffer = nullptr;
    m_un32BufferUsed = 0;
    m_un64UserData = 0;
    m_n32ProducerThreadId = 0;
}

bool CDisruptorElement::SetBuffer(char *pchData, uint32_t un32Size) noexcept {

    m_pchBuffer = pchData;
    m_un32BufferUsed = un32Size;

    return true;
}

void CDisruptorElement::SetUserData(uint64_t un64UserData) noexcept {

    m_un64UserData = un64UserData;
}

void CDisruptorElement::SetProducerThreadId(int32_t n32ThreadId) noexcept {

    m_n32ProducerThreadId = n32ThreadId;
}

char *CDisruptorElement::GetBuffer() noexcept {

    return m_pchBuffer;
}

uint32_t CDisruptorElement::GetBufferUsed() noexcept {

    return m_un32BufferUsed;
}

uint64_t CDisruptorElement::GetUserData() noexcept {

    return m_un64UserData;
}

int32_t CDisruptorElement::GetProducerThreadId() noexcept {

    return m_n32ProducerThreadId;
}
