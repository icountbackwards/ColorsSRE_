#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include <SDL3/SDL.h>
#include "instance.h"

struct WindowObject {
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Texture* framebuffer;
    uint32_t* pixels;
    uint32_t width;
    uint32_t height;
    uint32_t framebufferSize; // Size of uint32_t* pixels => width * height
    bool isRunning; 
};

typedef struct WindowObject WindowObject;

void initWindowObject(WindowObject* windowObject, uint32_t width, uint32_t height, Instance* instance);
void processEvent(WindowObject* windowObject, Instance* instance);
void presentScreen(WindowObject* windowObject, Instance* instance);
void destroyWindow(WindowObject* windowObject, Instance* instance); 