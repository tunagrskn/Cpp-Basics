/*
Author: tunagrskn
Program: power() function without parameters
*/
#include <iostream>
using namespace std;

float power()
{
    float result=1, base;
    int exponent;
    cout<<"Enter your base and exponent numbers: "<<endl;
    cin>>base>>exponent;

    for(; exponent>0; exponent--)
        result *= base;
    //cout<<result;
    return result;
}

int main()
{
    float a;
    a = power();
    cout<<a;
}
