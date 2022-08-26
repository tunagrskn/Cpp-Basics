/*
Author: tunagrskn
Program: Create a multidimensional array from
the user. Program that can display this array.
*/
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter your 3x3 matirs indexes:"<< endl;
    int matris[3][3];

    for(int i =0; i<3; i++)
    {
        for(int j =0; j<3; j++)
        {
            cin >>matris[i][j];
        }
    }

    cout<< "Matris" << endl;

    for(int i =0; i<3; i++)
    {
        for(int j =0; j<3; j++)
        {
            cout <<matris[i][j]<< " ";
        }
        cout<< endl;
    }

    return 0;
}
