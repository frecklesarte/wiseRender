// src/wiseRender/main.cpp
#include "windows/window.hpp"
#include <GLFW/glfw3.h>

int main()
{
    if (!glfwInit)
        return 1;

    GLFWwindow* window = createWindow(1280, 720,"wiseRender");
    if (!window) {
        glfwTerminate();
        return 1;
    }

    // Initialize GLAD here, after the context is current.
    // Then run the render loop.

    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
