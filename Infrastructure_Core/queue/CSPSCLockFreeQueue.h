#ifndef INFRASTRUCTURE_CORE_QUEUE_CSPSCLOCKFREEQUEUE_H
#define INFRASTRUCTURE_CORE_QUEUE_CSPSCLOCKFREEQUEUE_H

#include <atomic>
#include "queue/IQueue.h"

template <typename T>

class CSPSCLockFreeQueue : public IQueue<T> {

    public:

        CSPSCLockFreeQueue(uint32_t un32Capcity) {

            m_un32Capacity = un32Capcity;
            m_un32aPopIndex = 0;
            m_un32aPushIndex = 0;

            m_pArray = new T[m_un32Capacity];
        }

        virtual ~CSPSCLockFreeQueue() {

            delete [] m_pArray;
        }

        bool Push(T t) noexcept override {

            if(m_un32Capacity <= Size()) {

                return false;
            }

            uint32_t un32Index = m_un32aPushIndex++ % m_un32Capacity;
            m_pArray[un32Index] = t;

            return true;
        }

        T Pop() noexcept override {

            if(true == IsEmpty()) {

                return nullptr;
            }

            T t = m_pArray[m_un32aPopIndex++ % m_un32Capacity];

            return t;
        }

        uint32_t Size() noexcept override {

            return (m_un32aPushIndex < m_un32aPopIndex ? (m_un32aPushIndex - m_un32aPushIndex) : (m_un32aPopIndex - m_un32aPushIndex));
        }

        bool IsEmpty() noexcept override {

            return (m_un32aPushIndex == m_un32aPopIndex);
        }

    private:

        std::atomic<uint32_t> m_un32aPushIndex;
        std::atomic<uint32_t> m_un32aPopIndex;
        uint32_t m_un32Capacity;

        T *m_pArray;
};

#endif // CSPSCLOCKFREEQUEUE_H
