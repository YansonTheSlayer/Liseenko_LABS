#include <math.h>;

int findFirstElement(float eps) {
	float a0 = 1, a1 = 0;
	int i = 1;
	for (;;) {
		a1 = a0 + pow(-1, i)*((i + 1) / (pow(i, 3) - pow(i, 2) + 1));
		if (fabs(a1 - a0) < eps) {
			return i;
			break;
		}
		i++;
	}
}