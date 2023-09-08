#include<iostream>
#include "easy.h"
using namespace std;

int itc_skv(int a, int b)
{
    if (a <= 0 || b <= 0)
        return -1;

    return a * b;
}

int itc_str(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0)
        return -1;

    if (a >= c + b || b >= a + c || c >= a + b)
        return -1;

    int p = (a + b + c) / 2;

    return itc_sqrt(p * (p - a) * (p - b) * (p - c));
}

double itc_scir(int  radius)
{
    return 3.14 * radius * radius;
}

int itc_pow(int num, int step)
{
    if (step == 0)
    {
        return 1;
    }

    if (step % 2 == 0)
    {
        return itc_pow(num * num, step / 2);
    }

    return num * itc_pow(num, step - 1);
}

bool itc_ispositive(int num)
{
    return (num >= 0);
}

bool itc_ispositive_d(double num)
{
    return (num >= 0);
}
