#include "Complex.h"

int main()
{
	setlocale(LC_ALL, "Rus");
	int real, imaginary;

	//Input part
	printf("Input real part: ");
	scanf_s("%d", &real);
	printf("\n");
	printf("Input imaginary part: ");
	scanf_s("%d", &imaginary);
	printf("\n");
	Complex z(real, imaginary);
	Complex i(0, 1);

	//Output
	printf("z= %d %di", real, imaginary);
	printf("\nf(z) = z^3+(1 + 2i)z^2+(1-2i)z^(-5i)\n");
	Complex res = powC(z, Complex(3, 0)) + (Complex(1, 0) + Complex(2, 0)*i)* powC(z, Complex(2, 0)) + (Complex(1, 0) - Complex(2, 0)*i)* powC(z, Complex(-5, 0) * i);
	printf("result: %f %fi", res.getReal(), res.getImaginary());
	getchar();
	getchar();
}

