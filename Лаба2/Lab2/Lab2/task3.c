#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double f(double x);
_Bool isInArea(double x, double y);
float func(float x, float y);

int main() {
	double x, y, z;
	printf("Task 1 \n");
	printf("Task 2 \n"); 
	switch (_getch()) { 
	case '1': 
		printf("Task 1 \n");
		printf("x = ");
		scanf("%lf", &x);
		printf("y = ");
		scanf("%lf", &y);
		z = func(x, y);
		printf("%f \n", z);
		break; 
	case '2': 
		printf("Task 2 \n"); 
		printf("x = ");
		scanf("%lf", &x);
		z = f(x);
		printf("%f \n", z);
		break; 
	default: 
		break; 
	}

	_getch();
	return 0;
}
