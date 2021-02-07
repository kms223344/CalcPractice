#include <stdio.h>
#include <cmath>
#include "func.h"
#include "class.h"
#define Epsilon 0.000001

const BS BS::operator+(BS& tmp) const
{
	BS k(*this);
	ull g = (ull)lcm(k.a, tmp.a);
	ll cmp = (g / k.a) * k.b * ((k.sign) ? (-1) : (1)) +
		(g / tmp.a) * tmp.b * ((tmp.sign) ? (-1) : (1));
	if (cmp == 0) g = 1;
	return BS(g, (ull)abs(cmp), (cmp < 0) ? 1 : 0);
}
const BS BS::operator*(BS& tmp) const
{
	return BS(this->a * tmp.a, this->b * tmp.b, this->sign ^ tmp.sign);
}
BS RtoBS(double R) 
{
	ull t;
	R = round(R * Limit_dicimals) / Limit_dicimals;
	//R = (double)((long long)(R * Limit_dicimals)) / Limit_dicimals;
	//printf("---%lf\n", R);
	for (t = 1; abs(R - (long long)R) > Epsilon;) { t *= 10; R *= 10; }
	if (R == 0)
	{
		BS tmp(1, 0, 0);
		return tmp;
	}
	else
	{
		BS tmp(t, (ull)abs(R), (R > 0) ? 0 : 1);
		return tmp;
	}
}
BS RtoBS(ll R)
{
	BS tmp(1, abs(R), (R > 0) ? 0 : 1);
	return tmp;
}