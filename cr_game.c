#include "cr_game.h"

static CrGame *game = NULL;

void crGame_start(CrGame *g)
{
	game = g;
	crScreen_binding(&g->screen);

	printf("Hello world! (in crGame_start\n");
}
