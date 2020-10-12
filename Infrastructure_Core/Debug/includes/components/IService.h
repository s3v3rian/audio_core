#ifndef INFRASTRUCTURE_CORE_COMPONENTS_ISERVICE_H
#define INFRASTRUCTURE_CORE_COMPONENTS_ISERVICE_H

#include "common/CommonDefinitions.h"
#include "components/IComponent.h"

class IService : public IComponent {

    public:

        IService(int32_t n32Id, const std::string &Name);
        virtual ~IService();

        void AddMate(IComponent *pcMate) noexcept override;

        virtual const char *Type() noexcept override { return RSDK_SERVICE_COMPONENT_TYPE; }
};

#endif // ISERVICE_H
