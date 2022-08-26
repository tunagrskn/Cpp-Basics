/*
Author: Tuna Girişken
Program: The arithmetic mean of three integer numbers.
*/
#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    float sum = 0,mean = 0;

    cout<<"Enter the three integer numbers: "<<endl;

//Input a,b,c
    cin>>a;
    cin>>b;
    cin>>c;

//Set sum=a+b+c
    sum = a+b+c;

//Set mean=sum/3
    mean = sum/3;

// Output a,b,c,mean

    cout<<"Your numbers are "<<a<<" "<<b<<" "<<c<<" and Mean these numbers is "<< mean <<endl;

    return 0;
}
