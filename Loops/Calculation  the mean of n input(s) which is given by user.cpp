/*
Author: Tuna Girişken
Program: The following code calculates the mean of n input(s) which is given by user.
*/
#include <iostream>
using namespace std;
int main()
{
    int n ;
    cout << "How many values will you input? ";
    cin >> n;
    double x, mean, total = 0.0;

    for (int i=1; i<=n; ++i)
    {
        cout << "Input value " << i << ": ";
        cin >> x;
        total = total + x;
    }

    mean = total/n;

    cout << "The sum is " << total << endl;
    cout << "The mean is " << mean << endl;

    system("PAUSE");
    return 0;
}
