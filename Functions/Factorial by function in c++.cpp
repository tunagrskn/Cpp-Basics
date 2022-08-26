/*
Author: tunagrskn
Program: Program that can perform factorial
operations using a function
*/
#include<iostream>
using namespace std;

void factorial (int sayi)
{
    int fact = 1;
    for(int i=2; i<=sayi; i++)
    {
        fact*=i;
    }
    cout<<"factorial:"<<fact<< endl;
}

int main()
{

    int input;
    cout<< "Enter a number:";
    cin>>input ;

    factorial(input);

    return 0;
}
