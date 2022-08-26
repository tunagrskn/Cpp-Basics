/*
Author: tunagrskn
Program: Alternative Age control program with Else
-if statements. User enters age as input.
The program gives output according to the
entered age range value.
*/
#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Please Enter your age: "<<endl;
    cin>>age;

    if (age<=1)
        cout<<"infant";
    if ((1<age) && (age<=3))
        cout<<"toddler";
    if ((3<age) && (age<=10))
        cout<<"child";
    if ((10<age) && (age<=18))
        cout<<"adolescent";
    if ((18<age) && (age<=25))
        cout<<"young";
    if ((25<age) && (age<=39))
        cout<<"adult";
    if ((39<age) && (age<=65))
        cout<<"middle-aged";
    if (65<age)
        cout<<"elderly";

    return 0;
}
