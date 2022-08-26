/*
Author: Tuna Girişken
Program: Pointers_2
*/
#include <iostream>
using namespace std;

void takas (double *x, double *y)
{
    double z;
    z=*x;
    *x=*y;
    *y=z;
}
int main()
{
    double a =11.1, b=22.2;
    cout<<a <<" " << b << endl;

    swap(&a,&b);
    cout<<a <<" " << b << endl;

    return 0;
}
