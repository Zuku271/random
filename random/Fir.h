#pragma once
#include <array>
#include "Complex.h"

template <unsigned int N>
class Fir
{
public:
	Fir(const std::array<const Complex, N> &_coeff);
	~Fir();
private:
	const std::array<const Complex, N> coeff;
};