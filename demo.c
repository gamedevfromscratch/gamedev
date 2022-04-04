#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void rep(char c, int n)
{
	for (int i=0; i<n; i++)
		putchar(c);
}

void nl(void)
{
	putchar('\n');
}

float pythagores(float x, float y)
{
	return sqrt(x*x + y*y);
}

#define REPEAT(n) for (int i=0; i<10; i++)

void praise(int n, char *name)
{
	for(int i=0; i<n; i++) {
		printf("%s is the best.  ", name);
	}
	nl();
	nl();
}

int main(void)
{
	char *name1 = "Thalia";
	char *name2 = "Sean";

	srandom(time(NULL));

	int a = random() % 11 + 2;
	int b = random() % 11 + 2;

	praise(50, "Nika");
	praise(30, "Sam");
	praise(25, "Sean");
	praise(20, "Thalia");

	nl();
	nl();
	nl();

	for (int i=0; i<10; i++) {
		if (i % 2 == 0)
			printf("hello %s %d*%d=%d\n", name1, a, b, a*b);
		else
			printf("hello %s %d\n", name2, i);
	}

	nl();
	nl();
	nl();

	int size = 10;
	for (int i=0; i<size; i++) {
		rep(' ', size-i);
		rep('*', i*2+1);
		nl();
	}

	for (int i=size-2; i>=0; i--) {
		rep(' ', size-i);
		rep('*', i*2+1);
		nl();
	}

	nl();
	nl();
	nl();

	printf("pythagores(30, 40) = %f\n", pythagores(30, 40));

	return 0;
}

