#include "header/prototypes.h"

void drawGame(){
    BeginDrawing();
    ClearBackground(BLACK);
    drawImage(getBackground(), 0,0);
    drawPlayer();
    EndDrawing();
}

void drawImage(Texture2D image, int x, int y){
    DrawTexture(image, x, y, WHITE);
}