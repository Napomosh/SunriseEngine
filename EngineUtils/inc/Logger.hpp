//
// Created by Napomosh on 31.12.2023
//

#ifndef SUNRISEENGINE_LOGGER_HPP
#define SUNRISEENGINE_LOGGER_HPP

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

#define LOG_FATAL(message) EngineUtils::Logger::Log(EngineUtils::LOG_LEVEL_FATAL, message)
#define LOG_ERROR(message) EngineUtils::Logger::Log(EngineUtils::LOG_LEVEL_ERROR, message)

#if LOG_WARNING_ENABLED == 1
#define LOG_WARNING(message) EngineUtils::Logger::Log(EngineUtils::LOG_LEVEL_WARNING, message)
#else
#define LOG_WARNING(message)
#endif

#if LOG_INFO_ENABLED == 1
#define LOG_INFO(message) EngineUtils::Logger::Log(EngineUtils::LOG_LEVEL_INFO, message)
#else
#define LOG_INFO(message)
#endif

#if LOG_DEBUG_ENABLED == 1
#define LOG_DEBUG(message) EngineUtils::Logger::Log(EngineUtils::LOG_LEVEL_DEBUG, message)
#else
#define LOG_DEBUG(message)
#endif

#if LOG_TRACE_ENABLED == 1
#define LOG_TRACE(message) EngineUtils::Logger::Log(EngineUtils::LOG_LEVEL_TRACE, message)
#else
#define LOG_TRACE(message)
#endif

namespace EngineUtils {
    const std::vector<std::string> arrLogLevels {"FATAL: ", "ERROR: ", "WARNING: ", "INFO: ", "DEBUG: ", "TRACE: "};

    enum ELogLevel {
        LOG_LEVEL_FATAL = 0,
        LOG_LEVEL_ERROR = 1,
        LOG_LEVEL_WARNING = 2,
        LOG_LEVEL_INFO = 3,
        LOG_LEVEL_DEBUG = 4,
        LOG_LEVEL_TRACE = 5
    };

    class Logger {
    public:
        static void Log(ELogLevel logLevel, const std::string &message);

    };
}


#endif //SUNRISEENGINE_LOGGER_HPP
