//
// Created by thekatze on 16/06/18.
//

#include "GameContainer.h"

GameContainer::GameContainer() : window(nullptr) {
    //TODO: Initialize Logger
}

GameContainer::~GameContainer() {
    this->graphics->~Graphics();

    delete window;
    window = nullptr;
}

void GameContainer::start() {

    this->graphics = new Graphics();

    if (window != nullptr)
        this->doGameLoop();
}

void GameContainer::doGameLoop() {
    while (!this->window->shouldClose()){
        glfwPollEvents();
    }

    this->~GameContainer();
}
