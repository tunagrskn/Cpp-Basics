/*
Author: tunagrskn
Program: Changing local variables
• Any change made on local variables is lost after the
function terminates.
*/
#include <iostream>
using namespace std;

void f()
{
    int a=10;
    a++;
    cout<<"in f(): a= " << a << endl;
}
int main()
{
    int a=5;
    f();
    cout<<"After first call to f():a= "<< a << endl;
    f();
    cout<<"After second call to f():a= "<< a <<endl;
}
