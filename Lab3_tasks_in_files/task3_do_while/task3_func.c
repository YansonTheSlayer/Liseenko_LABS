#include <math.h>

void print(int n, int k) {
	float a = 1;
	printf("%i  ", 0);
	printf("%f \n", a);
	int i = 1;
	do {
		a = a + pow(-1, i)*((i + 1) / (pow(i, 3) - pow(i, 2) + 1));

		if (i % k == 0) {
			i++;
			continue;
		}
		printf("%i  ", i);
		printf("%f \n", a);
		i++;
	} while (i < 20);
}
