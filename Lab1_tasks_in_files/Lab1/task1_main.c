#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
	system("chcp 1251"); /*Перевел консоль на русский язык*/
	system("cls"); /*Очистил консоль*/
	float x, d, pi;
	x = 10;
	pi = 3.14159265358979323846;
	d = sin((pi) / 2 + 3 * x) / (1 - sin(3 * x - pi));
	printf("При x=13, результат = %f\n", d);
	printf("Введите Х=");
	scanf_s("%f", &x);
	d = sin((pi) / 2 + 3 * x) / (1 - sin(3 * x - pi));
	printf("Результат = %f", d);
	getchar();
	getchar();

	return(0);
}
