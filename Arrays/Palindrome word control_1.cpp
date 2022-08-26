/*
Author: Tuna Girişken
Program: Reading a sequence of characters from the screen and check whether it is
palindrome and output the result like yes or no.
Hint: Palindrome is a sequence of characters which is same as its reverse e.g. kek
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x;
    cout<<"Enter the your word: "<<endl;
    cin>>x;

    int count = 0;

    for(int i=0; i<x.size(); i++)
    {
        if(x[i] != x[x.size()-1-i])
            break;
        count++;
    }

    if(count == x.size())
        cout<<"Your word is Palindrom"<<endl;

    else
        cout<<"Your word is not Palindrom"<<endl;

    return 0;
}
