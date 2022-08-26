/*
Author: Tuna Girişken
Program: Code to find the largest(maxiumum) element of array.
*/
#include <iostream>
using namespace std;

int main()
{
//number of elements in the array
    const int n = 5;
    double x[n], max;

//get the elements of the array
    cout<<"Input: "<<n<<" numbers"<<endl;

    for(int i=0; i<n; ++i)
        cin>>x[i];

    max=x[0];

    for (int i=1; i<n; i++)
    {
        if (x[i] > max)
            max = x[i];
    }

    cout << "maximum is " << max << endl;

    return 0;
}
