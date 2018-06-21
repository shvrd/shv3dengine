//
// Created by thekatze on 16/06/18.
//

#ifndef SHV3DENGINE_GAMECONTAINER_H
#define SHV3DENGINE_GAMECONTAINER_H

#include "Window.h"
#include "Graphics/Graphics.h"

class GameContainer {
    Window *window;
    Graphics *graphics;

    void doGameLoop();

public:
    GameContainer();
    ~GameContainer();

    void setWindow(Window* window) {this->window = window;}

    void start();

};

#endif //SHV3DENGINE_GAMECONTAINER_H
