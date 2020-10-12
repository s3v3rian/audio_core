#include "CAlsaCaptureService.h"

#include "configuration/CConfiguration.h"

CAlsaCaptureService::CAlsaCaptureService(int32_t n32Id, const std::string &Name) : IAudioSourceService(n32Id, Name) {

    m_pHandle = nullptr;
}

CAlsaCaptureService::~CAlsaCaptureService() {

    // No implementation.
}

bool CAlsaCaptureService::Start() noexcept {

}

bool CAlsaCaptureService::Stop() noexcept {

}

bool CAlsaCaptureService::Process(CVoiceFrameElement *pcFrame) noexcept {


}
