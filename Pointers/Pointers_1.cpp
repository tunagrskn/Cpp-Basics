/*
Author: Tuna Girişken
Program: Pointers
*/
#include <iostream>
using namespace std;

int main()
{
    int n = 30;
    int *p = &n;

    cout<<" n = "<<n<< endl; //30
    cout<<" &n = "<<&n<< endl; //address of n
    cout<<" p = "<<p<< endl; // address of n
    cout<<" &n = "<<&n << endl; // address of n
    cout<<" *p = "<<*p<< endl; // 30

    return 0;
}


