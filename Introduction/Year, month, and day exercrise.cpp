/*
Author: Tuna Girişken
Program: Write a program that, when given a (positive) number of days n, prints out the year, month, and day
representation of n. Assume one year is 12 months and one month is 30 days.
Examples; 759 days  2 year(s), 1 month(s), 9 day(s)
Output should look exactly like this:
>Please enter a number of days:
>358
>0 year(s), 11 month(s), 28 day(s)
*/
#include <iostream>
using namespace std;
int main()
{
    int total,d,w,m,y;
    cout<<"Please enter a number of days"<<endl;
    cin>>total;
    y = total/360;
    m = (total%360)/30;
    d = ((total%360)%30);

    cout<<"Year: "<<y<<endl;
    cout<<"Month: "<<m<<endl;
    cout<<"Days: "<<d<<endl;

    return 0;
}
