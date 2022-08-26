/*
Author: tunagrskn
Program:  Recursive functions
• Recursive factorial function
*/
#include <iostream>
using namespace std;
long factorial(int n)
{
    if (n>0)
        return n*factorial(n-1);
    else if (n==0)
        return 1;
    return 0;
}
int main()
{
    int n;
    cout<<"Enter an integer: ";
    cin>> n;
    cout<< n <<"! =" << factorial(n)<< endl;
    return 0;
}

