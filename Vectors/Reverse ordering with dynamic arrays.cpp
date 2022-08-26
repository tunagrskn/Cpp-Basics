/*
Author: Tuna Girişken
Program: Reverse ordering with dynamic arrays
*/
#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int n;
    cout<<"Enter the size of your dynamic array: "<<endl;
    cin>>n;

//A dynamic array named dyn is defined.
    double *dyn = new double [n];

//The index values ​​are taken from the user
    for(int i=0; i<n; i++)
    {
        cout<<"Enter " <<i+1<<". number: ";
        cin>>dyn[i];
    }

//Reverse ordering
    cout<<"In reverse order: " <<endl;
    for(int i=n-1; i>=0; i--)
    {
        cout<< dyn[i] <<" ";
    }

    return 0;
}
