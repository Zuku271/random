#pragma once
#include <array>
#include <vector>
#include <iostream>
#include "Complex.h"
#include "FreqResponse.h"

template <unsigned int N>
class Fir
{
public:
	Fir(const std::array<const Complex, N> &_coeff) : coeff(_coeff)
	{
	}
	~Fir()
	{
	}

	inline const std::array<const Complex, N>& getCoeff() const
	{
		return coeff;
	}
	FreqResponse  &operator*(const std::vector<double>& _signal)
	{
		const size_t size = 100;
		std::array<Complex, size> response({});
		
		for (size_t i = 0; i < size; ++i)
		{
			response[i] = [&]()
			{
				Complex tmp = 0;
				for (size_t j = 0; j < N; ++j)
				{
					tmp += this->coeff[j] * _signal[size - 1 - j];
				}
				return tmp;
			};
		}

		FreqResponse *Response = new FreqResponse(response);
		return *Response;
	}

private:
	const std::array<const Complex, N> coeff;
};