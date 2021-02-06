//#include <iostream>
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include "class.h"
#include "func.h"
#define li_di 10
int main()
{
    srand((unsigned int)time(NULL));
    int Q;
    time_t t = time(NULL);
    struct tm now = *localtime(&t);
    FILE* ret = fopen("result.txt", "a");
    scanf("%d", &Q);
    fprintf(ret, "\n------------------------------------------------------------");
    fprintf(ret, "%d-%d-%d %d:%d:%d, %d회", now.tm_year + 1900, now.tm_mon + 1, now.tm_mday, now.tm_hour, now.tm_min, now.tm_sec, Q);
    while (Q)
    {
        Q--;
        ll a1, a2, b1, b2, sign;
        a1 = a2 = b1 = b2 = 0;
        while (!a1) a1 = rand() % li_di;
        while (!a2) a2 = rand() % li_di;
        while (!b1) b1 = rand() % li_di;
        while (!b2) b2 = rand() % li_di;
        sign = rand() % 2;
        BS x(a1, a2, 0), y(b1, b2, sign);
        x.pt(); sc(); y.pt(); et();
        getch();
        (x + y).pt(); et();
    }
    printf("끝났습니다! 끝내려면 두번 더 눌러주세요");
    getch();  getch();
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