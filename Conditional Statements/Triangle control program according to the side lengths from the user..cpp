/*
Author: tunagrskn
Program:
• Write a program to determine whether three
lengths a, b, and c form a triangle.
• Conditions: |a-b|<c and c< a+b
• Modify the program so that it also
determines whether the triangle is isosceles
or equilateral.
*/
#include <cmath>
#include <iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cout<<"Enter your 1. length: "<<endl;
    cin>>a;

    cout<<"Enter your 2. length: "<<endl;
    cin>>b;

    cout<<"Enter your 3. length: "<<endl;
    cin>>c;

    if(abs(a-b)<c && c<a+b)
    {
        cout<<"Your shape is triangle: "<<endl;
        if(a==b || c==b || a==c)
        {
            cout<<"Your triangle is isosceles" <<endl;
        }
        else if (a==b==c)
        {
            cout<<"Your triangle is equilateral" <<endl;
        }
    }
    else
        cout<<"Your shape is not triangle" <<endl;

    return 0;
}
