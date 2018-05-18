#include "Complex.h"

void main()
{
	setlocale(LC_ALL, "Rus");
	int real, imaginary;
	cout << "Введите \"Комплексное число\" в виде:\n-действительной\n-мнимой\nчастей комплексного числа:\nreal = ";
	cin >> real;
	cout << "imagine = ";
	cin >> imaginary;
	Complex z(real, imaginary);
	cout << "z = " << z;
	cout << "\nf(z) = z^3+(1 + 2i)z^2+(1-2i)z^(-5i)\nf(z) = (" << pow(z, 3) << ") + (" << 1 + 2 * imaginary << ")(" << pow(z, 2) << ") + (" << 1 - 2 * imaginary << ")(" << pow(z, -5 * imaginary) << R"(")         )";
	_getch();
}

int factorial(int x)
{
	if (x == 0) return 1;
	return x * factorial(x - 1);
}