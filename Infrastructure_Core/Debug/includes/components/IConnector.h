#ifndef INFRASTRUCTURE_CORE_COMPONENTS_ICONNECTOR_H
#define INFRASTRUCTURE_CORE_COMPONENTS_ICONNECTOR_H

#include "task/ITask.h"
#include "pool/IPool.h"
#include "common/CommonDefinitions.h"
#include "components/IComponent.h"
#include "components/IEventSender.h"
#include "components/IConnectorEventListener.h"

struct SConnectorParameters {

    std::string m_Source;
    std::string m_Destination;
    uint32_t m_un32RingBufferElementSize;
    uint32_t m_un32RingBufferSize;

    SConnectorParameters() {

        m_Source = "N/A";
        m_Destination = "N/A";
        m_un32RingBufferElementSize = 0;
        m_un32RingBufferSize = 0;
    }
};

class CConnectorBufferElementFactory : public IPoolElementFactory {

    public:

        CConnectorBufferElementFactory(uint32_t un32Capacity);

        IPoolElement * Create() noexcept override;

    private:

        uint32_t m_un32Capacity;
};

class CConnectorBufferElement : public IPoolElement {

    public:

        CConnectorBufferElement(uint32_t un32Capacity);
        virtual ~CConnectorBufferElement();

        void Reset() noexcept override;

        void SetSize(uint32_t un32Size) noexcept;
        char *GetBuffer() noexcept;
        uint32_t GetSize() noexcept;
        uint32_t GetCapacity() noexcept;
        void *GetSource() noexcept;

    private:

        char *m_pBuffer;
        uint32_t m_un32Size;
        uint32_t m_un32Capacity;
        void *m_pvSource;
};

class IConnector : public IComponent, public ITask, public IEventSender {

    public:

        IConnector(int32_t n32Id, const std::string &Name);
        virtual ~IConnector();

        virtual bool Start() noexcept override;
        virtual bool Stop() noexcept override;
        virtual bool Init(const std::string &File) noexcept override;
        virtual void AddMate(IComponent *pcMate) noexcept override;

        virtual const char *Type() noexcept override { return RSDK_CONNECTOR_COMPONENT_TYPE; }

    protected:

        virtual void Receive(CConnectorBufferElement *pcElement) = 0;
        virtual void Connect() = 0;
        virtual void Disconnect() = 0;
        virtual void Do() noexcept override;

        virtual SConnectorParameters &GetParameters() noexcept;
        virtual IConnectorEventListener *GetListener() noexcept;

    private:

        IPool *m_pcBufferPool;
        IConnectorEventListener *m_pcEventListener;

        SConnectorParameters m_sParameters;
};

#endif // ICONNECTOR_H
