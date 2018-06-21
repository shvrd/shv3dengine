//
// Created by thekatze on 19/06/18.
//

#include <cstdlib>
#include "Window.h"

Window::Window(Dimensions windowSize, char *windowTitle) {
    glfwInit();

    if (!glfwVulkanSupported()) {
        //TODO: Replace this with fancy logging
        exit(1);
    }

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    this->window = glfwCreateWindow(windowSize.width, windowSize.height, "Vulkan window", nullptr, nullptr);
}

Window::~Window() {
    glfwDestroyWindow(this->window);
    glfwTerminate();
}