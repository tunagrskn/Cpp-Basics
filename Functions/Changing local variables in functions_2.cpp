/*
Author: tunagrskn
Program: Changing global variables
• Any change made on global variables remains after the
function terminates.
This is called side effect. Avoid side effects.
*/
#include <iostream>
using namespace std;
int b;

void f()
{
    b++;
    cout<<"in f(): b="<< b << endl;
}

int main()
{
    f();
    cout<<"After first call to f(): b="<< b << endl;
    f();
    cout<<"After second call to f(): b="<< b <<endl;
}


