#ifndef INFRASTRUCTURE_CORE_COMPONENTS_ILIFECYCLE_H
#define INFRASTRUCTURE_CORE_COMPONENTS_ILIFECYCLE_H

class ILifeCycle {

    public:

        ILifeCycle();
        virtual ~ILifeCycle();

        virtual bool Start() = 0;
        virtual bool Stop() = 0;
};

#endif // ILIFECYCLE_H
