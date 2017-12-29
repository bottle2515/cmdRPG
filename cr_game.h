#ifndef _CR_GAME_H_
#define _CR_GAME_H_

typedef struct _cr_game
{
	crScreen screen;
}CrGame;

/* main game loop */
void crGame_start(CrGame *g);

#endif