#pragma once
#include <array>
#include <vector>
#include "Complex.h"

template <unsigned int N>
class Fir
{
public:


	Fir::Fir(const std::array<const Complex, N> &_coeff) : coeff(_coeff)
	{
	}
	Fir::~Fir()
	{
	}

	const std::array<const Complex, N> &getCoeff();
private:
	const std::array<const Complex, N> coeff;
};

template <unsigned int L>
FreqResponse<L> * operator*(Fir<unsigned int> &Filter, std::vector<double>& signal)
{
	//FreqResponse<100> *Response = new FreqResponse<100>;
	std::array<Complex, N> response({});
	size_t size = signal;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < signal.size(); ++j)
		{
			//response[i] += this->coeff[j];
		}
	}
}

template<unsigned int N>
inline const std::array<const Complex, N>& Fir<N>::getCoeff()
{
	return coeff;
}