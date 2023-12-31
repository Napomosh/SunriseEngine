message(Start SunriseEngine)

cmake_minimum_required(VERSION 3.27)
project(SunriseEngine)

set(CMAKE_CXX_STANDARD 23)
add_compile_options(-Wvarargs -Wall -Werror)
add_executable(${PROJECT_NAME} main.cpp

)
add_subdirectory(EngineUtils)
target_link_libraries(${PROJECT_NAME}
EngineUtils)

message(Finish SunriseEngine)
