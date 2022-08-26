/*
Author: tunagrskn
Program: Parameter definition veils global definition
• Similar to local variables, parameter definition with the
same name as the global variable also veils the global
definition.
*/
#include <iostream>
using namespace std;

int e=10;
void f(int e)
{
    e++;
    cout<<"in f(): d= " << e << endl;
}
int main()
{
    int g=30;
    f(g);
    cout<<"After first call to f(): g="<< g << endl;
}
