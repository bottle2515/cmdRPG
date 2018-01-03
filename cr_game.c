#include "cr_game.h"
#include "cr_screen.h"

static crGame *game = NULL;


void crGame_start(crGame *g)
{
	game = g;
	crScreen_binding(&(g->screen));

	printf("Hello world! (in crGame_start)\n");

	crScreen_scan();
}
