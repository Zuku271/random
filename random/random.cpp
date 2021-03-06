// random.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <string>
#include <vector>
#include "Complex.h"
#include "Fir.h"
#include "FreqResponse.h"
#include "IntToBin.h"


int main()
{
	Complex number1(1, -1);
	Complex number2(1, 5);
	Complex number3(8, 1);
	const unsigned int N = 41;
	/*
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
	const std::vector<double> signal(100, 1.0);
	Fir<N> filter(coeff);
	FreqResponse filterResponse = filter * signal;
	

	for (int i = 0; i < 100; ++i)
	{
		std::cout << filterResponse.getFreqPoints().at(i).real << "\tj" << filterResponse.getFreqPoints().at(i).imag << '\n';
	}
	*/


	int a = 10;

	std::vector<char> tmp;
	IntToBin(a, tmp);
	
	for (int i = 0; i < tmp.size(); ++i)
	{
		std::cout << tmp.at(i) + 0x30 << '\n';
	}
	system("PAUSE");
    return 0;
}