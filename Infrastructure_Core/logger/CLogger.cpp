#include "CLogger.h"

CLogger &CLogger::GetInstance() noexcept {

    static CLogger cInstance;
    return cInstance;
}

CLogger::~CLogger() {

    if(nullptr != m_pcDisruptor) {

        delete m_pcDisruptor;
    }
}

bool CLogger::Init(const std::string &File) noexcept {

    ;
}

void CLogger::Log(EN_LoggerLevel eLevel, const char *pchFunction, int32_t n32Line, int32_t n32LoggerId, const std::string &Text) noexcept {

}

void CLogger::Log(EN_LoggerLevel eLevel, const char *pchFunction, int32_t n32Line, const std::string &Text) noexcept {

}

int32_t CLogger::GetLoggerId(const std::string &Name) noexcept {

}

CLogger::CLogger() {

    // No implementation.
}
