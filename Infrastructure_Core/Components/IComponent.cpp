#include "IComponent.h"

#include "Logger/CLogger.h"

IComponent::IComponent(int32_t n32Id, const std::string &Name) : m_n32Id(n32Id), m_Name(Name), m_n32LoggerId(ROOT_LOGGER_ID) {

    // No implementation.
}

IComponent::~IComponent() {

    // No implementation.
}

int32_t IComponent::ID() noexcept {

    return m_n32Id;
}

const std::string &IComponent::Name() noexcept {

    return m_Name;
}

void IComponent::SetLoggerId(int32_t n32LoggerId) noexcept {

    m_n32LoggerId = n32LoggerId;
}

int32_t IComponent::GetLoggerId() noexcept {

    return m_n32LoggerId;
}
