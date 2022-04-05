#include <stdio.h>
#include <string.h>

int main(void)
{
	double mass = 1.989e30;
	double output = 3.94e23;
	double a = 2 + 7./9;

	double F = mass * a;
	double d = 1;

	double work = F * d;

	double seconds = work / output;

	printf("How many days of total sun's output to move the sun %f m at an acceleration of %f m/s: %f\n", d, a, seconds / 3600/24);

	return 0;
}
