// random.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <string>
#include "Complex.h"
#include "Fir.h"

int main()
{
	Complex number1(1, -1);
	Complex number2(1, 5);
	Complex number3(8, 1);
	const unsigned int N = 41;

	const std::array<const Complex, N> coeff =
	{
		-0.0000	, 0.0010 ,0.0007 , -0.0031, - 0.0030, 0.0048, 0.0072, - 0.0051,
		- 0.0133,
		0.0027	,
		0.0209	,
		0.0040	,
		- 0.0292,
		- 0.0170,
		0.0372	,
		0.0409	,
		- 0.0439,
		- 0.0914,
		0.0484	,
		0.3132	,
		0.4501	,
		0.3132	,
		0.0484	,
		- 0.0914,
		- 0.0439,
		0.0409	,
		0.0372	,
		- 0.0170,
		- 0.0292,
		0.0040	,
		0.0209	,
		0.0027	,
		- 0.0133,
		- 0.0051,
		0.0072	,
		0.0048	,
		- 0.0030,
		- 0.0031,
		0.0007	,
		0.0010	,
		- 0.0000
	};
	
	Fir<N> ss(coeff);
	
	number3 = number1*number2 + number1/number3;

	std::cout << coeff[3].real << "\tj" << coeff[3].imag << '\n';

	system("PAUSE");
    return 0;
}