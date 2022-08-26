/*
Author: Tuna Girişken
Program: Trigonometric Table
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout.precision(3);
    cout << fixed;

    for(int deg=0; deg <= 90; deg += 5)
    {
        double x = deg * M_PI/180.0;
        cout << deg << '\t' << sin(x) << '\t' << cos(x) << endl;
    }

    return 0;
}
