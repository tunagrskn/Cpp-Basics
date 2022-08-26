/*
Author: Tuna Girişken
Program: Program  reads 3 integers and outputs addition of
first two integers multiplies by third integer.
*/
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter first integer"<<endl;
    cin>>a;
    cout<<"Enter second integer"<<endl;
    cin>>b;
    cout<<"Enter third integer"<<endl;
    cin>>c;

    a = a*c;
    b = b*c;

    cout<<"First multiple is "<<a<<endl;
    cout<<"Second multiple is "<<b<<endl;
    system ("Pause");

    return 0;
}
