#pragma once
#include <array>
#include <vector>
#include "Complex.h"

class FreqResponse
{
public:
	FreqResponse(const std::array<Complex, 100>& _FreqPoints);
	~FreqResponse();

	const std::array<Complex, 100>& getFreqPoints() const;


private:
	const std::array<Complex, 100> FreqPoints;
};