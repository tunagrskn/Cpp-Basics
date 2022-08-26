/*
Author: Tuna Girişken
Program: Writing data to a file called inverse.txt
*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    ofstream dosya("inverse.txt");
    dosya <<setprecision(2) << scientific;

    for (int i=1; i<=10; i++)
    {
        double x = 1.0/i; // 1/1 = 1 --> 1.00e+00
                          // 1/2 = 0.5 --> 5.00e-01
                          // 1/3 = 0.33 --> 3.33e-01
                          // ...
                          // 1/10 = 0.1 --> 1.00e-01

        dosya << setw(3) << i << setw(10) << x << endl;
    }

    dosya.close();
}
