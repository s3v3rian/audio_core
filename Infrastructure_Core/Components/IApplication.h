#ifndef INFRASTRUCTURE_CORE_COMPONENTS_IAPPLICATION_H
#define INFRASTRUCTURE_CORE_COMPONENTS_IAPPLICATION_H

#include "Components/IComponent.h"

class IApplication : public IComponent {

    public:

        IApplication(int32_t n32Id, const std::string &Name);
        virtual ~IApplication();
};

#endif // IAPPLICATION_H
