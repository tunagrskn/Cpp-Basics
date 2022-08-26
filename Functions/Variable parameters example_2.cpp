/*
Author: tunagrskn
Program: Call by reference
Variable parameters
*/
#include <iostream>
using namespace std;

void f(int *a)
{
    *a+=5;
    cout<<"in function f(): a= " << *a << endl;
}

int main()
{
    int a=10;
    cout<<"in main(), before calling f(): a= " << a << endl;
    f(&a);
    cout<<"in main(), after calling f(): a= " << a << endl;
}
