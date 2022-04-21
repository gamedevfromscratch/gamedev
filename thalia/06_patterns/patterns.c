#include "basic.h"

void draw(void)
{
	int d = 50;
	for(int x = 0; x <= 800; x = x + d) {
		line(x, 0, 400, 300);
		line(x, 600, 400, 300);
	}	
	for(int y = 0; y <= 600; y = y + d) {
		line(0, y, 400, 300);
		line(800, y, 400, 300);
	}
}
