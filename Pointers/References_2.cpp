/*
Author: Tuna Girişken
Program: References_2
C++ References vs Pointers
• References are often confused with pointers but
three major differences between references and
pointers are:
• You cannot have NULL references. You must
always be able to assume that a reference is
connected to a legitimate piece of storage.
• Once a reference is initialized to an object, it
cannot be changed to refer to another object.
Pointers can be pointed to another object at any
time.
• A reference must be initialized when it is
created. Pointers can be initialized at any time.
*/
#include <iostream>
using namespace std;

void swap(double &x,double &y)
{
    double z;
    z=x;
    x=y;
    y=z;
}
int main()
{
    double a =11.1, b=22.2;
    cout<<a <<" " << b << endl;

    swap(a,b);
    cout<<a <<" " << b << endl;

    return 0;
}
