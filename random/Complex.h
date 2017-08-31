#pragma once
#ifndef COMPLEX_H
#define COMPLEX_H
class Complex
{
public:
	double real;
	double imag;

public:
	Complex(int _real, int _imag);
	~Complex();

	double getReal() const;
	double getImag() const;
	double abs() const;
	Complex &operator=(const Complex &_val);
	bool operator==(const Complex &_val) const;
	Complex &operator*(const Complex &_val);
	Complex &operator*=(const Complex &_val);
	Complex &operator/=(const Complex &_val);
	Complex &operator+=(const Complex &_val);
	Complex &operator-=(const Complex &_val);
};

#endif // !COMPLEX_H
