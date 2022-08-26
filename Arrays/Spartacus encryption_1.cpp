/*
Author: Tuna Girişken
Program: program that, when given a string st, encrypts st with Spartacus encryption.
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
using namespace std;

int main()
{
    string x;
    cout<<"Enter your word: "<<endl;
    cin>>x;

    for(int i=0; i<x.size(); i++)
        if(x[i] == 89)
            x[i] = 65;

        else if(x[i] == 90)
            x[i] = 65;

        else if(x[i] == 121)
            x[i] = 97;

        else if(x[i] == 122)
            x[i] = 98;

        else
            x[i] += 2;

    cout<<" Encrypted word is: "<<x<<endl;

    return 0;
}
