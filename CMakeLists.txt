message(Start SunriseEngine)

cmake_minimum_required(VERSION 3.27)
project(SunriseEngine)

set(CMAKE_CXX_STANDARD 23)
add_compile_options(-Wvarargs -Wall -Werror)
INCLUDE_DIRECTORIES(External/glfw/include/GLFW/)
INCLUDE_DIRECTORIES(External/vulkan/Include/)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_executable(${PROJECT_NAME} main.cpp)
add_subdirectory(External/glfw/)

add_subdirectory(EngineUtils)
add_subdirectory(EngineCore)
add_subdirectory(EngineUI)

target_link_libraries(${PROJECT_NAME}
glfw
EngineUtils
EngineCore
EngineUI)

message(Finish SunriseEngine)
