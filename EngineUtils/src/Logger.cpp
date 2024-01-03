//
// Created by Napomosh on 31.12.2023
//

#include "Logger.hpp"

namespace EngineUtils {
    void Logger::Log(ELogLevel logLevel, const std::string& message) {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        int whiteColor = FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED;
        int color = whiteColor;
        switch(logLevel){
            case(LOG_LEVEL_FATAL):
                color = FOREGROUND_RED;
                break;
            case(LOG_LEVEL_ERROR):
                color = FOREGROUND_RED | FOREGROUND_BLUE;
                break;
            case(LOG_LEVEL_WARNING):
                color = FOREGROUND_RED | FOREGROUND_GREEN;
                break;
            case(LOG_LEVEL_INFO):
                color = whiteColor;
                break;
            case(LOG_LEVEL_DEBUG):
                color = FOREGROUND_BLUE;
                break;
            case(LOG_LEVEL_TRACE):
                color = FOREGROUND_GREEN;
                break;
        }
        SetConsoleTextAttribute(hConsole, color);
        std::cout << arrLogLevels[logLevel] << message << "\n";
        SetConsoleTextAttribute(hConsole, whiteColor);
    }
}