/*
Author: Tuna Girişken
Program:  Write a C++ code that will read the geometric code of a shape, and lengths of the shape. It
will give the area of the shape. The code should work only for square or rectangle. User will enter “S” or
“s” for square computation or “R” or “r” for rectangle computation. For square only one length will be
requested from user. For rectangle two lengths will be requested. Use if else structure to test if the
shape is square or rectangle.
Ex1: Enter S or s for selecting Square :
Enter R or r for selecting Rectangle :
S
*********
Enter the side of a square
5.1
The area of the square=26.01
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    char ch;
    float b1,b2,a;

    cout<<"Enter S or s for selecting Square:"<<endl;
    cout<<"Enter S or s for selecting Square:"<<endl;

    cin>>ch;

    if(ch=='S' || ch=='s')
    {
        cout<<"*********"<<endl;
        cout<<"Enter the side of a square"<<endl;
        cin>>a;
        cout<<"The area of the square:"<<pow(a,2)<<endl;
    }

    else if(ch=='R' || ch=='r')
    {
        cout<<"*********"<<endl;
        cout<<"Enter the two sides of the rectangle"<<endl;
        cin>>b1>>b2;
        cout<<"The area of the rectangle:"<<b1*b2<<endl;
    }

    return 0;
}
