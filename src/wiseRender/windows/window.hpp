#pragma once
#include <GLFW/glfw3.h>

struct GLFWwindow;

GLFWwindow* createWindow(int width, int height, const char* title);
