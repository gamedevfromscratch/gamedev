#include "basic.h"

void draw(void)
{
	// sky
	colour(0, 100, 250);
	rect(0, 0, 800, 500);

	// sun
	colour(200, 200, 50);
	circle(100 + frame, 100, 70);

	// grass
	colour(0, 250, 100);
	rect(0, 500, 800, 100);

	// house
	colour(200, 50, 30);
	rect(200, 300, 400, 300);

	// door
	colour(250, 120, 100);
	rect(340, 400, 120, 200);

	// windows
	colour(80, 150, 200);
	circle(270, 400, 50);
	circle(530, 400, 50);

	// roof
	colour(170, 30, 20);
	tri(400, 100, 650, 310, 150, 310);
}
