#pragma once
#include <array>
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
private:
	const std::array<const Complex, N> coeff;
};