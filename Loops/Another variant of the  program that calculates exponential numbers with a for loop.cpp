/*
Author: tunagrskn
Program: Another variant of the program written to calculate
exponential numbers as a^b. (a and b integers)
*/
#include <iostream>
using namespace std;

int main ()
{
    int a,b;
    int result = 1;

    cout<<"Enter your base number: ";
    cin>>a;
    cout<<"Enter your exponent number: \n";
    cin>>b;

    for(; b; b-- )
    {
        result *= a;
    }
    cout<<"Result is "<<result;

    return 0;
}
