#ifndef STRUCTS_H
#define STRUCTS_H

#include "defs.h"

typedef struct Input
{
    int left, right, up, down, jump, attack, enter, erase, pause;
} Input;

typedef struct Map
{
    Texture2D background;
} Map;


typedef struct GameObject
{
    int x, y;
    int h, w;

    int frameNumber, frameTimer, frameMax;
    int state;

    int life;

} GameObject;

#endif