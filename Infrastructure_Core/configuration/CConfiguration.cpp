#include "CConfiguration.h"

#include "configuration/XML/CConfigurationXmlParser.h"

CConfiguration *CConfiguration::GetInstance(const std::string &FilePath) noexcept {

    CConfiguration *pcConfiguration = m_Configurations[FilePath];

    if(nullptr == pcConfiguration) {

        pcConfiguration = new CConfiguration();
        if(false == pcConfiguration->Init(FilePath)) {

            delete pcConfiguration;
            pcConfiguration = nullptr;
        }

        m_Configurations[FilePath] = pcConfiguration;
    }

    return pcConfiguration;
}

CConfiguration::~CConfiguration() {

    delete m_pcParser;
}

uint32_t CConfiguration::GetNumberOfKeys(const std::string &Key) noexcept {

    return m_pcParser->GetNumberOfKeys(Key);
}

CConfiguration *CConfiguration::GetSubConfiguration(const std::string &Key, const std::string &AttributeName, const std::string &AttributeValue) noexcept {

    uint32_t un32NumberOfKeys = GetNumberOfKeys(Key);

    if(0 == un32NumberOfKeys) {

        return nullptr;
    }

    CConfiguration *pcSubConfiguration = nullptr;

    for(uint32_t un32Index = 0; un32Index < un32NumberOfKeys; un32Index++) {

        CConfiguration *pcConfiguration = GetSubConfiguration(Key + "[" + std::to_string(un32Index) + "]");

        std::string Value;
        if(true == pcConfiguration->Get("", AttributeName, Value)) {

            if(Value == AttributeValue) {

                pcSubConfiguration = pcConfiguration;
                break;
            }
        }

        delete pcConfiguration;
    }

    return pcSubConfiguration;
}

CConfiguration *CConfiguration::GetSubConfiguration(const std::string &Key) noexcept {

    IConfigurationParser *pcParser = m_pcParser->GetSubParser(Key);

    if(nullptr == pcParser) {

        return nullptr;
    }

    return new CConfiguration(pcParser);
}

bool CConfiguration::GetSubConfigurationList(const std::string &Key, IList<CConfiguration *> *pcConfigurationList) noexcept {

    if(nullptr == pcConfigurationList) {

        return false;
    }

    uint32_t un32NumberOfKeys = m_pcParser->GetNumberOfKeys(Key);

    if(0 == un32NumberOfKeys) {

        return false;
    }

    for(uint32_t un32Index = 0; un32Index < un32NumberOfKeys; un32Index++) {

        pcConfigurationList->Add(GetSubConfiguration(Key + "[" + std::to_string(un32Index) + "]"));
    }

    return true;
}

bool CConfiguration::Get(const std::string &Key, const std::string &AttributeName, std::string &Value, std::string DefaultValue) noexcept {

    bool bResult = m_pcParser->Get(Key, AttributeName, Value);
    if(false == bResult) {

        Value = DefaultValue;
    }
    return bResult;
}

bool CConfiguration::Get(const std::string &Key, const std::string &AttributeName, std::string &Value) noexcept {

    return m_pcParser->Get(Key, AttributeName, Value);
}

bool CConfiguration::Get(const std::string &Key, const std::string &AttributeName, uint64_t &run64Value, uint64_t un64DefaultValue) noexcept {

    std::string Value;
    bool bResult = Get(Key, AttributeName, Value);
    if(true == bResult) {

        run64Value = std::stoull(Value.c_str());

    } else {

        run64Value = un64DefaultValue;
    }
    return bResult;
}

bool CConfiguration::Get(const std::string &Key, const std::string &AttributeName, uint64_t &run64Value) noexcept {

    std::string Value;
    bool bResult = Get(Key, AttributeName, Value);
    if(true == bResult) {

        run64Value = std::stoull(Value.c_str());
    }
    return bResult;
}

bool CConfiguration::Get(const std::string &Key, const std::string &AttributeName, int64_t &rn64Value, int64_t n64DefaultValue) noexcept {

    std::string Value;
    bool bResult = Get(Key, AttributeName, Value);
    if(true == bResult) {

        rn64Value = std::stoll(Value.c_str());

    } else {

        rn64Value = n64DefaultValue;
    }
    return bResult;
}

bool CConfiguration::Get(const std::string &Key, const std::string &AttributeName, int64_t &rn64Value) noexcept {

    std::string Value;
    bool bResult = Get(Key, AttributeName, Value);
    if(true == bResult) {

        rn64Value = std::stoll(Value.c_str());
    }
    return bResult;
}

bool CConfiguration::Get(const std::string &Key, const std::string &AttributeName, uint32_t &run32Value, uint32_t un32DefaultValue) noexcept {

    std::string Value;
    bool bResult = Get(Key, AttributeName, Value);
    if(true == bResult) {

        run32Value = std::stoul(Value.c_str());

    } else {

        run32Value = un32DefaultValue;
    }
    return bResult;
}

bool CConfiguration::Get(const std::string &Key, const std::string &AttributeName, uint32_t &run32Value) noexcept {

    std::string Value;
    bool bResult = Get(Key, AttributeName, Value);
    if(true == bResult) {

        run32Value = std::stoul(Value.c_str());
    }
    return bResult;
}

bool CConfiguration::Get(const std::string &Key, const std::string &AttributeName, int32_t &rn32Value, int32_t n32DefaultValue) noexcept {

    std::string Value;
    bool bResult = Get(Key, AttributeName, Value);
    if(true == bResult) {

        rn32Value = std::stoi(Value.c_str());

    } else {

        rn32Value = n32DefaultValue;
    }
    return bResult;
}

bool CConfiguration::Get(const std::string &Key, const std::string &AttributeName, int32_t &rn32Value) noexcept {

    std::string Value;
    bool bResult = Get(Key, AttributeName, Value);
    if(true == bResult) {

        rn32Value = std::stoi(Value.c_str());
    }
    return bResult;
}

bool CConfiguration::Get(const std::string &Key, const std::string &AttributeName, uint16_t &run16Value, uint16_t un16DefaultValue) noexcept {

    std::string Value;
    bool bResult = Get(Key, AttributeName, Value);
    if(true == bResult) {

        run16Value = std::stoul(Value.c_str());

    } else {

        run16Value = un16DefaultValue;
    }
    return bResult;
}

bool CConfiguration::Get(const std::string &Key, const std::string &AttributeName, uint16_t &run16Value) noexcept {

    std::string Value;
    bool bResult = Get(Key, AttributeName, Value);
    if(true == bResult) {

        run16Value = std::stoul(Value.c_str());
    }
    return bResult;
}

bool CConfiguration::Get(const std::string &Key, const std::string &AttributeName, int16_t &rn16Value, int16_t n16DefaultValue) noexcept {

    std::string Value;
    bool bResult = Get(Key, AttributeName, Value);
    if(true == bResult) {

        rn16Value = std::stoi(Value.c_str());

    } else {

        rn16Value = n16DefaultValue;
    }
    return bResult;
}

bool CConfiguration::Get(const std::string &Key, const std::string &AttributeName, int16_t &rn16Value) noexcept {

    std::string Value;
    bool bResult = Get(Key, AttributeName, Value);
    if(true == bResult) {

        rn16Value = std::stoi(Value.c_str());
    }
    return bResult;
}

bool CConfiguration::Get(const std::string &Key, const std::string &AttributeName, uint8_t &run8Value, uint8_t un8DefaultValue) noexcept {

    std::string Value;
    bool bResult = Get(Key, AttributeName, Value);
    if(true == bResult) {

        run8Value = std::stoul(Value.c_str());

    } else {

        run8Value = un8DefaultValue;
    }
    return bResult;
}

bool CConfiguration::Get(const std::string &Key, const std::string &AttributeName, uint8_t &run8Value) noexcept {

    std::string Value;
    bool bResult = Get(Key, AttributeName, Value);
    if(true == bResult) {

        run8Value = std::stoul(Value.c_str());
    }
    return bResult;
}

bool CConfiguration::Get(const std::string &Key, const std::string &AttributeName, int8_t &rn8Value, int8_t n8DefaultValue) noexcept {

    std::string Value;
    bool bResult = Get(Key, AttributeName, Value);
    if(true == bResult) {

        rn8Value = std::stoi(Value.c_str());

    } else {

        rn8Value = n8DefaultValue;
    }
    return bResult;
}

bool CConfiguration::Get(const std::string &Key, const std::string &AttributeName, int8_t &rn8Value) noexcept {

    std::string Value;
    bool bResult = Get(Key, AttributeName, Value);
    if(true == bResult) {

        rn8Value = std::stoi(Value.c_str());
    }
    return bResult;
}

bool CConfiguration::Get(const std::string &Key, const std::string &AttributeName, bool &rbValue, bool bDefaultValue) noexcept {

    std::string Value;
    bool bResult = Get(Key, AttributeName, Value);
    if(true == bResult) {

        rbValue = ("true" == Value) ? true : false;

    } else {

        rbValue = bDefaultValue;
    }
    return bResult;
}

bool CConfiguration::Get(const std::string &Key, const std::string &AttributeName, bool &rbValue) noexcept {

    std::string Value;
    bool bResult = Get(Key, AttributeName, Value);
    if(true == bResult) {

        rbValue = ("true" == Value) ? true : false;
    }
    return bResult;
}

bool CConfiguration::Get(const std::string &Key, const std::string &AttributeName, double &rdValue, double dDefaultValue) noexcept {

    std::string Value;
    bool bResult = Get(Key, AttributeName, Value);
    if(true == bResult) {

        rdValue = std::stod(Value.c_str());

    } else {

        rdValue = dDefaultValue;
    }
    return bResult;
}

bool CConfiguration::Get(const std::string &Key, const std::string &AttributeName, double &rdValue) noexcept {

    std::string Value;
    bool bResult = Get(Key, AttributeName, Value);
    if(true == bResult) {

        rdValue = std::stod(Value.c_str());
    }
    return bResult;
}

bool CConfiguration::Get(const std::string &Key, const std::string &AttributeName, float &rfValue, float fDefaultValue) noexcept {

    std::string Value;
    bool bResult = Get(Key, AttributeName, Value);
    if(true == bResult) {

        rfValue = std::stof(Value.c_str());

    } else {

        rfValue = fDefaultValue;
    }
    return bResult;
}

bool CConfiguration::Get(const std::string &Key, const std::string &AttributeName, float &rfValue) noexcept {

    std::string Value;
    bool bResult = Get(Key, AttributeName, Value);
    if(true == bResult) {

        rfValue = std::stof(Value.c_str());
    }
    return bResult;
}

CConfiguration::CConfiguration(IConfigurationParser *pcParser) {

    m_pcParser = pcParser;
}

CConfiguration::CConfiguration() {

    // No implementation.
}

bool CConfiguration::Init(const std::string &File) noexcept {

    bool bResult = false;

    // Identify the file type and load the relevant parser.
    if(0 < File.find(".xml")) {

        m_pcParser = new CConfigurationXmlParser(File);
        bResult = m_pcParser->Init();
    }

    return bResult;
}
