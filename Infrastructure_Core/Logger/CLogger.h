#ifndef INFRASTRUCTURE_CORE_LOGGER_CLOGGER_H
#define INFRASTRUCTURE_CORE_LOGGER_CLOGGER_H

#include "Disruptor/CDisruptor.h"

constexpr int32_t ROOT_LOGGER_ID				= 0;
constexpr int32_t ILLEGAL_LOGGER_ID				= -1;

class CLogger {

public:
    CLogger();
};

#endif // CLOGGER_H
