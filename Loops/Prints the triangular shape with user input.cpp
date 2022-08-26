/*
Author: Yuna Girişken
Program: The following code which prints the following triangular shape.
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter an integer: "<<endl;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<i*2-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    system("PAUSE");
    return 0;
}
