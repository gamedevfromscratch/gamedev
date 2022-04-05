#include <stdio.h>
#include <string.h>

int main(void)
{
	char *star_name = "Proxima Centauri";
	double star_distance_ly = 4.2465;
	double c = 299792458;
	double seconds_in_year = 3600 * 24 * 365.2422;
	double light_year = c * seconds_in_year;
	double star_distance_km = star_distance_ly * light_year / 1000;

	printf("The distance to %s is %.0f km.\n", star_name, star_distance_km);

	return 0;
}
