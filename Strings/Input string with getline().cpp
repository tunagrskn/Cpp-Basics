/*
Author: Tuna Girişken
Program: Input string with getline()

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
string st;
cout<<"Enter your word: "<<endl;
getline(cin,st);
cout<<"Your word is: "<<st<<endl;

return 0;
}
