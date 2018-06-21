//
// Created by thekatze on 19/06/18.
//

#ifndef SHV3DENGINE_WINDOW_H
#define SHV3DENGINE_WINDOW_H

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include "Types.h"

class Window {
    GLFWwindow* window;
    Dimensions windowSize;

public:
    Window(Dimensions windowSize, char* windowTitle);
    ~Window();

    Dimensions getDimensions() {return this->windowSize;};
    void setDimensions(const Dimensions newDimensions) {this->windowSize = newDimensions;}

    void setWindowTitle(const char* title);
    bool shouldClose() {return glfwWindowShouldClose(this->window);}

    GLFWwindow* getWindowHandle() {return this->window;}
};


#endif //SHV3DENGINE_WINDOW_H
