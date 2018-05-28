#include "Complex.h"

int main()
{
	setlocale(LC_ALL, "Rus");
	int real, imaginary;

	//Input part
	printf("Input real part: ");
<<<<<<< HEAD
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
=======
	scanf("%d", &real);
    printf("\n");
    printf("Input imaginary part: ");
    scanf("%d", &imaginary);
    printf("\n");
	Complex z(real, imaginary);
	Complex i (0, 1);

	//Output
    printf("z= %d %di", real, imaginary);
    printf("\nf(z) = z^3+(1 + 2i)z^2+(1-2i)z^(-5i)\n");
    Complex res = powC(z, Complex(3, 0))+(Complex(1,0) + Complex(2,0)*i)* powC(z, Complex(2, 0))+ (Complex(1,0) - Complex(2,0)*i)* powC(z, Complex(-5, 0) * i);
    printf("result: %f %fi", res.getReal(), res.getImaginary());
>>>>>>> 7516487974568a5e0422c1030bc5f0fd2de538f2
}

