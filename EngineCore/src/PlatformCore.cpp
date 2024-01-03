//
// Created by Napomosh on 31.12.2023
//

#include "../inc/PlatformCore.hpp"

using namespace EngineUI;
namespace EngineCore {
    bool PlatformCore::PlatformStart() {
        return CreateNewWindow("Sunrise engine");
    }

    PlatformCore::PlatformCore() : pGuiController(new GuiController()) {

    }

    PlatformCore::~PlatformCore() {
        delete pGuiController;
    }

    bool PlatformCore::CreateNewWindow(const std::string &name) {
        return pGuiController->CreateNewWindow(name);
    }
} // EngineCore