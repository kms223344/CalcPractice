#ifndef H_class
#define H_class

#include <stdio.h>
#include <cmath>
#include "func.h"
#define Limit_dicimals 10000

class BS //������ : Rational Number -> (b/a)
{
protected:
	ull a, b; // �и� , ����
	bool sign; //0 -> (+), 1 -> (-)
public:
	BS() : a(1), b(0), sign(0) {}
	BS(ull a, ull b, bool sign) : a(a), b(b), sign(sign) { this->simplify(); }
	~BS() {}
	operator double()
	{
		double k = ((double)b / a) * (sign ? (-1) : (1));
		//k = (double)((long long)(k * (Limit_dicimals))) / Limit_dicimals;
		k = round(k * Limit_dicimals) / Limit_dicimals;
		//printf("--%lf\n", k);
		return k;
	}
	operator ll()
	{
		return (b / a) * (sign ? (-1) : (1));
	}
	void simplify()
	{
		if (this->b == 0)
		{
			this->a = 1;
			return;
		}
		long long g = gcd(this->a, this->b);
		this->a /= g; this->b /= g;
		return;
	}
	BS operator= (const BS& tmp)
	{
		this->a = tmp.a;
		this->b = tmp.b;
		this->sign = tmp.sign;
		return *this;
	}
	const BS operator+ (BS& tmp);
	const BS operator+= (BS& tmp)
	{
		return *this = (*this) + (tmp);
	}
	const BS operator* (BS& tmp);
	const BS operator*= (BS& tmp)
	{
		return *this = (*this) * (tmp);
	}
	void pt() const //print
	{
		printf("%lld/%lld : %d\n", b, a, sign);
	}
	ull geta() const { return this->a; }
	ull getb() const { return this->b; }
	bool getsign() const { return this->sign; }
};
BS RtoBS(double R);
BS RtoBS(ll R);


/*class BS_exp //BS + BS exponent
{
private:
	BS val, exp;
public:
	BS_exp() : val(1, 1, 0), exp(1, 1, 0) {}
	BS_exp(BS& a, BS& b) : val(a), exp(b) {}
	~BS_exp() {}
	void simplify()
	{
		val.simplify();
		exp.simplify();
	}
	void expPlus(BS b)
	{
		exp *= b;
	}
};*/
#endif