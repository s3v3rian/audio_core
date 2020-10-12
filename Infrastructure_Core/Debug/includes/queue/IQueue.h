#ifndef INFRASTRUCTURE_CORE_QUEUE_IQUEUE_H
#define INFRASTRUCTURE_CORE_QUEUE_IQUEUE_H

#include <cstdint>

template <typename T>

class IQueue {

    public:

        virtual ~IQueue() { }

        virtual bool Push(T t) = 0;
        virtual T Pop() = 0;
        virtual uint32_t Size() = 0;
        virtual bool IsEmpty() = 0;
};

#endif // IQUEUE_H
