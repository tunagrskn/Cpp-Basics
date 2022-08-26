/*
Author: tunagrskn
Program: gauss sum formula
*/
#include <iostream>
using namespace std;

int main ()
{
    int n;
    int sum=0;
    cout<<"Enter an integer number for summation: "<<endl;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        sum +=i;
    }

    cout<<"Summation is: "<<sum<<endl;

    return 0;
}
/*
OR
cin >> n;
sum = n * ((n+1)/2);
*/
