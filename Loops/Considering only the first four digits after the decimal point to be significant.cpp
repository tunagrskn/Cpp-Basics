/*
Author: tunagrskn
Program: Solve the question by considering only the first
four digits after the decimal point to be significant.
Eg: If the input is 35.794678, the output should be 7946.35.
*/
#include <iostream>
using namespace std;

int main()
{
    float num, dec, whole;
    int i;
    cout<<"Enter your float number: "<<endl;
    cin>>num;

    whole = (int) num;
    dec = num-whole;

    while (whole>1)
        whole /= 10;

    for (i=0; i<4; i++)
        dec *= 10;

    num = (int)dec+whole;
    cout<<num<<endl;

    return 0;
}
