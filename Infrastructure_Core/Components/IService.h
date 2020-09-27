#ifndef INFRASTRUCTURE_CORE_COMPONENTS_ISERVICE_H
#define INFRASTRUCTURE_CORE_COMPONENTS_ISERVICE_H

#include "Components/IComponent.h"

class IService : public IComponent {

    public:

        IService(int32_t n32Id, const std::string &Name);
        virtual ~IService();
};

#endif // ISERVICE_H
