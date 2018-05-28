#include <math.h>

double summ(int n) {
	double a = 1;
	for (int i = 1; i <= n; i++) {
		a = a + pow(-1, i)*((i + 1) / (pow(i, 3) - pow(i, 2) + 1));
	}
	return a;
}
