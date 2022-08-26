/*
Author: tunagrskn
Program: Read an integer and print its digits in reverse order.
*/
#include <iostream>
using namespace std;

int main()
{
    int num, digit;
    cout<<"Enter your integer number: "<<endl;
    cin>>num;

    while (num)
    {
        digit=num%10;
        num /= 10;
        cout<<digit;
    }

    return 0;
}
