#ifndef INFRASTRUCTURE_CORE_COMPONENTS_IAPPLICATION_H
#define INFRASTRUCTURE_CORE_COMPONENTS_IAPPLICATION_H

#include "common/CommonDefinitions.h"
#include "components/IComponent.h"

class IApplication : public IComponent {

    public:

        IApplication(int32_t n32Id, const std::string &Name);
        virtual ~IApplication();

        virtual const char *Type() noexcept override { return RSDK_APPLICATION_COMPONENT_TYPE; }
};

#endif // IAPPLICATION_H
