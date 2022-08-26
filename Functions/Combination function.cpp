/*
Author: tunagrskn
Program: Combination function
. Write a function that calculates the
combination
C(n, k) = n!/[(n − k)! ∙ k!]
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

long comb(int a, int b)
{
    long result;
    if (a < 0 || b < 0 || a < b)
        return 0;

    result = (factorial(a)/(factorial(a-b)*factorial(b)));
    cout<<"Your combination result is: "<<result;
    return result;
}
int main()
{
    int a, b;
    cout<<"Enter your combination values: "<<endl;
    cin>>a>>b;
    comb(a,b);

    return 0;
}
