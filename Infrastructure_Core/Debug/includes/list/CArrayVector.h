#ifndef INFRASTRUCTURE_CORE_LIST_CARRAYVECTOR_H
#define INFRASTRUCTURE_CORE_LIST_CARRAYVECTOR_H

#include "list/IList.h"

template <typename T>

class CArrayVector : public IList<T> {

    public:

        CArrayVector(uint32_t un32Capacity) {

            m_un32Capacity = un32Capacity;
            m_un32CurrrentIndex = 0;

            m_pElements = new T[un32Capacity];
        }

        virtual ~CArrayVector() {

            delete [] m_pElements;
        }

        virtual bool Add(T t) noexcept override {

            if(m_un32CurrrentIndex >= m_un32Capacity) {

                return false;
            }

            m_pElements[m_un32CurrrentIndex++] = t;

            return true;
        }

        virtual bool Remove(uint32_t un32Index) noexcept override {

            if(m_un32CurrrentIndex <= un32Index) {

                return false;
            }

            for(uint32_t un32ArrayIndex = un32Index; un32ArrayIndex < (m_un32CurrrentIndex - 1); un32ArrayIndex++) {

                m_pElements[un32ArrayIndex] = m_pElements[un32ArrayIndex + 1];
            }

            m_un32CurrrentIndex--;

            return true;
        }

        virtual void Clear() noexcept override {

            m_un32CurrrentIndex = 0;
        }

        virtual T Get(uint32_t un32Index) noexcept override {

            if(m_un32CurrrentIndex <= un32Index) {

                return nullptr;
            }

            return m_pElements[un32Index];
        }

        virtual uint32_t Size() noexcept override {

            return m_un32CurrrentIndex;
        }

        virtual bool IsEmpty() noexcept override {

            return (0 == m_un32CurrrentIndex);
        }

    private:

        uint32_t m_un32Capacity;
        uint32_t m_un32CurrrentIndex;

        T *m_pElements;
};

#endif // CARRAYVECTOR_H
