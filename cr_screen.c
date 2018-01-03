#include "cr_screen.h"

static crScreen *screen = NULL;

void crScreen_binding(crScreen *s)
{
	if(s)
	{
		screen = s;
	}
}

void crScreen_scan()
{
	printf("In crScreen_scan\n");
}
