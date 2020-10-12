#ifndef PCM_CORE_CONFIGURATION_ICONFIGURATIONPARSER_H
#define PCM_CORE_CONFIGURATION_ICONFIGURATIONPARSER_H

#include <string>

class IConfigurationParser {

    public:

        IConfigurationParser();
        virtual ~IConfigurationParser();

        virtual bool Init() = 0;
        virtual IConfigurationParser *GetSubParser(const std::string &Key) = 0;
        virtual bool Get(const std::string &Key, const std::string &AttributeName, std::string &AttributeValue) = 0;
        virtual uint32_t GetNumberOfKeys(const std::string &Key) = 0;
};

#endif // ICONFIGURATIONPARSER_H
