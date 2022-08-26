/*
Author: tunagrskn
Program: Variable parameters
• Converting a value parameter to a variable
parameter is easy.
*/
#include <iostream>
using namespace std;

//Define the parameter as pointer
void func(int *num)
{
//Use '*' before the parameter name so that you access the value at the mentioned address
    *num = 5;
}

int main()
{
    int count=10;
//Send the address of the argument
    func(&count);
    cout<<count;
}

