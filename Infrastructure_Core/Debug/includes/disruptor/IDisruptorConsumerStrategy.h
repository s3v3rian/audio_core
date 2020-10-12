#ifndef INFRASTRUCTURE_CORE_DISRUPTOR_IDISRUPTORCONSUMERSTRATEGY_H
#define INFRASTRUCTURE_CORE_DISRUPTOR_IDISRUPTORCONSUMERSTRATEGY_H

#include "task/ITask.h"
#include "queue/IQueue.h"
#include "list/IList.h"
#include "disruptor/CDisruptorElement.h"
#include "disruptor/IDisruptorConsumer.h"

class IDisruptorConsumerStrategy : public ITask {

    public:

        IDisruptorConsumerStrategy(IQueue<CDisruptorElement*> *pcQueue);
        virtual ~IDisruptorConsumerStrategy();

        virtual void AddConsumer(IDisruptorConsumer *pcConsumer) noexcept;

        virtual bool HandleElement(CDisruptorElement *pcElement) = 0;

    protected:

        void NotifyConsumers(CDisruptorElement *pcElement) noexcept;

        IQueue<CDisruptorElement*> *m_pcQueue;
        IList<IDisruptorConsumer*> *m_pcConsumers;
};

#endif // IDISRUPTORCONSUMERSTRATEGY_H
