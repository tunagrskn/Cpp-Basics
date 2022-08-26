/*
Author: Tuna Girişken
Program: Program that, when given a string st, encrypts st with Spartacus encryption.
(Spartacus encryption circular shifts each English character in a string by 2
positions; ʻaʼ becomes ʻcʼ, ʻDʼ becomes ʻFʼ, ʻzʼ becomes ʻbʼ, ...)
Examples : seCrEt
--> ugEtGv
Output Should look exactly like this:
> Please enter a string:
> yAZ
> aCB
*/

#include <iostream>
#include <string>
using namespace std;

string encrypt(string str, int step)
{
    step%= 26;
    for(int i = 0; i< str.length(); i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z' && str[i] > 'Z' - step)
            str[i] = (char)('A' - 1 +(str[i] + step -'Z'));
        else if(str[i] >= 'a' && str[i] <= 'z' && str[i] > 'z' - step)
            str[i] = (char)('a' - 1 +(str[i] + step - 'z'));
        else if(str[i] >= '0' && str[i] <= '9' && str[i] + step > '9')
            str[i] = (char)('0' - 1 + ( str[i] + step - '9'));
        else
            str[i] = (char)((str[i]) + step);
    }

    return str;
}

int main()
{
    string str = "";
    cout<< "Write what you want to encrypt it with Spartacus Encryption :" << endl;
    cin>>str;
    cout<<encrypt(str, 2)<<endl;

    return 0;
}
