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
    return ((num % 10) * 100) + (((num / 10) % 10)) * 10 + num / 100;
}


bool itc_iseven(int num)
{
    return (num % 2 == 0);
}
