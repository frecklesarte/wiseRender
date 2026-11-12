#include "window.hpp"
#include <glad/glad.h>
#include <GLFW/glfw3.h>



GLFWwindow* createWindow(int width, int height, const char* title)
{
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    
    GLFWwindow* window = glfwCreateWindow(width, height, title, nullptr, nullptr);
    if (window)
        glfwMakeContextCurrent(window);

    return window;
}

