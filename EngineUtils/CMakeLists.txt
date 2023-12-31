message(Start EngineUtils)

cmake_minimum_required(VERSION 3.27)
project(EngineUtils)

set(CMAKE_CXX_STANDARD 23)
add_library(${PROJECT_NAME} OBJECT
        src/Logger.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC
        inc/
)
target_precompile_headers(EngineUtils PRIVATE
        <iostream>
        <Windows.h>)
message(Finish EngineUtils)