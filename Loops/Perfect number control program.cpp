/*
Author: tunagrskn
Program: Program that finds whether the numbers entered by the user are perfect numbers.
(A number is perfect if sum of its positive divisors except
itself is equal to itself. Eg: 6=1+2+3; 28=1+2+4+7+14)
*/
#include <iostream>
using namespace std;

int main ()
{
    int n, sum=0;
    cout<<"Enter an integer number: "<<endl;
    cin>>n;

    for(int i=1; i<=n; i++)
        if(n%i == 0)
            sum+=i;
    if(sum == n)
        cout<<"Your number is perfcet number."<<endl;
    else
        cout<<"Your number is perfcet number."<<endl;

    /* Other way:
    for (int i = 1; i <= number / 2 ; i++)
    if (number % i == 0)
    sum += i;
    if (number == sum)
    cout<< number << "is a perfect number";
    else
    cout<< number << "is not a perfect number";
    */

    return 0;
}
