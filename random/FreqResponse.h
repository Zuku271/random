#pragma once
#include <array>
#include "Complex.h"

class FreqResponse
{
public:
	FreqResponse(const std::array<const Complex, 100>& _FreqPoints);
	~FreqResponse();


private:
	const std::array<const Complex, 100> FreqPoints;
};