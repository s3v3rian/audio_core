#include "IDevice.h"

IDevice::IDevice(int32_t n32Id, const std::string &Name) : IComponent(n32Id, Name) {

    // No implementation.
}

IDevice::~IDevice() {

    // No implementation.
}

IBoundary *IDevice::GetBoundary() noexcept {

    return m_pcBoundary;
}
