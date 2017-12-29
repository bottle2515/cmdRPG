#ifndef _CR_SCREEN_H_
#define _CR_SCREEN_H_

/* Defines in Cr_screen */
#define CR_SCREEN_WIDTH 80
#define CR_SCREEN_HEIGHT 25

typedef struct _cr_screen
{
	char buffer[CR_SCREEN_HEIGHT][CR_SCREEN_WIDTH];
	
}crScreen;

void crScreen_binding(crScreen *s);
void crScreen_scan();

#endif
