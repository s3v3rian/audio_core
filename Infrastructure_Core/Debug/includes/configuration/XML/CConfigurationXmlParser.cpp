#include "CConfigurationXmlParser.h"

#include "list/CArrayVector.h"

CConfigurationXmlParser::CConfigurationXmlParser(const std::string &File, tinyxml2::XMLElement *pElement) {

    m_File = File;
    m_pDoc = new tinyxml2::XMLDocument();
    m_pRoot = pElement;
}

CConfigurationXmlParser::CConfigurationXmlParser(const std::string &File) {

    m_File = File;
    m_pDoc = new tinyxml2::XMLDocument();
    m_pRoot = nullptr;
}

CConfigurationXmlParser::~CConfigurationXmlParser() {

    delete m_pDoc;
}

bool CConfigurationXmlParser::Init() noexcept {

    if(nullptr != m_pRoot) {

        return true;
    }

    if(tinyxml2::XMLError::XML_SUCCESS != m_pDoc->Parse(m_File.c_str())) {

        return false;
    }

    m_pRoot = m_pDoc->RootElement();

    return true;
}

IConfigurationParser *CConfigurationXmlParser::GetSubParser(const std::string &Key) noexcept {

    tinyxml2::XMLElement *pElement = GetElement(Key);

    if(nullptr == pElement) {

        return nullptr;
    }

    return new CConfigurationXmlParser(m_File, pElement);
}

bool CConfigurationXmlParser::Get(const std::string &Key, const std::string &AttributeName, std::string &AttributeValue) noexcept {

    tinyxml2::XMLElement *pElement = GetElement(Key);

    if(nullptr == pElement) {

        return false;
    }

    bool bResult = true;
    const char *pchAnswer = nullptr;
    bResult = (tinyxml2::XMLError::XML_SUCCESS == pElement->QueryAttribute(AttributeName.c_str(), &pchAnswer));
    AttributeValue = pchAnswer;
    return bResult;
}

uint32_t CConfigurationXmlParser::GetNumberOfKeys(const std::string &Key) noexcept {

    uint32_t un32NumberOfKeys = 0;
    tinyxml2::XMLElement *pElement = GetElement(Key);

    if(nullptr == pElement) {

        return un32NumberOfKeys;
    }

    while(nullptr != pElement) {

        pElement = pElement->NextSiblingElement();
        un32NumberOfKeys++;
    }

    return un32NumberOfKeys;
}

tinyxml2::XMLElement *CConfigurationXmlParser::GetElement(const std::string &Key) noexcept {

    tinyxml2::XMLElement *pElement = m_pRoot;

    if("" == Key) {

        return pElement;
    }

    std::string Delimiter = ".";
    std::size_t unStartPosition = 0U;
    std::size_t unLastPosition = Key.find(Delimiter, unStartPosition);
    while(unLastPosition != std::string::npos) {

        std::string NextKey = Key.substr(unStartPosition, unLastPosition);

        uint32_t un32NumberOfElementsToSkip = 0;
        if(0 < NextKey.find("[")) {

            uint32_t un32Location = NextKey.find("]");
            if(0 < un32Location) {

                // TODO add support for multiple digits.
                un32NumberOfElementsToSkip = std::atoi(&NextKey.data()[un32Location - 1]);
            }
        }

        pElement = pElement->FirstChildElement(NextKey.c_str());

        while(0 < un32NumberOfElementsToSkip
              && nullptr != pElement) {

            pElement = pElement->NextSiblingElement(NextKey.c_str());
            un32NumberOfElementsToSkip--;
        }

        if(nullptr == pElement) {

            break;
        }

        unStartPosition = unLastPosition + Delimiter.length();
        unLastPosition = Key.find(Delimiter, unStartPosition);
    }

    return pElement;
}
