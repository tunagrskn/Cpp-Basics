/*
Author: tunagrskn
Program: Age control program with Else
-if statements. User enters age as input.
The program gives output according to the
entered age range value.
*/
#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Please enter your age: "<<endl;
    cin>>age;

    if (age<=1)
        cout<<"infant";
    else if (age<=3)
        cout<<"toddler";
    else if (age<=10)
        cout<<"child";
    else if (age<=18)
        cout<<"adolescent";
    else if (age<=25)
        cout<<"young";
    else if (age<=39)
        cout<<"adult";
    else if (age<=65)
        cout<<"middle aged";
    else
        cout<<"elderly";

    return 0;
}
