/*
Author: tunagrskn
Program: Functions with return type and parameters
*/
#include <iostream>
using namespace std;
float half(int a)
{
    return a/2;
}
int main()
{
    float r;
    r=half(10)/3;
    cout<<"Result="<< r;
}
