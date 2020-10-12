#ifndef INFRASTRUCTURE_CORE_CONFIGURATION_XML_CCONFIGURATIONXMLPARSER_H
#define INFRASTRUCTURE_CORE_CONFIGURATION_XML_CCONFIGURATIONXMLPARSER_H

#include "tinyxml2.h"
#include "configuration/IConfigurationParser.h"

class CConfigurationXmlParser : public IConfigurationParser {

    public:

        CConfigurationXmlParser(const std::string &File, tinyxml2::XMLElement *pElement);
        CConfigurationXmlParser(const std::string &File);
        virtual ~CConfigurationXmlParser();

        bool Init() noexcept override;
        IConfigurationParser *GetSubParser(const std::string &Key) noexcept override;
        bool Get(const std::string &Key, const std::string &AttributeName, std::string &AttributeValue) noexcept override;
        uint32_t GetNumberOfKeys(const std::string &Key) noexcept override;

    private:

        tinyxml2::XMLElement *GetElement(const std::string &Key) noexcept;

        tinyxml2::XMLDocument *m_pDoc;
        tinyxml2::XMLElement *m_pRoot;
        std::string m_File;
};

#endif // CCONFIGURATIONXMLPARSER_H
