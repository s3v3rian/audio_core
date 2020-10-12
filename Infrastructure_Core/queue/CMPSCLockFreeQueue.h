#ifndef INFRASTRUCTURE_CORE_QUEUE_CMPSCLOCKFREEQUEUE_H
#define INFRASTRUCTURE_CORE_QUEUE_CMPSCLOCKFREEQUEUE_H

#include "CSPSCLockFreeQueue.h"

template <typename T>

class CMPSCLockFreeQueue : public CSPSCLockFreeQueue<T> {

    public:

        CMPSCLockFreeQueue();
        virtual ~CMPSCLockFreeQueue();
};

#endif // CMPSCLOCKFREEQUEUE_H
