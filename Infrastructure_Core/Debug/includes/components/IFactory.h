#ifndef INFRASTRUCTURE_CORE_COMPONENTS_IFACTORY_H
#define INFRASTRUCTURE_CORE_COMPONENTS_IFACTORY_H

#include "common/CommonDefinitions.h"
#include "components/IComponent.h"

class IFactory : public IComponent {

    public:

        IFactory(int32_t n32Id, const std::string &Name);
        virtual ~IFactory();

        virtual IComponent *Create() = 0;
        virtual void Bind() = 0;

        virtual const char *Type() noexcept override{ return RSDK_FACTORY_COMPONENT_TYPE; }
};

#endif // IFACTORY_H
