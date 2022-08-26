/*
Author: tunagrskn
Program: Write a function that calculates the
factorial of its parameter.
n! = n(n-1)(n-2)...1
*/
#include <iostream>
using namespace std;

int factorial (int n)
{
    int result=1;
    for(int i=n; n>=1; n--)
    {
        result *=n;
    }
    cout<<"Your factorial result is: "<<result<<endl;
    return result;
}
int main()
{
    int n;
    cout<<"Enter your factorial number: "<<endl;
    cin>>n;
    if(n != 0 && n>0)
        factorial(n);

    return 0;
}
