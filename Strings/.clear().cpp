/*
Author: Tuna Girişken
Program: .clear()
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char c;
    string str;
    cout << "Please type some lines of text. Enter a dot (.) to finish:\n";
    do
    {
        c = cin.get(); //karakteri aldı
        str += c; //karakterleri str nin içinde biriktirdi
        if (c=='\n') //eğer alt satır işareti gelirse
        {
            cout << str; //str de o zamana kadar biriken karakterleri bastı
            str.clear(); //stryi boşalttı
        }
    }
    while (c!='.'); //nokta gelirse return 0 oldu program bittti

    return 0;
}
