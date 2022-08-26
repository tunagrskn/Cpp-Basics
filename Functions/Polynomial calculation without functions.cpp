/*
Author: tunagrskn
Program: Consider the polynomial
P(x)=8x5+5x4+6x3+3x2+4x+2
Read a value for x and display the result
*/
#include<iostream>
using namespace std;

int main()
{
    float P_x, x, t;
    int i;
    P_x=0;
    cout<<"Enter your x value: "<<endl;
    cin>>x;
    /* Calculate term x^5 */
    for (t=1, i=0; i<5; i++)
        t *= x;
    P_x += 8*t;
    /* Calculate term x^4 */
    for (t=1, i=0; i<4; i++)
        t *= x;
    P_x += 5*t;
    /* Calculate term x^3 */
    for (t=1, i=0; i<3; i++)
        t *= x;
    P_x += 6*t;
    /* Calculate term x^2 */
    for (t=1, i=0; i<2; i++)
        t *= x;
    P_x += 3*t;
    /* Calculate term x^1 and x^0 */
    P_x += 4*x+2;
    cout<<"Result="<< P_x;
    return 0;
}
