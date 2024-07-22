#include "header/prototypes.h"

GameObject player;
Texture2D playerSpriteSheet;

GameObject *getPlayer(void)
{
    return &player;
}

void initializePlayer(void)
{
    player.life = 3;
    player.x = 100;
    player.y = 100;
    player.frameNumber = 0;
    player.frameMax = 8;
    player.frameTimer = PLAYER_TIME_FRAME;
    player.w = PLAYER_WIDTH;
    player.h = PLAYER_HEIGHT;

    player.state = IDLE;
}

void initPlayerSprite(void)
{
    playerSpriteSheet = LoadTexture("player.png");
}

int getPlayerx(void)
{
    return player.x;
}

int getPlayery(void)
{
    return player.y;
}

void setPlayerx(int value)
{
    player.x = value;
}

void setPlayery(int value)
{
    player.y = value;
}

void updatePlayer(Input *input)
{
    player.state = IDLE;
    if (input->left)
    {
        player.x -= PLAYER_SPEED * GetFrameTime();
    }
    else if (input->right)
    {
        player.x += PLAYER_SPEED * GetFrameTime();
    }
    else if (input->up)
    {
        player.y -= PLAYER_SPEED * GetFrameTime();
    }
    else if (input->down)
    {
        player.y += PLAYER_SPEED * GetFrameTime();
    }

    if (player.frameTimer <= 0)
    {
        player.frameTimer = PLAYER_TIME_FRAME;
        player.frameNumber++;
        if (player.frameNumber >= player.frameMax)
        {
            player.frameNumber = 0;
        }
    }
    else
    {
        player.frameTimer--;
    }

 
}

void drawPlayer(void)
{
       Rectangle dest;
    dest.x = player.x;
    dest.y = player.y;
    dest.width = player.w;
    dest.height = player.h;

    Rectangle src;
    src.x  = player.frameNumber * player.w;
    src.y = player.state * player.h;
    src.width = player.w;
    src.height = player.h;

    DrawTexturePro(
        playerSpriteSheet,
        src,
        dest,
        Vector2Zero(),
        0,
        WHITE

    );

    // DrawTexture(playerSpriteSheet, player.x, player.y, WHITE);
}

void cleanPlayer(void)
{
    UnloadTexture(playerSpriteSheet);
}