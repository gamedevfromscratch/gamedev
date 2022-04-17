#include "basic.h"

float dark = 0.5;

void colour2(float r, float g, float b)
{
	r = r * dark;
	g = g * dark;
	b = b * dark;
	colour(r, g, b);
}

// TODO clean up into libs

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

Mix_Music *music;

void init(void)
{
	music = MIX_LOADMUS("rain.ogg");
	MIX_PLAYMUSIC(music, -1);
error:
	;
}

//void quit(void)
//{
//	MIX_FREEMUSIC(music);
//}

void draw(void)
{
	dark = 1.2 - frame/1000.0;
	dark = MAX(dark, 0);

	// sky
	colour2(0, 60, 210);
	rect(0, 0, 800, 500);

	// grass
	colour2(0, 210, 60);
	rect(0, 500, 800, 100);

	// house
	colour2(170, 10, 0);
	rect(200, 300, 400, 300);

	// door
	colour2(210, 80, 60);
	rect(340, 400, 120, 200);

	// windows
	colour2(40, 110, 160);
	circle(270, 400, 50);
	circle(530, 400, 50);

	// roof
	colour2(130, 0, 20);
	tri(400, 100, 650, 310, 150, 310);
}
