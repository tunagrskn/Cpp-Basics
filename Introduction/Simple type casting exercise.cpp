/*
Author: tunagrskn
Program: Type casting exercise
*/
#include <iostream>
using namespace std;
//Float
int main()
{
    int a = 5; // a=5
    char b = 'A'; //b = A

    a = a + b; //(int)A-->(65)+5 = 70
    float c = a + 3.0; // a=70 + 3 = 73

    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"c: "<<c<<endl;

    double d = 3.4;
    double e = d +2;

    cout<<"d: "<<d<<endl;
    cout<<"e: "<<e<<endl;

    return 0;
}

