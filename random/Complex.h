#pragma once
#ifndef COMPLEX_H
#define COMPLEX_H
class Complex
{
public:
	double real;
	double imag;

public:
	Complex(double _real);
	Complex(double _real, double _imag);
	~Complex();

	double getAbs() const;
	double getPhase() const;
	double radTodeg() const;
	
	bool operator==(const Complex &_val) const;
	Complex &operator=(const Complex &_val);
	const Complex operator*(const Complex &_val) const;
	const Complex operator+(const Complex &_val) const;
	const Complex operator-(const Complex &_val) const;
	const Complex operator/(const Complex &_val) const;
	Complex &operator*=(const Complex &_val);
	Complex &operator/=(const Complex &_val);
	Complex &operator+=(const Complex &_val);
	Complex &operator-=(const Complex &_val);
};

#endif // !COMPLEX_H
