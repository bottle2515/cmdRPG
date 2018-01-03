#ifndef _CR_GAME_H_
#define _CR_GAME_H_

#include <stdio.h>
#include <stdlib.h>

#include "cr_screen.h"

typedef struct _cr_game
{
	crScreen screen;
}crGame;

/* main game loop */
void crGame_start(crGame *g);

#endif