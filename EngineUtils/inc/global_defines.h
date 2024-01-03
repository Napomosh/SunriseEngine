//
// Created by Napomosh on 31.12.2023
//

#ifndef SUNRISEENGINE_GLOBAL_DEFINES_H
#define SUNRISEENGINE_GLOBAL_DEFINES_H

#if DCMAKE_BUILD_TYPE == Debug
#define SRDEBUG 1
#else
#define SRRELEASE 1
#endif

#ifdef EXPORT
// Exports
#define SRAPI __declspec(dllexport)
#else
// Imports
#define SRAPI __declspec(dllimport)
#endif

#endif //SUNRISEENGINE_GLOBAL_DEFINES_H
