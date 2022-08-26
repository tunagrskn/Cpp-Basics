/*
Author: Tuna Girişken
Program: Variables and memory addresses
In C/C++ the address operator & returns
the memory address of a variable.
*/
#include <iostream>
using namespace std;

int main()
{
    int n=32;

    cout<< "n= " << n << endl;

//Address of integer n in memory
    cout<< "&n= " << &n << endl;

    return 0;
}
