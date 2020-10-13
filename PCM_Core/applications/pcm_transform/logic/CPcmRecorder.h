#ifndef PCM_CORE_APPLICATIONS_PCM_TRANSFORM_LOGIC_CPCMRECORDER_H
#define PCM_CORE_APPLICATIONS_PCM_TRANSFORM_LOGIC_CPCMRECORDER_H

#include "components/IDevice.h"

class CPcmRecorder {

    public:

        CPcmRecorder();

        void SetDevice(IDevice *pcDevice) noexcept;

    private:

        IDevice *m_pcRecorderDevice;
};

#endif // CPCMRECORDER_H
