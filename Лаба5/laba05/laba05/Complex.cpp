#include "Complex.h"
#include <math.h>
double Complex::getReal() const
{
	return real;
}

double Complex::getImaginary() const
{
	return imaginary;
}

void Complex::setReal(double real)
{
	this->real = real;
}

void Complex::setImaginary(double imaginary)
{
	this->imaginary = imaginary;
}
Complex::Complex(){
	real = 0.0;
	imaginary = 0.0;
}
Complex::Complex(double re, double imag)
{
	real = re;
	imaginary = imag;
}
Complex epow(const Complex &z)
{
    double real, imag;
    double expR, expI;
    real = z.getReal();
    imag = z.getImaginary();
    expR = exp(real)*cos(imag);
    expI = exp(real)*sin(imag);
    return Complex(expR, expI);
}
Complex logC(Complex z)
{
    double r, phi;

    r = sqrt(pow(z.getReal(), 2) + pow(z.getImaginary(), 2));

    phi = atan2(z.getImaginary(), z.getReal());

    return Complex(log(r), phi);
}
Complex powC(Complex a, Complex b)
{
    return epow(b*logC(a));

}



Complex operator -(Complex a, Complex b)
{
	return Complex(a.getReal() - b.getReal(), a.getImaginary() - b.getImaginary());
}
Complex operator +(Complex a, Complex b)
{
    return Complex(a.getReal() + b.getReal(), a.getImaginary() + b.getImaginary());
}
Complex operator *(Complex a, Complex b)
{

    return Complex(a.getReal() * b.getReal() - a.getImaginary() * b.getImaginary(), a.getImaginary() * b.getReal() + a.getReal() * b.getImaginary());
}

Complex operator /(Complex a, Complex b)
{
	return Complex(((a.getReal() * b.getReal()) - (a.getImaginary()*b.getImaginary()*(-1))) / (pow(b.getReal(), 2) + pow(b.getImaginary(), 2)), ((a.getReal()*b.getImaginary()*(-1)) + (a.getImaginary()*b.getReal())) / (pow(b.getReal(), 2) + pow(b.getImaginary(), 2)));
}



