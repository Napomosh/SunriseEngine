//
// Created by Napomosh on 1.1.2024
//

#ifndef SUNRISEENGINE_BASEWINDOW_HPP
#define SUNRISEENGINE_BASEWINDOW_HPP

#include <string>

#include "glfw3.h"

namespace EngineUI {
    class BaseWindow{
    public:
        BaseWindow(int w, int h, const std::string& title);
        virtual ~BaseWindow();

        BaseWindow(const BaseWindow& ) = delete;
        BaseWindow& operator=(const BaseWindow& ) = delete;
        BaseWindow(BaseWindow&& ) = delete;
        BaseWindow operator=(BaseWindow&& ) = delete;

        inline int GetWidth() const;
        inline int GetHeight() const;
    protected:
        GLFWwindow* m_pWindow;
    private:
        int m_width;
        int m_height;
        std::string m_strTitle;
    };
}
#endif //SUNRISEENGINE_BASEWINDOW_HPP
