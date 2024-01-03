message(Start EngineCore)

cmake_minimum_required(VERSION 3.27)
project(EngineCore)

set(CMAKE_CXX_STANDARD 23)

add_library(${PROJECT_NAME} OBJECT
        src/PlatformCore.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC
        inc/
)
target_precompile_headers(EngineCore PRIVATE
        <Windows.h>)
message(Finish EngineCore)