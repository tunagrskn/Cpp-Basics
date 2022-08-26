/*
Author: Tuna Girişken
Program: Write a C++ code that will read a real data, x, and compute the value of the function f(x) based on the
value of x.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x;
    float result = 0;
    cout<<"Please enter the value of x:"<<endl;
    cin>>x;

    if(x<=0)
    {
        cout<<"For x="<<x<<" Value of f(x)="<<result<<endl;
        //cout<<"???"<<endl;
    }

    else if(x>0 && x<=10)
    {
        result = 3 / sqrt(pow(x,3)+1);
        cout<<"For x="<<x<<" Value of f(x)="<<result<<endl;
        //cout<<"??"<<endl;
    }

    else
    {
        result = 2*pow(x,2);
        cout<<"For x="<<x<<" Value of f(x)="<<result<<endl;
        //cout<<"?"<<endl;
    }
    return 0;
}
