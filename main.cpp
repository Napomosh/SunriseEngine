#include "Logger.h"

int main() {
    SRFATAL("This is the log");
    SRERROR("This is the log");
    SRWARNING("This is the log");
    SRINFO("This is the log");
    SRDEBUG("This is the log");
    SRTRACE("This is the log");
    return 0;
}
