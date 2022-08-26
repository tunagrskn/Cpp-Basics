/*
Author: tunagrskn
Program: Find the average of a sequence of integers
terminated with a negative value.
*/
#include <iostream>
using namespace std;

int main ()
{
    int sum=0, n, count=0;
    float avg;
    cin >> n;
    cout>>"Enter your numbers until a negative number: "

    while (n>=0)
    {
        sum += n;
        count++;
        cin >> n;
    }

    avg = (count)?(float)sum/count:0;
    cout<<avg;

    return 0;
}
