/*
Author: Tuna Girişken
Program: Write a program to calculate the monthly telephone bills as per the following rule:
Minimum bill is 200TL for upto 100 calls.
0.60TL per call for next 50 calls.
0.50TL per call for next 50 calls.
0.40TL per call for any call beyond 200 calls.
*/
#include <iostream>

using namespace std;
int main()
{
    int call, result;
    float temp = 0;
    cout<<"Enter your monthly calls amount"<<endl;
    cin>>call;

    if(call<=200)
    {
        cout<<"Your telephone bill is: 200"<<endl;
    }
    else if (call>200 && call<=250)
    {
        temp = call - 200;
        temp *= 0.6;
        result = 200 + temp;
        cout<<"Your telephone bill is: "<<result<<endl;
    }
    else if (call>250 && call<=300)
    {
        temp = call - 200;
        temp *= 0.5;
        result = 200 + temp;
        cout<<"Your telephone bill is: "<<result<<endl;
    }
    else
        temp = call - 200;
    temp *= 0.4;
    result = 200 + temp;
    cout<<"Your telephone bill is: "<<result<<endl;
    return 0;
}
