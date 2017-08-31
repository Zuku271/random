#include "stdafx.h"
#include "static_test.h"

static_test::static_test(int _poleInt) : poleInt(_poleInt)
{

}

static_test::~static_test()
{
}

int static_test::funkcjaStatic()
{
	return statycznePoleInt;
}

int static_test::funkcja()
{
	return statycznePoleInt - poleInt;
}