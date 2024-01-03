//
// Created by Napomosh on 31.12.2023
//

#ifndef SUNRISEENGINE_PLATFORMCORE_HPP
#define SUNRISEENGINE_PLATFORMCORE_HPP

#include <string>
#include "../../EngineUI/inc/GuiController.hpp"

namespace EngineCore {

    class PlatformCore {
    public:
        PlatformCore();
        ~PlatformCore();
        bool PlatformStart();
        bool CreateNewWindow(const std::string& name);
    private:
        EngineUI::GuiController* pGuiController;
    };

} // EngineCore

#endif //SUNRISEENGINE_PLATFORMCORE_HPP
