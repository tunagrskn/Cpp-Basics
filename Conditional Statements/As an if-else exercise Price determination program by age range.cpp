/*
Author: tunagrskn
Program: Wage determination program by age range.
It is also an if-else statement exercise.
*/
#include<iostream>
using namespace std;

int main(void)
{
    int yas;
    int ucret = 0;
    cout<<"Yasini giriniz: "<<endl;
    cin>>yas;

    if(yas > 65)
    {
        ucret = 10;
        cout<<"Ucretiniz: "<<ucret<<endl;
        return 0;
    }

    else if(yas>18 & yas<65)
    {
        ucret = 20;
        cout<<"Ucretiniz: "<<ucret<<endl;
        return 0;
    }

    else
        ucret = 15;
    cout<<"Ucretiniz: "<<ucret<<endl;

    return 0;
}


