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


double Complex::getAbs() const
{
	return sqrt(real*real + imag*imag);
}

double Complex::getPhase() const
{
	return atan2(imag, real);
}

double Complex::radTodeg() const
{
	return 0.0;
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

const Complex Complex::operator*(const Complex &_val) const
{
	const double temp = real;
	const Complex ret(real * _val.real + imag * _val.imag, temp * _val.imag + imag * _val.real);
	//real = real * _val.real + imag * _val.imag;
	//imag = temp * _val.imag + imag * _val.real;

	return ret;
}

const Complex Complex::operator+(const Complex & _val) const
{
	const Complex ret(real+_val.real, imag+_val.imag);
	return ret;
}

const Complex Complex::operator-(const Complex & _val) const
{
	const Complex ret(real - _val.real, imag - _val.imag);
	return ret;
}

const Complex Complex::operator/(const Complex & _val) const
{
	const double temp = real;
	const double denominator = _val.real*_val.real + _val.imag*_val.imag;
	const Complex ret((real*_val.real + imag*_val.imag) / denominator, (imag*_val.real - temp*_val.imag) / denominator);

	return ret;
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