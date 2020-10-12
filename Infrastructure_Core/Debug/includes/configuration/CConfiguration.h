#ifndef INFRASTRUCTURE_CORE_CONFIGURATION_CCONFIGURATION_H
#define INFRASTRUCTURE_CORE_CONFIGURATION_CCONFIGURATION_H

#include <cstdint>
#include <map>
#include "list/IList.h"
#include "configuration/IConfigurationParser.h"

class CConfiguration {

    public:

        static CConfiguration *GetInstance(const std::string &FilePath) noexcept;

        virtual ~CConfiguration();

        uint32_t GetNumberOfKeys(const std::string &Key) noexcept;

        CConfiguration *GetSubConfiguration(const std::string &Key, const std::string &AttributeName, const std::string &AttributeValue) noexcept;
        CConfiguration *GetSubConfiguration(const std::string &Key) noexcept;
        bool GetSubConfigurationList(const std::string &Key, IList<CConfiguration*> *pcConfigurationList) noexcept;

        bool Get(const std::string &Key, const std::string &AttributeName, std::string &Value, std::string DefaultValue) noexcept;
        bool Get(const std::string &Key, const std::string &AttributeName, std::string &Value) noexcept;
        bool Get(const std::string &Key, const std::string &AttributeName, uint64_t &run64Value, uint64_t un64DefaultValue) noexcept;
        bool Get(const std::string &Key, const std::string &AttributeName, uint64_t &run64Value) noexcept;
        bool Get(const std::string &Key, const std::string &AttributeName, int64_t &rn64Value, int64_t n64DefaultValue) noexcept;
        bool Get(const std::string &Key, const std::string &AttributeName, int64_t &rn64Value) noexcept;
        bool Get(const std::string &Key, const std::string &AttributeName, uint32_t &run32Value, uint32_t un32DefaultValue) noexcept;
        bool Get(const std::string &Key, const std::string &AttributeName, uint32_t &run32Value) noexcept;
        bool Get(const std::string &Key, const std::string &AttributeName, int32_t &rn32Value, int32_t n32DefaultValue) noexcept;
        bool Get(const std::string &Key, const std::string &AttributeName, int32_t &rn32Value) noexcept;
        bool Get(const std::string &Key, const std::string &AttributeName, uint16_t &run16Value, uint16_t un16DefaultValue) noexcept;
        bool Get(const std::string &Key, const std::string &AttributeName, uint16_t &run16Value) noexcept;
        bool Get(const std::string &Key, const std::string &AttributeName, int16_t &rn16Value, int16_t n16DefaultValue) noexcept;
        bool Get(const std::string &Key, const std::string &AttributeName, int16_t &rn16Value) noexcept;
        bool Get(const std::string &Key, const std::string &AttributeName, uint8_t &run8Value, uint8_t un8DefaultValue) noexcept;
        bool Get(const std::string &Key, const std::string &AttributeName, uint8_t &run8Value) noexcept;
        bool Get(const std::string &Key, const std::string &AttributeName, int8_t &rn8Value, int8_t n8DefaultValue) noexcept;
        bool Get(const std::string &Key, const std::string &AttributeName, int8_t &rn8Value) noexcept;
        bool Get(const std::string &Key, const std::string &AttributeName, bool &rbValue, bool bDefaultValue) noexcept;
        bool Get(const std::string &Key, const std::string &AttributeName, bool &rbValue) noexcept;
        bool Get(const std::string &Key, const std::string &AttributeName, double &rdValue, double dDefaultValue) noexcept;
        bool Get(const std::string &Key, const std::string &AttributeName, double &rdValue) noexcept;
        bool Get(const std::string &Key, const std::string &AttributeName, float &rfValue, float fDefaultValue) noexcept;
        bool Get(const std::string &Key, const std::string &AttributeName, float &rfValue) noexcept;

    private:

        CConfiguration(IConfigurationParser *pcParser);
        CConfiguration();
        bool Init(const std::string &File) noexcept;

        static std::map<std::string, CConfiguration*> m_Configurations; // TODO Change to IMap.

        IConfigurationParser *m_pcParser;
};

#endif // CCONFIGURATION_H
