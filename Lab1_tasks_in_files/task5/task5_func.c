#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float func(float x)
{
	float  d, pi;
	pi = 3.14159265358979323846;
	d = sin((pi) / 2 + 3 * x) / (1 - sin(3 * x - pi));
	return(d);
}
