#include "CDisruptorElementFactory.h"

#include "disruptor/CDeepDisruptorElement.h"

CDisruptorElementFactory::CDisruptorElementFactory(uint32_t un32ElementSize) {

    m_un32ElementSize = un32ElementSize;
}

CDisruptorElementFactory::~CDisruptorElementFactory() {

    // No implementation.
}

IPoolElement *CDisruptorElementFactory::Create() noexcept {

    if(0 < m_un32ElementSize) {

        return new CDeepDisruptorElement(m_un32ElementSize);
    }

    return new CDisruptorElement();
}
