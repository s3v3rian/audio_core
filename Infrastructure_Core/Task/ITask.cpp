#include "ITask.h"

#ifdef __LINUX_SYSTEM__
    #include <pthread.h>
#endif

void ITask::RunThread(void *pvObj) noexcept {

    ITask *pcTask = static_cast<ITask*>(pvObj);

    std::unique_lock<std::mutex> Lock(pcTask->m_Mutex);
    pcTask->m_Condition.wait(Lock);

    while(true == pcTask->m_bIsActive) {

        pcTask->Do();

        std::unique_lock<std::mutex> Lock(pcTask->m_Mutex);
        pcTask->m_Condition.wait(Lock);
    }
}

ITask::ITask() {

    m_pcThread = nullptr;
    m_bIsActive = false;
}

ITask::~ITask() {

    if(nullptr != m_pcThread) {

        delete m_pcThread;
    }
}

bool ITask::Start() noexcept {

    std::unique_lock<std::mutex> Lock(m_Mutex);
    m_Condition.notify_one();
    return true;
}

bool ITask::Stop() noexcept {

    m_bIsActive = false;
    std::unique_lock<std::mutex> Lock(m_Mutex);
    m_Condition.notify_one();
    return true;
}

bool ITask::Init(const std::string &Name) noexcept {

    m_bIsActive = true;
    m_pcThread = new std::thread(ITask::RunThread, this);
#ifdef __LINUX_SYSTEM__
    pthread_setname_np(m_pcThread->native_handle(), Name.c_str());
#else
    // TODO ADD OS SUPPORT
#endif

    return true;
}
