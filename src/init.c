#include "header/prototypes.h"

void loadGame(){
    initMaps();
    initPlayerSprite();
}

void cleanup(){
    cleanPlayer();
    cleanMaps();
    CloseWindow();
}