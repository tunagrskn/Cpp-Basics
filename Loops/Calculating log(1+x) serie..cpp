/*
Author: tunagrskn
Program: • Write a C++ program that will calculate
log(1+x) = x - x^2/2 + x^3/3 - x^4/4 + ... x<1

using series representation. Note that this
series converges if
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double sum, term, x=2.0;
    int n;

    while(x>1.0 || x<-1.0)
    {
        cout<<"Enter a value between -1 and+1:";
        cin>>x;
    }

    term=sum=x;
    n=1;

    while(fabs(term) > 1.0e-8)
    {
        ++n;
        term= -term*(x/n)*(n-1);
        sum += term;
    }

    cout<<"The sum of the series:"<< sum<<endl;
    cout<<"Number of terms in the series:"<< n<<endl;
    cout<<"cmat function result:"<<log(1+x)<<endl;

    return 0;
}
