cmake_minimum_required(VERSION 3.16)
project(wiseRender LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(wiseRender
    src/wiseRender/main.cpp
    src/wiseRender/windows/window.cpp
    libs/glad/src/glad.c
)

target_include_directories(wiseRender PRIVATE
    libs/glad/src
    src/wiseRender/windows
)

find_package(glfw3 3.3 REQUIRED)
target_link_libraries(wiseRender PRIVATE glfw ${CMAKE_DL_LIBS})
