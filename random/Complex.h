#pragma once
#ifndef COMPLEX_H
#define COMPLEX_H
class Complex
{
public:
	double real;
	double imag;

public:
	//Complex() = default;
	//Complex(double _real);
	Complex(double _real = 0, double _imag = 0);
	~Complex();

	double getAbs() const;
	double getPhase() const;
	double radToDeg(double _val) const;
	
	bool operator==(const Complex &_val) const;
	Complex &operator=(const Complex &_val);
	const Complex operator*(const Complex &_val) const;
	const Complex operator*(const double &_val) const;
	const Complex operator+(const Complex &_val) const;
	const Complex operator-(const Complex &_val) const;
	const Complex operator/(const Complex &_val) const;
	Complex &operator*=(const Complex &_val);
	Complex &operator/=(const Complex &_val);
	Complex &operator+=(const Complex &_val);
	Complex &operator-=(const Complex &_val);
};

#endif // !COMPLEX_H