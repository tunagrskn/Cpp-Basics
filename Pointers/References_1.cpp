/*
Author: Tuna Girişken
Program: References_1
The reference is an alias, a synonym for a variable.
It is decelerated by using the reference operator &.
*/
#include <iostream>
using namespace std;

int main()
{
    int n=32;

    //r is a reference for n
    int &r=n;
    cout << n << " " << r <<endl; // 32 32

    --n;
    cout << n << " " << r <<endl; //31 31

    r*=2;
    cout << n << " " << r <<endl; //62 62
    cout << &n << " " << &r <<endl; //same two address

    return 0;
}
