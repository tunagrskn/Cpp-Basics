/*
Author: tunagrskn
Program: Permutation Function
.Write a function that calculates the
permutation
P(n, k) = n!/(n−k)!
*/
#include <iostream>
using namespace std;

long factorial (int n)
{
    long result=1;
    for(int i=n; n>=1; n--)
    {
        result *=n;
    }
    //cout<<"Your factorial result is: "<<result<<endl;
    return result;
}

long perm(int a, int b)
{
    long answer;
    if ( (a<0) || (b<0) || (a<b) )
        return 0;

    answer = factorial(a) / factorial (a-b) ;
    cout<<"Your permutation result is: "<<answer;
    return answer;

}
int main()
{
    int a, b;
    cout<<"Enter your permutation values: "<<endl;
    cin>>a>>b;
    perm(a,b);

    return 0;
}
