#ifndef INFRASTRUCTURE_CORE_DISRUPTOR_IDISRUPTOR_H
#define INFRASTRUCTURE_CORE_DISRUPTOR_IDISRUPTOR_H

#include <string>
#include "queue/IQueue.h"
#include "pool/IPool.h"
#include "disruptor/CDisruptorElement.h"
#include "disruptor/IDisruptorConsumerStrategy.h"

/**
 * @brief The IDisruptor class
 * A MPSC (Multiple Producer Single Consumer) Disruptor.
 */
class CDisruptor {

    public:

        CDisruptor();
        virtual ~CDisruptor();

        bool Init(const std::string &File) noexcept;

        bool Process(char *pchBuffer, uint32_t un32BufferSize, uint64_t un64UserData, int32_t n32ThreadId) noexcept;
        bool Process(char *pchBuffer, uint32_t un32BufferSize, uint64_t un64UserData) noexcept;
        bool Process(char *pchBuffer, uint32_t un32BufferSize) noexcept;

    private:

        IPool *m_pcPool;

        IDisruptorConsumerStrategy *m_pcConsumerStrategy;
};

#endif // IDISRUPTOR_H
