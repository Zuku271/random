#pragma once
#include <vector>
#include <iostream>

void IntToBin(int _integer, std::vector<char> &bin)
{
	if (!_integer)
		return;
	bin.push_back(_integer % 2);
	IntToBin(_integer / 2, bin);
}