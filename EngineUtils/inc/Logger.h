//
// Created by Napomosh on 31.12.2023
//

#ifndef SUNRISEENGINE_LOGGER_H
#define SUNRISEENGINE_LOGGER_H

#include <vector>
#include <string>

#define LOG_WARNING_ENABLED 1
#define LOG_INFO_ENABLED 1
#define LOG_DEBUG_ENABLED 1
#define LOG_TRACE_ENABLED 1

// Disable debug and trace logging for release builds.
#if SRRELEASE == 1
#define LOG_DEBUG_ENABLED 0
#define LOG_TRACE_ENABLED 0
#endif

#define SRFATAL(message) EngineUtils::Logger::Log(EngineUtils::LOG_LEVEL_FATAL, message)
#define SRERROR(message) EngineUtils::Logger::Log(EngineUtils::LOG_LEVEL_ERROR, message)

#if LOG_WARNING_ENABLED == 1
#define SRWARNING(message) EngineUtils::Logger::Log(EngineUtils::LOG_LEVEL_WARNING, message)
#else
#define SRWARNING(message)
#endif

#if LOG_INFO_ENABLED == 1
#define SRINFO(message) EngineUtils::Logger::Log(EngineUtils::LOG_LEVEL_INFO, message)
#else
#define SRINFO(message)
#endif

#if LOG_DEBUG_ENABLED == 1
#define SRDEBUG(message) EngineUtils::Logger::Log(EngineUtils::LOG_LEVEL_DEBUG, message)
#else
#define SRDEBUG(message)
#endif

#if LOG_TRACE_ENABLED == 1
#define SRTRACE(message) EngineUtils::Logger::Log(EngineUtils::LOG_LEVEL_TRACE, message)
#else
#define SRTRACE(message)
#endif

namespace EngineUtils {
    const std::vector<std::string> log_levels {"FATAL: ", "ERROR: ", "WARNING: ", "INFO: ", "DEBUG: ", "TRACE: "};

    enum ELog_level {
        LOG_LEVEL_FATAL = 0,
        LOG_LEVEL_ERROR = 1,
        LOG_LEVEL_WARNING = 2,
        LOG_LEVEL_INFO = 3,
        LOG_LEVEL_DEBUG = 4,
        LOG_LEVEL_TRACE = 5
    };

    class Logger {
    public:
        static void Log(ELog_level log_level, const std::string &message);

    };
}


#endif //SUNRISEENGINE_LOGGER_H
