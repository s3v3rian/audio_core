#include "IScheduledTask.h"

#ifdef __LINUX_SYSTEM__
    #include <pthread.h>
#endif

#include <chrono>

void IScheduledTask::RunThread(void *pvObj) noexcept {

    IScheduledTask *pcTask = static_cast<IScheduledTask*>(pvObj);

    std::unique_lock<std::mutex> Lock(pcTask->m_Mutex);
    pcTask->m_Condition.wait(Lock);

    while(true == pcTask->m_bIsActive) {

        auto T1 = std::chrono::steady_clock::now();

        pcTask->Do();

        auto T2 = std::chrono::steady_clock::now();
        auto TDiff = T2 - T1;
        uint64_t un64FncDuration = std::chrono::duration_cast<std::chrono::microseconds>(TDiff).count();

        if(un64FncDuration < pcTask->m_un64TimeoutInUs) {

            std::this_thread::sleep_for(std::chrono::microseconds(pcTask->m_un64TimeoutInUs - un64FncDuration));
        }
    }
}


IScheduledTask::IScheduledTask() {

    m_un64TimeoutInUs = 0;
}

IScheduledTask::~IScheduledTask() {

    // No implementation.
}

bool IScheduledTask::Start() noexcept {

    std::unique_lock<std::mutex> Lock(m_Mutex);
    m_Condition.notify_one();
    return true;
}

bool IScheduledTask::Stop() noexcept {

    m_bIsActive = false;
    return true;
}

bool IScheduledTask::Init(const std::string &Name) noexcept {

    if(0 == m_un64TimeoutInUs) {

        return false;
    }

    m_bIsActive = true;
    m_pcThread = new std::thread(IScheduledTask::RunThread, this);
#ifdef __LINUX_SYSTEM__
    pthread_setname_np(m_pcThread->native_handle(), Name.c_str());
#else
    // TODO ADD OS SUPPORT
#endif

    return true;
}

void IScheduledTask::SetTimeoutInUs(uint64_t un64Timeout) noexcept {

    m_un64TimeoutInUs = un64Timeout;
}
