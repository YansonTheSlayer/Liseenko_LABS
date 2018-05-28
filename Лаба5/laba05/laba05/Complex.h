#pragma once
#include "iostream"


using namespace std;

class Complex
{
	double real, imaginary;
public:
	Complex();
	double getReal() const;
	double getImaginary() const;
	void setReal(double real);
	void setImaginary(double imaginary);
	Complex(double real, double imaginary);
	friend Complex operator *(Complex a, Complex b);
	friend Complex operator -(Complex a, Complex b);
	friend Complex operator /(Complex a, Complex b);
	friend Complex operator +(Complex a, Complex b);
	friend Complex powC(Complex z, Complex a);
	friend Complex logC(Complex z);
	friend Complex epow(const Complex &z);

};
