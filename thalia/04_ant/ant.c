#include "basic.h"

void draw(void)
{
	// ground
	colour(0, 110, 20);
	rect(0, 0, 800, 600);

	// front legs
	colour(200, 190, 0);
	line_width = 10;
	line(460, 300, 450, 400);
	line(460, 300, 450, 200);
	line(450, 200, 460, 60);
	line(450, 400, 460, 540);

	// middle legs
	colour(200, 100, 0);
	line(430, 300, 370, 420);
	line(430, 300, 370, 180);
	line(370, 180, 240, 120);
	line(370, 420, 240, 480);

	// back legs
	line(330, 380, 430, 300);
	line(330, 220, 430, 300);
	line(330, 220, 120, 200);
	line(330, 380, 120, 400);

	// middle circle
	colour(110, 40, 10);
	circle(409, 300, 32);

	// front circle
	colour(130, 60, 10);
	circle(460, 300, 30);

	// neck
	colour(100, 30, 0);
	line_width = 30;
	line(470, 300, 550, 300);

	// head
	colour(0, 160, 20);
	circle(560, 300, 50);

	// back circle
	colour(0, 200, 20);
	circle(330, 300, 50);
	tri(320, 350, 220, 300, 320, 250);

	// eyes
	colour(0, 0, 0);
	circle(560, 255, 17);
	circle(560, 345, 17);

	colour(255, 255, 255);
	circle(570, 255, 3);
	circle(570, 345, 3);

	// antennae
	line_width = 10;
	colour(100, 30, 0);
	line(580, 270, 595, 200);
	line(580, 330, 595, 400);
	line(593, 400, 750, 450);
	line(593, 200, 750, 150);
}
