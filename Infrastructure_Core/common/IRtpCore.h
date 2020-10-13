#ifndef INFRASTRUCTURE_CORE_COMMON_IRTPCORE_H
#define INFRASTRUCTURE_CORE_COMMON_IRTPCORE_H

#include "components/IApplication.h"
#include "components/IEventListener.h"
#include "common/objects/CVoiceFrameElement.h"

struct SRtpPacketDetails {

    uint64_t m_un64SessionID;

    SRtpPacketDetails() {

        m_un64SessionID = 0;
    }
};

class IRtpCore : public IApplication {

    public:

        IRtpCore(int32_t n32Id, const std::string &Name);
        virtual ~IRtpCore();

        virtual bool OnDownstreamServices(CVoiceFrameElement *pcFrame, SRtpPacketDetails *psDetails) = 0;

        virtual void RegisterRtpUpstreamListener(IEventListener *pcListener) = 0;
        virtual uint64_t OpenSession() = 0;
        virtual bool CloseSession() = 0;
};

#endif // IRTPCORE_H
