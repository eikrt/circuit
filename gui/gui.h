#ifndef APP_H
#define APP_H
#include "SDL2/SDL.h"

void init();
void loop(SDL_Window *window, SDL_Surface *screenSurface, SDL_Renderer* renderer);
int quit(SDL_Window *window);
#endif
