cmake_minimum_required(VERSION 3.27)
project(EngineUI)

set(CMAKE_CXX_STANDARD 23)
add_library(${PROJECT_NAME} OBJECT
        src/GuiController.cpp
        src/BaseWindow.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC
        inc/
)
target_precompile_headers(EngineUI PRIVATE
        <Windows.h>)