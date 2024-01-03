//
// Created by Napomosh on 1.1.2024
//

#define GLFW_INCLUDE_VULKAN
#include "glfw3.h"

#include "GuiController.hpp"
#include "../../EngineUtils/inc/Logger.hpp"
#include "BaseWindow.hpp"

namespace  EngineUI {
    bool EngineUI::GuiController::Startup() {
        if (!glfwInit()) {
            LOG_FATAL("Start window cant be created due an error.");
            return false;
        }
        glfwSetErrorCallback(ErrorCallback);
        return true;
    }

    bool EngineUI::GuiController::Shutdown() {
        glfwTerminate();
        return true;
    }

    EngineUI::GuiController::GuiController() {
        Startup();
    }

    EngineUI::GuiController::~GuiController() {
        Shutdown();
    }

    void EngineUI::GuiController::ErrorCallback(int error, const char* description) {
        LOG_ERROR(description);
    }

    bool EngineUI::GuiController::CreateNewWindow(const std::string& name) {
        BaseWindow window(1024, 720, name);
        return true;
    }
}
