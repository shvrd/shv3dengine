//
// Created by thekatze on 16/06/18.
//

#define GLFW_INCLUDE_VULKAN

#include <GLFW/glfw3.h>
#include <iostream>
#include "GameContainer.h"

int main(int argc, char** argv) {

    auto gameContainer = new GameContainer();
    gameContainer->setWindow(new Window({1280, 960}, "Engine"));

    gameContainer->start();

    return 0;
}
