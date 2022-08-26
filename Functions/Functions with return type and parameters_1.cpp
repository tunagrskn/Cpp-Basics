/*
Author: tunagrskn
Program: Functions with return type and parameters
*/
#include <iostream>
using namespace std;
/* Calculate a^b */
float power(float a, int b)
{
    float result=1;
    for (; b>0; b--)
        result *= a;
    return result;
}

int main()
{
    float P_x, x;
    cout<<"Enter your x value:"<<endl;
    cin>>x;
    P_x = 8 * power(x,5) +
          5 * power(x,4) +
          6 * power(x,3) +
          3 * power(x,2) +
          4 * x + 2;

    cout<<"Result="<< P_x;

    return 0;
}
