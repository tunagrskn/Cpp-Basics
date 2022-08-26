/*Author: tunagrskn
Program: Swap function
Write a function that exchanges its
parameters.
*/
#include <iostream>
using namespace std;

void swap (int *a, int*b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout<<endl;
    cout<<"Your new 1st number: "<<*a<<"\nYour new 2nd number: "<<*b<<endl;
}

int main()
{
    int first,second;
    cout<<"Enter your 1st number:"<<endl;
    cin>>first;
    cout<<"Enter your 2nd number:"<<endl;
    cin>>second;
    swap(&first,&second);
}
