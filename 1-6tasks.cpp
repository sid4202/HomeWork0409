#include<iostream>

using namespace std;

void itc_name(){
    cout << "Maxim ";
}

void itc_fio()
{
    cout << "Lebedev ";
    itc_name();
    cout << "Aleksandrovich" << endl;
}

int itc_abs(int n)
{
    if (n < 0)
        n *= -1;

    return n;
}

double itc_fabs(double n)
{
    if (n < 0)
        n *= -1.0;

    return n;
}

int itc_revnbr(int num)
{
    int nReverse = 0;
    int pOf10 = 100;
    while(num > 0)
    {
        nReverse += (num % 10) * pOf10;

        pOf10 /= 10;
        num /= 10;
    }

    return nReverse;
}


bool itc_iseven(int num)
{
    return !(num % 2 == 0);
}
