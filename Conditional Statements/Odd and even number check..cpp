/*
Author: tunagrskn
Program: Read a number and state whether it is
odd or even.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a integer number: "<<endl;
    cin>> num;
    cout<< num <<" is an ";

    if (num%2!=0)
        cout<<"odd ";
    else
        cout<<"even ";

    cout<<"number.\n ";

    return 0;
}
