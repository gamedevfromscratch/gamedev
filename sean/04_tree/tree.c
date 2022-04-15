#include "basic.h"

void draw(void)
{
//TRUNK
	colour(150, 75, 10);
	rect(378, 150, 44, 425);
//LEAF	
	for (int y = 500; y >= 100; y = y - 20) {
		int w = y / 2;
		int h = y / 3;
		colour(25, 250 - 200 * y / 500, 25);
		tri(400 - w / 2, y, 400 + w / 2, y, 400, y - h);
	}
//POT
	colour(75, 37, 10);
	quad(360, 530, 440, 530, 425, 590, 375, 590);
	
	colour(90, 45, 12);
	rect(355, 528, 90, 10);

//BAUBLES
	srandom(6);
	for (int i = 0; i < 36; i++) {
		if (i % 2) {
			colour(255, 0, 0);
		} else {
			colour(255, 200, 0);
		}
		int x, y;
		int w;
		do {
			y = random() % 433 + 67;
			x = random() % 250 + 275;
			w = y / 2;
		} while (x < 400 - w/2 || x > 400 + w/2);
		circle(x, y, 10);
	}
}
