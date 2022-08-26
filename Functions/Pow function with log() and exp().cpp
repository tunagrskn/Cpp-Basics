/*
Author: tunagrskn
Program: Write your own pow(x,y) by using log()
and exp() functions.
a^b = e^(b*log*a)
*/
#include <iostream>
#include <cmath>
using namespace std;

double pow(double a, double b)
{
    double result;
    result = exp(b*log(a));
    cout<<"Answer is: "<<result;
    return result;
}
int main()
{
    float x,y;
    cout<<"Enter your base and exponential numbers: "<<endl;
    cin>>x>>y;
    pow(x,y);
    return 0;
}
