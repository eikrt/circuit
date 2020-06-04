#ifndef IMGLOAD_H
#define IMGLOAD_H
#include "SDL2/SDL.h"

SDL_Surface* loadImage(SDL_Surface* screenSurface, const char* path);
SDL_Texture* colorTexture(SDL_Texture* texture, int rgb[]);
SDL_Texture* loadTexture(SDL_Surface* screenSurface, SDL_Renderer* renderer, const char* path, int* rgb);
#endif
