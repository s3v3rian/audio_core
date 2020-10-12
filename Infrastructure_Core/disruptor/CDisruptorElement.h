#ifndef INFRASTRUCTURE_CORE_DISRUPTOR_CDISRUPTORELEMENT_H
#define INFRASTRUCTURE_CORE_DISRUPTOR_CDISRUPTORELEMENT_H

#include "pool/IPoolElement.h"

class CDisruptorElement : public IPoolElement {

    public:

        CDisruptorElement();
        virtual ~CDisruptorElement();

        virtual void Reset() noexcept override;

        virtual bool SetBuffer(char *pchData, uint32_t un32Size) noexcept;
        virtual void SetUserData(uint64_t un64UserData) noexcept;
        virtual void SetProducerThreadId(int32_t n32ThreadId) noexcept;

        virtual char *GetBuffer() noexcept;
        virtual uint32_t GetBufferUsed() noexcept;
        virtual uint64_t GetUserData() noexcept;
        virtual int32_t GetProducerThreadId() noexcept;

    protected:

        char *m_pchBuffer;
        uint32_t m_un32BufferUsed;
        uint64_t m_un64UserData;
        int32_t m_n32ProducerThreadId;
};

#endif // CDISRUPTORELEMENT_H
