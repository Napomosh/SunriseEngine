//
// Created by Napomosh on 31.12.2023
//

#include "Logger.h"

namespace EngineUtils {
    void Logger::Log(ELog_level log_level, const std::string& message) {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        int white_color = FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED;
        int color = white_color;
        switch(log_level){
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
                color = white_color;
                break;
            case(LOG_LEVEL_DEBUG):
                color = FOREGROUND_BLUE;
                break;
            case(LOG_LEVEL_TRACE):
                color = FOREGROUND_GREEN;
                break;
        }
        SetConsoleTextAttribute(hConsole, color);
        std::cout << log_levels[log_level] << message << "\n";
        SetConsoleTextAttribute(hConsole, white_color);
    }
}