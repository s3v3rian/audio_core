#include "IControlPlane.h"

IControlPlane::IControlPlane(int32_t n32Id, const std::string &Name, IPcmCore *pcPcmCore, IRtpCore *pcRtpCore) : IApplication(n32Id, Name) {

    m_pcPcmCore = pcPcmCore;
    m_pcRtpCore = pcRtpCore;
}

IControlPlane::~IControlPlane() {

    // No implementation.
}

IPcmCore *IControlPlane::GetPcmCore() noexcept {

    return m_pcPcmCore;
}

IRtpCore *IControlPlane::GetRtpCore() noexcept {

    return m_pcRtpCore;
}
