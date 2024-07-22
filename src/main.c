#include "header/prototypes.h"

Input input;

int main(){

    InitWindow(SCREEN_WIDTH,SCREEN_HEIGHT, "test");
    SetTargetFPS(60);

    loadGame();

    initializePlayer();

    atexit(cleanup);

    while (!WindowShouldClose())
    {
        gestionInputs(&input);
        updatePlayer(&input);

        drawGame();
    }

    cleanup();

    return 0;
    
}