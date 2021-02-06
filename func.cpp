#include "func.h"
#include "class.h"
ll gcd(ll a, ll b)
{
	if (b == 0)
	{
		return -1;
	}
	ll c = a % b;
	a = b; b = c;
	while (b)
	{
		c = a % b;
		a = b; b = c;
	}
	return a;
}
ll lcm(ll a, ll b)

{
	if (b != 0)
		return (a * b) / gcd(a, b);
	else return -1;
}
void sc()
{
	printf(" ");
}
void et()
{
	printf("\n");
}
void fsc(FILE* p)
{
	fprintf(p," ");
}
void fet(FILE* p)
{
	fprintf(p,"\n");
}
void ftp(FILE* p)
{
	fprintf(p, "\t");
}
/*unsigned int abs(int a)
{
	if (a < 0) return (unsigned int)(-a);
	return (unsigned int)a;
}
double abs(double a)
{
	if (a < 0) return -a;
	return a;
}*/