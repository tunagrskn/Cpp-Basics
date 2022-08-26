/*
Author: Tuna Girişken
Program: Format Manipulators
In C++ there are different ways to format input and output.
In this course we will only use format manipulators.
These are objects that are placed in the data stream to
change the characteristics of the input or output.
*/

#include <iostream>
#include <iomanip> //to use manipulators you need to include the <iomanip> header.
using namespace std;

int main()
{
double x = 123.4567890123;
cout<<x<<endl; //Default format.

cout << fixed << setprecision(9) << x << endl; //Fixed format, with 9 decimal places.
cout << scientific << setprecision(7) << x << endl; //Scientific format with 7 decimal places.

return 0;
}
