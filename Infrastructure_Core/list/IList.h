#ifndef INFRASTRUCTURE_CORE_LIST_ILIST_H
#define INFRASTRUCTURE_CORE_LIST_ILIST_H

#include <cstdint>

template <typename T>

class IList {

    public:

        virtual ~IList() { }

        virtual bool Add(T t) = 0;
        virtual bool Remove(uint32_t un32Index) = 0;
        virtual void Clear() = 0;
        virtual T Get(uint32_t un32Index) = 0;
        virtual uint32_t Size() = 0;
        virtual bool IsEmpty() = 0;
};

#endif // ILIST_H
