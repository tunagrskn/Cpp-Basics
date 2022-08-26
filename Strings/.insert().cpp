/*
Author: Tuna Girişken
Program: .insert()
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str="to be question";
    string str2="the ";
    string str3="or not to be";

    str.insert(6,str2); //to be the question

    str.insert(6,str3,3,4); //3 poziyonu 4 uzunluğu //to be not the question
    str.insert(10,"that is cool",8); //"that is " 8 uzunulupundaki karakterler //to be not that is the question
    str.insert(10,"to be ");
    str.insert(15,1,':');
    str.insert(str.begin()+5,',');
    str.insert (str.end(),3,'.');
    str.insert (str.begin()+6,str3.begin(),str3.begin()+3);
    cout << str << '\n';
    return 0;
}
