/*
Author: tunagrskn
Program: Write a program to compute the gross salary for
an employee given the number of hours worked
and the hourly rate. If the number of hours worked
is greater than 40, the hourly rate shall be 1.5
times the normal hourly rate for all overtime hours.
The program should print the overtime hours, the
regular salary, the overtime salary, and the gross
salary for an employee.
*/
#include <iostream>
using namespace std;
int main ()
{
    float hr,rt,rs;
    cout<<"Enter your worked hours: "<<endl;
    cin>>hr;
    cout<<"Enter your hourly rate: "<<endl;
    cin>>rt;

    cout<<"Your over time hours are: "<<(hr - 40)<<endl;
    cout<<"Your regular salary is: "<<(hr*rt)<<endl;
    rs = hr*rt;

    if(hr > 40)
    {
        rt *= 1.5;
        cout<<"Your over time salary is: "<<(-rs+(hr*rt))<<endl;
        cout<<"Your gross salary is: "<<(hr*rt)<<endl;
    }

    return 0;
}
