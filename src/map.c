#include "header/prototypes.h"

Map map;

void initMaps(void){
    map.background = LoadTexture("background.png");
}

Texture2D getBackground(void) {
    return map.background;
}

void cleanMaps(void){
    UnloadTexture(map.background);
}