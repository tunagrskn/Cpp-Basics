/*
Author: tunagrskn
Program: Isosceles triangle function
*/
#include <iostream>
using namespace std;

void isosceles_triangle()
{
    int line,i,j;
    cout<<"Enter your line value: "<<endl;
    cin >>line;

    for(i=1; i<=line; i++)
    {
        for(j=0; j<line-i; j++)
            cout<<" ";
        for(j=0; j<i*2-1; j++)
            cout<<"*";
        cout<<endl;
    }
}
int main()
{
    isosceles_triangle();
    return 0;
}
