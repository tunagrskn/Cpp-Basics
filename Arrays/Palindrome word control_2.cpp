/*
Author: Tuna Girişken
Program: Reading a sequence of characters from the screen and check whether it is
palindrome and output the result like yes or no.
Hint: Palindrome is a sequence of characters which is same as its reverse e.g. kek
*/
#include <iostream>
using namespace std;

bool isPalindrome(char str[],int n)
{
    for(int i=0; i<=n/2; i++)
        if(str[i]!=str[n-1-i])
            return 0;
    return 1;
}

int main()
{
    int n;
    cout<<"Please enter the number characters:\n";
    cin>>n;
    char str[n];
    cout<<"Please enter the characters:\n";
    cin>>str;
    cout<<(isPalindrome(str,n)?"Yes":"No");

    return 0;
}
