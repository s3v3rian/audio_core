#ifndef INFRASTRUCTURE_CORE_DISRUPTOR_CDISRUPTOR_H
#define INFRASTRUCTURE_CORE_DISRUPTOR_CDISRUPTOR_H

#include "Task/IScheduledTask.h"
#include "Queue/IQueue.h"

class CDisruptorElement {


};

/**
 * @brief The CDisruptor class
 * A MPSC (Multiple Producer Single Consumer) Disruptor.
 */
class CDisruptor : public IScheduledTask {

    public:

        CDisruptor(uint64_t un64TimeoutInUs);
        virtual ~CDisruptor();

        virtual bool Process(char *pchBuffer, uint32_t un32BufferSize, uint64_t un64UserData, int32_t n32ThreadId) noexcept;
        virtual bool Process(char *pchBuffer, uint32_t un32BufferSize, uint64_t un64UserData) noexcept;
        virtual bool Process(char *pchBuffer, uint32_t un32BufferSize) noexcept;

    protected:

        virtual void Do() noexcept override;

    private:

        CDisruptorElement **m_p2cElements;
        uint32_t m_un32Capacity;

        IQueue<CDisruptorElement*> *m_pcQueue;
};

#endif // CDISRUPTOR_H
