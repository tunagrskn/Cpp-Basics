/*
Author: tunagrskn
Program: Read 10 integers and find their product. However,
if one of the numbers is non-positive, stop input.
*/
#include <iostream>
using namespace std;

int main ()
{
    long int mul=1;
    int i, num;
    cout<<"Enter 10 positive integer: "<<endl;
    for (i=0; i<10; i++)
    {
        cin>>num;
        if (num<=0)
            break;
        mul *= num;
    }

    cout<<mul<<endl;

    return 0;
}
