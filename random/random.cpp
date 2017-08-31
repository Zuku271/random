// random.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <string>
#include "Complex.h"

int main()
{
	Complex number1(1, 4);
	Complex number2(1, 4);
	Complex number3(5, 2);

	number3 /= number1;

	std::cout << number3.getReal() << "\tj" << number3.getImag() << '\n';

	system("PAUSE");
    return 0;
}