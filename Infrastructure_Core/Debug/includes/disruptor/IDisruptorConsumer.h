#ifndef INFRASTRUCTURE_CORE_DISRUPTOR_IDISRUPTORCONSUMER_H
#define INFRASTRUCTURE_CORE_DISRUPTOR_IDISRUPTORCONSUMER_H

#include "disruptor/CDisruptorElement.h"

class IDisruptorConsumer {

    public:

        virtual void Consume(CDisruptorElement *pcElement) = 0;
};

#endif // IDISRUPTORCONSUMER_H
