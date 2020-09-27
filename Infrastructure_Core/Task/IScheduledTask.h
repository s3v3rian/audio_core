#ifndef INFRASTRUCTURE_CORE_TASK_ISCHEDULEDTASK_H
#define INFRASTRUCTURE_CORE_TASK_ISCHEDULEDTASK_H

#include "Task/ITask.h"

class IScheduledTask : public ITask {

    public:

        IScheduledTask();
        virtual ~IScheduledTask();

        virtual bool Start() noexcept override;
        virtual bool Stop() noexcept override;
        virtual bool Init(const std::string &Name) noexcept override;

        void SetTimeoutInUs(uint64_t un64Timeout) noexcept;

        static void RunThread(void *pvObj) noexcept;

    protected:

        uint64_t m_un64TimeoutInUs;
};

#endif // ISCHEDULEDTASK_H
