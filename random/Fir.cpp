#include "Fir.h"

template<unsigned int N>
Fir<N>::Fir(const std::array<const Complex, N> &_coeff) : coeff(_coeff)
{
}

template<unsigned int N>
Fir<N>::~Fir()
{
}