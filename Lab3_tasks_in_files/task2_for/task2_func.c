#include <math.h>

double summ2(float eps) {
	float a0 = 1, a1;
	int i = 1;
	for (;;) {
		a1 = a0 + pow(-1, i)*((i + 1) / (pow(i, 3) - pow(i, 2) + 1));
		if (fabs(a1 - a0) <= eps)
			break;
		a0 = a1;
		i++;
	}
	return a1;
}
