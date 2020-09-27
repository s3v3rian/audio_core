#ifndef INFRASTRUCTURE_CORE_COMPONENTS_IFACTORY_H
#define INFRASTRUCTURE_CORE_COMPONENTS_IFACTORY_H

#include "Components/IComponent.h"

class IFactory : public IComponent {

    public:

        IFactory(int32_t n32Id, const std::string &Name);
        virtual ~IFactory();

        virtual IComponent *Create() = 0;
};

#endif // IFACTORY_H
