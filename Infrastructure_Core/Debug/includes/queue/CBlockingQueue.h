#ifndef INFRASTRUCTURE_CORE_QUEUE_CBLOCKINGQUEUE_H
#define INFRASTRUCTURE_CORE_QUEUE_CBLOCKINGQUEUE_H

#include <mutex>
#include <condition_variable>
#include "queue/IQueue.h"

template <typename T>

class CBlockingQueue : public IQueue<T> {

    public:

        CBlockingQueue(uint32_t un32Capcity) {

            m_un32Capacity = un32Capcity;
            m_un32PopIndex = 0;
            m_un32PushIndex = 0;

            m_pArray = new T[m_un32Capacity];
        }

        virtual ~CBlockingQueue() {

            delete [] m_pArray;
        }

        bool Push(T t) noexcept override {

            if(m_un32Capacity <= Size()) {

                return false;
            }

            std::unique_lock<std::mutex> Lock(m_Mutex);

            uint32_t un32Index = m_un32PushIndex++ % m_un32Capacity;
            m_pArray[un32Index] = t;

            m_Condition.notify_all();

            return true;
        }

        T Pop() noexcept override {

            std::unique_lock<std::mutex> Lock(m_Mutex);
            m_Condition.wait(Lock);

            if(true == IsEmpty()) {

                return nullptr;
            }

            T t = m_pArray[m_un32PopIndex++ % m_un32Capacity];

            return t;
        }

        uint32_t Size() noexcept override {

            return (m_un32PushIndex < m_un32PopIndex ? (m_un32PushIndex - m_un32PushIndex) : (m_un32PopIndex - m_un32PushIndex));
        }

        bool IsEmpty() noexcept override {

            return (m_un32PushIndex == m_un32PopIndex);
        }

    private:

        uint32_t m_un32PushIndex;
        uint32_t m_un32PopIndex;

        std::mutex m_Mutex;
        std::condition_variable m_Condition;

        uint32_t m_un32Capacity;

        T *m_pArray;
};

#endif // CBLOCKINGQUEUE_H
