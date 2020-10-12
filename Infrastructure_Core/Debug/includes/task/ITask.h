#ifndef INFRASTRUCTURE_CORE_TASK_ITASK_H
#define INFRASTRUCTURE_CORE_TASK_ITASK_H

#include <string>
#include <thread>
#include <mutex>
#include <condition_variable>
#include "components/ILifeCycle.h"

class ITask : virtual public ILifeCycle {

    public:

        ITask(const std::string &Name);
        virtual ~ITask();

        virtual bool Start() noexcept override;
        virtual bool Stop() noexcept override;

        virtual void SetName(const std::string &Name) noexcept;

        static void RunThread(void *pvObj) noexcept;

    protected:

        ITask();

        virtual void InitTask(const std::string &Name, std::thread *pcThread) noexcept;

        virtual void Do() = 0;

        std::thread *m_pcThread;
        std::mutex m_Mutex;
        std::condition_variable m_Condition;

        bool m_bIsActive;
};

#endif // ITASK_H
