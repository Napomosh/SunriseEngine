//
// Created by Napomosh on 1.1.2024
//

#include "BaseWindow.hpp"
#include "../../EngineUtils/inc/Logger.hpp"
#include "../../EngineUtils/inc/global_defines.h"

namespace EngineUI{

    BaseWindow::BaseWindow(int w, int h, const std::string& title) : m_width(w), m_height(h), m_strTitle(title) {
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

        m_pWindow = glfwCreateWindow(m_width, m_height, m_strTitle.c_str()
                                     , nullptr, nullptr);
        if (!m_pWindow) {
            LOG_ERROR("Window " + m_strTitle + " cant be created due an error");
        }
        while (!glfwWindowShouldClose(m_pWindow)) {
            glfwPollEvents();
        }
    }

    BaseWindow::~BaseWindow() {
        glfwDestroyWindow(m_pWindow);
    }

    int BaseWindow::GetWidth() const {
        return m_width;
    }

    int BaseWindow::GetHeight() const {
        return m_height;
    }
}