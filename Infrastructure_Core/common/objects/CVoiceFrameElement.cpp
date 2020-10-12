#include "CVoiceFrameElement.h"

#include <cstring>

CVoiceFrameElement::CVoiceFrameElement(uint32_t un32Capacity) : CDeepDisruptorElement(un32Capacity) {

    Reset();
}

CVoiceFrameElement::~CVoiceFrameElement() {

    // No implementation.
}

void CVoiceFrameElement::Reset() noexcept {

    CDeepDisruptorElement::Reset();

    memset(&m_sMetaData, 0, sizeof (m_sMetaData));
}

bool CVoiceFrameElement::SetBuffer(char *pchData, uint32_t un32Size) noexcept {

    if(GetBufferRemaining() < un32Size) {

        return false;
    }

    if(false == CDeepDisruptorElement::SetBuffer(pchData, un32Size)) {

        return false;
    }

    m_un32BufferUsed += un32Size;

    return true;
}

uint32_t CVoiceFrameElement::GetBufferRemaining() noexcept {

    return (GetBufferCapacity() - GetBufferUsed());
}
