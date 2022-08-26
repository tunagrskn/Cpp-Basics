/*
Author: tunagrskn
Program:  Output example 1.
• What is the output of this one?
*/
#include <iostream>
using namespace std;
int f(int x, int y)
{
    cout<<"in f(): x=" <<x << " y=" <<y << endl;
    return x+y;
}
int g(int x, int y)
{
    cout<<"in g(): x=" <<x << " y=" <<y << endl;
    return y-x;
}
int h(int x, int y)
{
    cout<<"in h(): x=" <<x << " y=" <<y << endl;
    return x/y;
}
int main()
{
    int a=10, b=20, c=30, d=40;
    cout<<"in main(): " << h(f(a,b),g(c,d));
    return 0;
}
