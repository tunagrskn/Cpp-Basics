/*
Author: tunagrskn
Program: A program written to read a 3-digit number
from an entered character and display its square.
*/
#include <iostream>
using namespace std;
char c1, c2, c3;
int num;

int main()
{
    cout<<"Please enter 3-digit number: "<<endl;
    cin>>c1>>c2>>c3;

    num = (c1-'0')*100;
    num += (c2-'0')*10;
    num += c3-'0';

    cout<<num<<endl<<num*num<<endl;

    return 0;
}
