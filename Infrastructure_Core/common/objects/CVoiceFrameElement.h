#ifndef PCM_CORE_COMMON_OBJECTS_CVOICEFRAMEELEMENT_H
#define PCM_CORE_COMMON_OBJECTS_CVOICEFRAMEELEMENT_H

#include "disruptor/CDeepDisruptorElement.h"

class CVoiceFrameElement : public CDeepDisruptorElement {

    struct SVoiceFrameMetaData {

        bool m_bIsSessionFirst;
        bool m_bIsSessionLast;

        SVoiceFrameMetaData() {

            m_bIsSessionFirst = false;
            m_bIsSessionLast = false;
        }
    };

    public:

        CVoiceFrameElement(uint32_t un32Capacity);
        virtual ~CVoiceFrameElement();

        void Reset() noexcept override;

        bool SetBuffer(char *pchData, uint32_t un32Size) noexcept override;
        uint32_t GetBufferRemaining() noexcept;

        SVoiceFrameMetaData &GetMetaData();

    private:

        SVoiceFrameMetaData m_sMetaData;
};

#endif // CVOICEFRAMEELEMENT_H
