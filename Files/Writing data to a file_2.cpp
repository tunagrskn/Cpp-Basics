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
        double x = 1.0/i;
        dosya << setw(3) << i << setw(10) << x << endl;
    }
    dosya.close();
}
