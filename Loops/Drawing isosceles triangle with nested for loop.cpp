/*
Author: tunagrskn
Program: Draw an isosceles triangle using '*'
character. Number of lines is read as input.
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
        for (j = 0; j < line - i; j++)
            cout<<" ";
        for (j = 0; j < i * 2 - 1; j++)
            cout<<"*";
        cout<<"\n";
    }

    return 0;
}
