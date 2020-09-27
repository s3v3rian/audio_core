#ifndef INFRASTRUCTURE_CORE_COMPONENTS_ICOMPONENT_H
#define INFRASTRUCTURE_CORE_COMPONENTS_ICOMPONENT_H

#include <string>
#include "Components/ILifeCycle.h"

class IComponent : virtual public ILifeCycle {

    public:

        IComponent(int32_t n32Id, const std::string &Name);
        virtual ~IComponent();

        int32_t ID() noexcept;
        const std::string &Name() noexcept;

        virtual bool Init(const std::string &File) = 0;
        virtual void AddMate(IComponent *pcMate) = 0;

    protected:

        void SetLoggerId(int32_t n32LoggerId) noexcept;
        int32_t GetLoggerId() noexcept;

    private:

        const int32_t m_n32Id;
        const std::string m_Name;

        int32_t m_n32LoggerId;
};

#endif // ICOMPONENT_H
