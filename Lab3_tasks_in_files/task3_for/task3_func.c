#include <math.h>

void print(int n, int k) {
	float a = 1;
	printf("%i  ", 0);
	printf("%f \n", a);
	for (int i = 1; i < n; i++) {
		a = a + pow(-1, i)*((i + 1) / (pow(i, 3) - pow(i, 2) + 1));
		if (i%k == 0)
			continue;
		printf("%i  ", i);
		printf("%f \n", a);
	}
}
