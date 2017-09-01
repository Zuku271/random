// random.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <string>
#include "Complex.h"

int main()
{
	Complex number1(1, 5);
	Complex number2(1, 5);
	Complex number3(8, 1);

	//number3 = number1*number2 + number1/number3;

	std::cout << (number1 - number3).real << "\tj" << (number1 - number3).imag << '\n';

	system("PAUSE");
    return 0;
}