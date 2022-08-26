/*
Author: tunagrskn
Program: Code that displays the index of a three-element array.
*/
#include <iostream>
using namespace std;

int main()
{
    string array[3];
    cout<<"Enter your elements of array: "<<endl;

    for(int i=0; i<3; i++)
    {
        cin>>array[i];
    }

    for(int i=0; i<3; i++)
    {
        cout<<i<<".index: "<<array[i]<<endl;
    }

    return 0;
}
