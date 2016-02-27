#pragma once
#include "Scalar.h"
class Rational :
	public Scalar
{
	int a, b;
public:
	Rational();
	Rational(int num);
	Rational(int num, int denom);
	~Rational();
};

