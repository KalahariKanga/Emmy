#include "Rational.h"

Rational::Rational()
{
	a = 0;
	b = 1;
}

Rational::Rational(int num)
{
	a = num;
	b = 1;
}

Rational::Rational(int num, int denom)
{
	a = num;
	b = denom;
}

Rational::~Rational()
{
}
