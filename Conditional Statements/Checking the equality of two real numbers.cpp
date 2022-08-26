/*
Author: tunagrskn
Program: Write a program that reads two real
numbers and checks if they are equal.
(Assume first number is smaller.)
*/
#include <iostream>
using namespace std;
#define EPSILON 0.000000001
float r1, r2;

int main()
{
    cout<<"Please enter two integer number: "<<endl;
    cin>>r1>>r2;

    if ((r2-r1)<=EPSILON)
        cout<<"The numbers are (almost) equivalent";

    return 0;
}
