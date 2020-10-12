#ifndef INFRASTRUCTURE_CORE_TASK_ISCHEDULEDTASK_H
#define INFRASTRUCTURE_CORE_TASK_ISCHEDULEDTASK_H

#include "task/ITask.h"

class IScheduledTask : public ITask {

    public:

        IScheduledTask(const std::string &Name);
        virtual ~IScheduledTask();

        virtual bool Start() noexcept override;
        virtual bool Stop() noexcept override;

        void SetTimeoutInUs(uint64_t un64Timeout) noexcept;

        static void RunThread(void *pvObj) noexcept;

    protected:

        uint64_t m_un64TimeoutInUs;
};

#endif // ISCHEDULEDTASK_H
