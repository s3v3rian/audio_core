#include "CPcmTransformApplication.h"

#include "list/CArrayVector.h"
#include "common/PcmCoreDefinitions.h"

CPcmTransformApplication::CPcmTransformApplication(int32_t n32Id, const std::string &Name) : IApplication(n32Id, Name) {

    m_pcFilters = new CArrayVector<IFilterService*>(PCM_CORE_MAX_NUMBER_OF_FILTERS_IN_TRANSFORM_PATH);
}

CPcmTransformApplication::~CPcmTransformApplication() {

    delete m_pcFilters;
}

bool CPcmTransformApplication::Start() noexcept {

    return true;
}

bool CPcmTransformApplication::Stop() noexcept {

    return true;
}

bool CPcmTransformApplication::Init(const std::string &File) noexcept {

    return true;
}

void CPcmTransformApplication::AddMate(IComponent *pcMate) noexcept {

    EN_PcmCoreComponents eComponent = static_cast<EN_PcmCoreComponents>(pcMate->ID());
    switch(eComponent) {
        case EN_PcmCoreComponents::FILTER_SERVICE:
            m_pcFilters->Add(static_cast<IFilterService*>(pcMate));
            break;
        default:
            break;
    }
}

bool CPcmTransformApplication::Filter(CVoiceFrameElement *pcInFrame, CVoiceFrameElement *pcOutFrame) noexcept {

    bool bResult = true;

    for(uint32_t un32Index = 0; un32Index < m_pcFilters->Size(); un32Index++) {

        bResult = bResult && m_pcFilters->Get(un32Index)->Filter(pcInFrame, pcOutFrame);
    }

    return bResult;
}

bool CPcmTransformApplication::Filter(CVoiceFrameElement *pcFrame) noexcept {

    bool bResult = true;

    for(uint32_t un32Index = 0; un32Index < m_pcFilters->Size(); un32Index++) {

        bResult = bResult && m_pcFilters->Get(un32Index)->Filter(pcFrame);
    }

    return bResult;
}

bool CPcmTransformApplication::SetProperty(std::string &Name, double dValue) noexcept {

    bool bResult = true;

    for(uint32_t un32Index = 0; un32Index < m_pcFilters->Size(); un32Index++) {

        bResult = bResult && m_pcFilters->Get(un32Index)->SetProperty(Name, dValue);
    }

    return bResult;
}

bool CPcmTransformApplication::GetProperty(std::string &Name, double &rdValue) noexcept {

    bool bResult = false;

    for(uint32_t un32Index = 0; un32Index < m_pcFilters->Size(); un32Index++) {

        bResult = m_pcFilters->Get(un32Index)->GetProperty(Name, rdValue);

        if(true == bResult) {

            break;
        }
    }

    return bResult;
}
