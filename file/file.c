#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include "../world/tile.h"




void saveWorld(struct Tile* map, const char * fileName)
{
  FILE* fp = fopen(fileName,"wb");

	for (int i = 0; i < SIZE; i++){
		for (int j = 0; j < SIZE; j++){
  			fwrite( &map[i*j], sizeof(struct Tile), 1, fp);
		}
	}
  fclose(fp);
}
struct Tile* openWorld(const char * fileName)
{
	FILE* fp = fopen(fileName,"rb");
	if( !fp ) return 0;
	int n = 0;
	static struct Tile map[SIZE*SIZE];
	struct Tile tile;

	for (n=0; !feof(fp); ++n) {
		fread(&tile, sizeof(struct Tile), 1, fp);
		map[n] = tile; 
	}
fclose(fp);
return map;
}

