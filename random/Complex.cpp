#include <math.h>
#include "Complex.h"


Complex::Complex(double _real) : real(_real), imag(0)
{
}

Complex::Complex(double _real, double _imag):real(_real), imag(_imag)
{
}

Complex::~Complex()
{
}


double Complex::getReal() const
{
	return real;
}

double Complex::getImag() const
{
	return imag;
}

double Complex::abs() const
{
	return sqrt(real*real + imag*imag);
}

Complex &Complex::operator=(const Complex &_val)
{
	real = _val.real;
	imag = _val.imag;

	return *this;
}

bool Complex::operator==(const Complex &_val) const
{
	if (real == _val.real && imag == _val.imag)
		return true;
	else
		return false;
}

Complex & Complex::operator*(const Complex &_val)
{
	const double temp = real;
	real = real * _val.real + imag * _val.imag;
	imag = temp * _val.imag + imag * _val.real;

	return *this;
}

Complex & Complex::operator*=(const Complex &_val)
{
	const double temp = real;
	real = real * _val.real + imag * _val.imag;
	imag = temp * _val.imag + imag * _val.real;

	return *this;
}

Complex & Complex::operator+=(const Complex & _val)
{
	real += _val.real;
	imag += _val.imag;

	return *this;
}

Complex & Complex::operator-=(const Complex & _val)
{
	real -= _val.real;
	imag -= _val.imag;

	return *this;
}

Complex & Complex::operator/=(const Complex &_val)
{
	const double temp = real;
	const double denominator = _val.real*_val.real + _val.imag*_val.imag;

	real = (real*_val.real + imag*_val.imag)/denominator;
	imag = (imag*_val.real - real*_val.imag)/denominator;

	return *this;
}