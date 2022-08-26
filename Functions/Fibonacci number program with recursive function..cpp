/*
Author: Tuna Girişken
Program: Fibonacci number program with recursive function.
*/
#include <iostream>
using namespace std;

int fibo(int n)
{
    int result;
    if(n<=2)
        return 1;
    else
        result = fibo(n-1) + fibo(n-2);
    return result;
}

int main()
{
    int n;
    cout<<"Please Enter an integer number: "<<endl;
    cin>>n;
    cout<<fibo(n)<<endl;

    return 0;
}
