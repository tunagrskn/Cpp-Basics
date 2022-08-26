/*
Author: tunagrskn
Program: This time using do-while.
Find the average of a sequence of integers terminated
with a negative value.
*/
#include <iostream>
using namespace std;

int main ()
{
    int sum=0, n, count=0;
    float avg;
    cout>>"Enter your numbers until a negative number: "

        do
    {
        cin>> n;
        if (n>=0)
        {
            sum += n;
            count++;
        }
    }

    while (n>=0);

    avg = (count)?(float)sum/count:0;
    cout<< avg <<endl;

    return 0;
}
