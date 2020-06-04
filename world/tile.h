#ifndef TILE_H
#define TILE_H
#include "SDL2/SDL.h"
struct Tile{
	char height;
	int x;
	int y;	
	SDL_Texture* texture;
	SDL_Rect rect;
};
#endif
