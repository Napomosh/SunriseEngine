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

// Platform detection
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__)
#define SRPLATFORM_WINDOWS 1
#ifndef _WIN64
#error "64-bit is required on Windows!"
#endif
#endif

#endif //SUNRISEENGINE_GLOBAL_DEFINES_H
