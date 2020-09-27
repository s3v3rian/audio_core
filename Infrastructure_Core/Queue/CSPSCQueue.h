#ifndef INFRASTRUCTURE_CORE_QUEUE_CSPSCQUEUE_H
#define INFRASTRUCTURE_CORE_QUEUE_CSPSCQUEUE_H

#include "Queue/IQueue.h"

template <class T>

class CSPSCQueue : public IQueue<T> {

    public:

        CSPSCQueue();
        virtual ~CSPSCQueue();

        bool Push(T t) noexcept override;
        T Pop() noexcept override;
        uint32_t Size() noexcept override;
        bool IsEmpty() noexcept override;

    private:

        uint32_t m_un32PushIndex;
        uint32_t m_un32PopIndex;
};

#endif // CSPSCQUEUE_H
