/*
Author: tunagrskn
Program: Read one character as input; check if it is a
digit; if so, convert it to an integer and
display twice that number; o/w display an
error message.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char ch;
    int num;
    cout<<"Enter a digit"<<endl;
    cin>> ch;

    if (('0'<=ch) && (ch<='9'))
    {
        num=ch-'0';
        cout<<"Twice input is "<< 2*num<<endl;
    }
    else
        cout<<"Input is not a digit! \n";

    return 0;
}
