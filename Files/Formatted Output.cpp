/*
Author: Tuna Girişken
Program: Formatted Output
Manipulators are injected into the output stream
to control the format of following streams of data.
In general we combine manipulators to obtain the desired results:
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x = 0.0005;

//setw(n) Sets the width of the next input/output to n.
//setprecision(n) Display the number with n decimal places.
    cout << setw(10) << fixed << setprecision(2) << x;
    cout << setw(15) << scientific << setprecision(3) << x;
}
