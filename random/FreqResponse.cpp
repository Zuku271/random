#include "FreqResponse.h"
#include "Complex.h"


FreqResponse::FreqResponse(const std::array<const Complex, 100> &_FreqPoints) : FreqPoints(_FreqPoints)
{
}
FreqResponse::~FreqResponse()
{
}