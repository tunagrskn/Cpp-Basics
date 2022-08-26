/*
Author: Tuna Girişken
Program: Initializing Strings
• Instead of initializing the elements of a
string one-by-one, you can initialize it
using a string.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string st;
    st="C++ Programing";

    char greeting_1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char greeting_2[] = "Hello";

    cout<<st<<endl;
    cout<<greeting_1<<endl;
    cout<<greeting_2<<endl;

    return 0;
}
