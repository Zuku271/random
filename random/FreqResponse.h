#pragma once
#include <array>

template <unsigned int L>
class FreqResponse
{
public:
	FreqResponse(const std::array<const Complex, L> _FreqPoints);
	~FreqResponse();


private:
	const std::array<const Complex, L> FreqPoints;
};

template <unsigned int L>
FreqResponse<L>::FreqResponse(const std::array<const Complex, L> _FreqPoints) : FreqPoints(_FreqPoints)
{
}

template <unsigned int L>
FreqResponse<L>::~FreqResponse()
{
}