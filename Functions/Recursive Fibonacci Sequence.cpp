/*
Author: tunagrskn
Program:  Recursive functions
• Recursive Fibonacci Sequence
*/
#include <iostream>
using namespace std;
float fibonacci(int n)
{
    if (n<=2)
        return (1.0);
    else
        return(fibonacci(n-1)+fibonacci(n-2));
}
int main()
{
    float result;
    int n=0;
    while(n<=0)
    {
        cout<<"Enter n";
        cin>>n;
    }

    result=fibonacci(n);
    cout<< n <<" th Fibonacci number:"<< result <<endl;

    return 0;
}
