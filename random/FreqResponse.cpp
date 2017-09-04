#include "FreqResponse.h"
#include "Complex.h"


FreqResponse::FreqResponse(const std::array<Complex, 100> &_FreqPoints) : FreqPoints(_FreqPoints)
{
}
FreqResponse::~FreqResponse()
{
}

const std::array<Complex, 100>& FreqResponse::getFreqPoints() const
{
	return FreqPoints;
}
