#ifndef INFRASTRUCTURE_CORE_DISRUPTOR_CDEEPDISRUPTORELEMENT_H
#define INFRASTRUCTURE_CORE_DISRUPTOR_CDEEPDISRUPTORELEMENT_H

#include "disruptor/CDisruptorElement.h"

class CDeepDisruptorElement : public CDisruptorElement {

    public:

        CDeepDisruptorElement(uint32_t un32Capacity);
        virtual ~CDeepDisruptorElement();

        virtual void Reset() noexcept override;

        virtual bool SetBuffer(char *pchData, uint32_t un32Size) noexcept override;
        virtual uint32_t GetBufferCapacity() noexcept;

    protected:

        uint32_t m_un32BufferCapacity;
};

#endif // CDEEPDISRUPTORELEMENT_H
