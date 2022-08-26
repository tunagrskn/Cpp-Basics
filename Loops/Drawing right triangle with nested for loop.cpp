/*
Author: tunagrskn
Program: Draw a right triangle using '*' character.
Number of lines is read as input.
*/
#include <iostream>
using namespace std;

int main()
{
    int line, i, j;
    cout<<"Enter the height :";
    cin >> line;

    for (i = 1; i <= line; i++)
    {
        for (j = 1; j <= i ; j++)
            cout<<"*";
        cout<<"\n";
    }

    return 0;
}
