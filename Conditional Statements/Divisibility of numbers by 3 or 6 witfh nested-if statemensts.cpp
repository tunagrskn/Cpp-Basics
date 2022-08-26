/*
Author: tunagrskn
Program: Write a code segment that detects
whether a number is divisible by 6 with
nested-if statements.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num;
    cout<<"Please enter an integer number: ";
    cin>>num;

    if (num%3==0)
        if(num%2==0)
            cout<<num<<" is divisible by 6 \n";
        else
            cout<<num<<" is divisible by 3 \n";
    else
        cout<<num<<" is not divisible by 6 and 3 \n";

    return 0;
}
