/*
Author: Tuna Girişken
Program: .append()
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    string str2="Writing ";
    string str3="print 10 and then 5 more";

    str.append(str2); //Writing
    str.append(str3,6,3); //Writing 10
    str.append("dots are cool",5); //Writing 10 dots
    str.append("here: "); //Writing 10 dots here:
    str.append(10,'.'); //Writing 10 dots here: ..........
    str.append(str3.begin()+8,str3.end()); //Writing 10 dots here: ..........  and then 5 more
    str.append<int>(5,0x2E); // //Writing 10 dots here: ..........  and then 5 more.....

    cout << str << '\n';

    return 0;
}
