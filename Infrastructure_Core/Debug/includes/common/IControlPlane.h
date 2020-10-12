#ifndef INFRASTRUCTURE_CORE_COMMON_ICONTROLPLANE_H
#define INFRASTRUCTURE_CORE_COMMON_ICONTROLPLANE_H

#include "common/IPcmCore.h"
#include "common/IRtpCore.h"

class IControlPlane : public IApplication {

    public:

        IControlPlane(int32_t n32Id, const std::string &Name, IPcmCore *pcPcmCore, IRtpCore *pcRtpCore);
        virtual ~IControlPlane();

    protected:

        virtual IPcmCore *GetPcmCore() noexcept;
        virtual IRtpCore *GetRtpCore() noexcept;

    private:

        IPcmCore *m_pcPcmCore;
        IRtpCore *m_pcRtpCore;
};

#endif // ICONTROLPLANE_H
