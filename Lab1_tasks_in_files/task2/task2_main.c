#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float func(float x, float pi)
{
	float d;
	d = sin((pi) / 2 + 3 * x) / (1 - sin(3 * x - pi));
	return(d);
}
int main(void)
{
	system("chcp 1251"); /*������� � ������� �� ������� ����*/
	system("cls"); /*������� �������*/


	float x, d, pi;
	x = 11;
	pi = 3.14159265358979323846;
	d = func(x, pi);
	printf("��� X=11 ��������� = %f\n", d);
	printf("������� �=");
	scanf_s("%f", &x);



	d = func(x, pi);

	printf("��������� = %f", d);

	getchar();
	getchar();

	return(0);
}
