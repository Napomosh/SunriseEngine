//
// Created by Napomosh on 1.1.2024
//

#ifndef SUNRISEENGINE_GUICONTROLLER_HPP
#define SUNRISEENGINE_GUICONTROLLER_HPP

#include <string>

namespace EngineUI {
    class GuiController {
    public:
        GuiController();
        ~GuiController();
        bool Startup();
        bool Shutdown();

        bool CreateNewWindow(const std::string& name);
    private:
        static void ErrorCallback(int error, const char* description);
    };
}

#endif //SUNRISEENGINE_GUICONTROLLER_HPP
