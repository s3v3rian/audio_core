#ifndef INFRASTRUCTURE_CORE_COMPONENTS_IDEVICE_H
#define INFRASTRUCTURE_CORE_COMPONENTS_IDEVICE_H

#include <vector>
#include "Components/IComponent.h"
#include "Components/IBoundary.h"
#include "Components/IListener.h"

class IDevice : public IComponent, public IListener {

    public:

        IDevice(int32_t n32Id, const std::string &Name);
        virtual ~IDevice();

        virtual void AddMate(IComponent *pcMate) override;

    protected:

        IBoundary *GetBoundary() noexcept;

    private:

        std::vector<IListener*> m_vpcListeners;
        IBoundary *m_pcBoundary;
};

#endif // IDEVICE_H
