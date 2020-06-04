
#ifndef FILE_H_
#define FILE_H_
#include "../world/tile.h"
void saveWorld(struct Tile* map, const char* fileName);

struct Tile* openWorld(const char* fileName);
#endif
