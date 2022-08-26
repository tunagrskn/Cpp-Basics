/*
Author: tunagrskn
Program: Changing value parameters
• Any change made on value parameters is lost
after the function terminates.
*/
#include <iostream>
using namespace std;

void f(int c)
{
    c++;
    cout<<"in f(): c= " << c << endl;
}

int main()
{
    int c=5;
    f(c);
    cout<<"After f(): c= " << c << endl;
}
