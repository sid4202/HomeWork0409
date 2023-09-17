#include<iostream>

using namespace std;

int itc_max(int num1, int num2)
{
    if(num1 >= num2)
    {
        return num1;
    } else {
        return num2;
    }
}

int itc_min(int min1, int min2)
{
    if(min1 >= min2)
    {
        return min2;
    } else {
        return min1;
    }

}

double itc_fmax(double num1, double num2)
{
    if(num1 >= num2)
    {
        return num1;
    } else {
        return num2;
    }
}

double itc_fmin(double min1, double min2)
{
    if(min1 >= min2)
    {
        return min2;
    } else {
        return min1;
    }

}

int itc_sqrt(int num)
{
    if (num < 0)
        return -1;
    
    for (long long i = 0; i <= num; ++i)
    {
        if (i * i > num)
            return -1;

        if (i * i == num)
            return (int)i;
    }
    return -1;
}

int skv(int a)
{
    if (a <= 0)
        return -1;

    return a * a;
}
