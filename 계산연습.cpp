//#include <iostream>
#pragma warning(disable:4996)
#include <stdio.h>
#include "class.h"
#include "func.h"

int main()
{
    ll a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    BS x(a, b, 0), y(c, d, 0);
    x.pt(); y.pt();
    (x + y).pt();
    (x * y).pt();
    /*double a, b;

    scanf("%lf %lf", &a, &b);
    BS k(RtoBS(a)), l(RtoBS(b));

    k.pt(); l.pt();

    BS sum(k + l);
    BS mult(k * l);
    sum.pt(); mult.pt();
    printf("%lf %lf", (double)sum,(double)mult);
    */
    return 0;
}