#ifndef INFRASTRUCTURE_CORE_POOL_IPOOLELEMENT_H
#define INFRASTRUCTURE_CORE_POOL_IPOOLELEMENT_H

#include <cstdint>

class IPool;

class IPoolElement {

    public:

        IPoolElement();
        virtual ~IPoolElement();

        virtual void Reset() = 0;

        void Release() noexcept;

        void SetID(uint32_t un32ID) noexcept;
        void SetPool(IPool *pcPool) noexcept;
        uint32_t ID() noexcept;

    private:

        uint32_t m_un32ID;
        IPool *m_pcPool;
};

#endif // IPOOLELEMENT_H
