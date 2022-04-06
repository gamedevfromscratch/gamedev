#include <stdio.h>

int main(void)
{
	for (int a = 1; a <= 31; a++) {
		for (int b = 1; b <= 31; b++) {
			printf("%3d ", a * b);
		}
		printf("\n");
	}
	return 0;
}
