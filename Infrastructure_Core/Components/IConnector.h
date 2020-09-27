#ifndef INFRASTRUCTURE_CORE_COMPONENTS_ICONNECTOR_H
#define INFRASTRUCTURE_CORE_COMPONENTS_ICONNECTOR_H

#include "Components/IComponent.h"
#include "Components/IBoundary.h"
#include "Components/IConnectorListener.h"
#include "Task/ITask.h"

class IConnector : public IComponent, ITask, IBoundary {

    public:

        IConnector(int32_t n32Id, const std::string &Name);
        virtual ~IConnector();

        virtual void AddMate(IComponent *pcMate) noexcept override;

        virtual void Do() noexcept override;

    protected:

        IConnectorListener *GetListener() noexcept;

    private:

        IConnectorListener *m_pcListener;
};

#endif // ICONNECTOR_H
