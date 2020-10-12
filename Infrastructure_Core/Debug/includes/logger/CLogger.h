#ifndef INFRASTRUCTURE_CORE_LOGGER_CLOGGER_H
#define INFRASTRUCTURE_CORE_LOGGER_CLOGGER_H

#include <iostream>
#include "disruptor/CDisruptor.h"

constexpr int32_t ROOT_LOGGER_ID				= 0;
constexpr int32_t ILLEGAL_LOGGER_ID				= -1;

enum class EN_LoggerLevel {

    TRACE,
    DEBUG,
    INFO,
    WARN,
    ERROR,
};

// Awesome Macros.
#define LOGGER			CLogger::GetInstance()
#define TRC(...)		CLogger::GetInstance().Log(EN_LoggerLevel::TRACE, __FUNCTION__, __LINE__, ##__VA_ARGS__)
#define DBG(...)		CLogger::GetInstance().Log(EN_LoggerLevel::DEBUG, __FUNCTION__, __LINE__, ##__VA_ARGS__)
#define INF(...)		CLogger::GetInstance().Log(EN_LoggerLevel::INFO, __FUNCTION__, __LINE__, ##__VA_ARGS__)
#define WRN(...)		CLogger::GetInstance().Log(EN_LoggerLevel::WARN, __FUNCTION__, __LINE__, ##__VA_ARGS__)
#define ERR(...)		CLogger::GetInstance().Log(EN_LoggerLevel::ERROR, __FUNCTION__, __LINE__, ##__VA_ARGS__)

class CLogger {

    public:

        static CLogger &GetInstance() noexcept;

        virtual ~CLogger();

        bool Init(const std::string &File) noexcept;

        void Log(EN_LoggerLevel eLevel, const char *pchFunction, int32_t n32Line, int32_t n32LoggerId, const std::string &Text) noexcept;
        void Log(EN_LoggerLevel eLevel, const char *pchFunction, int32_t n32Line, const std::string &Text) noexcept;

        int32_t GetLoggerId(const std::string &Name) noexcept;

    private:

        CLogger();

        CDisruptor *m_pcDisruptor;
};

#endif // CLOGGER_H
