#include "CDeepDisruptorElement.h"

#include <cstring>

CDeepDisruptorElement::CDeepDisruptorElement(uint32_t un32Capacity) {

    m_un32BufferCapacity = un32Capacity;

    m_pchBuffer = new char[un32Capacity];
}

CDeepDisruptorElement::~CDeepDisruptorElement() {

    delete [] m_pchBuffer;
}

void CDeepDisruptorElement::Reset() noexcept {

    memset(m_pchBuffer, 0, m_un32BufferCapacity);

    m_un32BufferUsed = 0;
    m_un64UserData = 0;
    m_n32ProducerThreadId = 0;
}

bool CDeepDisruptorElement::SetBuffer(char *pchData, uint32_t un32Size) noexcept {

    if(m_un32BufferCapacity < un32Size) {

        return false;
    }

    memcpy(m_pchBuffer, pchData, un32Size);
    m_un32BufferUsed = un32Size;

    return true;
}

uint32_t CDeepDisruptorElement::GetBufferCapacity() noexcept {

    return m_un32BufferCapacity;
}
