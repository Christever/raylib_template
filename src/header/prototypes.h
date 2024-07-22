#ifndef PROTO_H
#define PROTO_H

#include "structs.h"
// ! GAME
extern void loadGame(void);
extern void drawGame(void);
extern void drawImage(Texture2D image, int x, int y);
extern void cleanup(void);
extern void gestionInputs(Input *input);
// extern void getInput(Input *input);

// ! MAP
extern void initMaps(void);
extern Texture2D getBackground(void);
extern void cleanMaps(void);

// ! PLAYER
extern void initializePlayer(void);
extern void initPlayerSprite(void);
extern void updatePlayer(Input *input);
extern void drawPlayer(void);
extern GameObject *getPlayer(void);
extern int getPlayerx(void);
extern int getPlayery(void);
extern void setPlayerx(int value);
extern void setPlayery(int value);
extern void cleanPlayer(void);

#endif