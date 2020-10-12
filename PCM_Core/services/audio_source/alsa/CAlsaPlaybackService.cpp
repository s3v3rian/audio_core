#include "CAlsaPlaybackService.h"

#include "logger/CLogger.h"

CAlsaPlaybackService::CAlsaPlaybackService(int32_t n32Id, const std::string &Name) : IAudioSourceService(n32Id, Name) {

    m_pHandle = nullptr;
    m_pcConfigurator = new CAlsaParamsConfigurator(GetLoggerId());
}

CAlsaPlaybackService::~CAlsaPlaybackService() {

    delete m_pcConfigurator;
}

bool CAlsaPlaybackService::Start() noexcept {

    int nErrorCode = 0;

    if(0 > (nErrorCode = snd_pcm_open(&m_pHandle, GetParameters().m_SourceLocator.c_str(), SND_PCM_STREAM_PLAYBACK, 0))) {

        ERR(GetLoggerId(), "Cannot open audio device");

    } else if(0 > (nErrorCode = m_pcConfigurator->Init(m_pHandle, GetParameters()))) {

        ERR(GetLoggerId(), "Failed to configure audio device");
    }

    if(0 > nErrorCode) {

        std::string Error(snd_strerror(nErrorCode));
        ERR(GetLoggerId(), "Start failed, Error code - " + Error);
    }

    return (0 == nErrorCode);
}

bool CAlsaPlaybackService::Stop() noexcept {

    int nErrorCode = 0;

    nErrorCode = snd_pcm_close(m_pHandle);
    if(0 > nErrorCode) {

        std::string Error(snd_strerror(nErrorCode));
        ERR(GetLoggerId(), "Stop failed, Error code - " + Error);
    }

    return (0 == nErrorCode);
}

bool CAlsaPlaybackService::Process(CVoiceFrameElement *pcFrame) noexcept {

    snd_pcm_sframes_t frames_to_deliver;
    int nfds;
    struct pollfd *pfds;


    /* tell ALSA to wake us up whenever 4096 or more frames
       of playback data can be delivered. Also, tell
       ALSA that we'll start the device ourselves.
    */

    /* the interface will interrupt the kernel every 4096 frames, and ALSA
       will wake up this program very soon after that.
    */

    /*
    if ((err = snd_pcm_prepare (playback_handle)) < 0) {
        fprintf (stderr, "cannot prepare audio interface for use (%s)\n",
             snd_strerror (nErrorCode));
        exit (1);
    }
    */
}
