/*
Author: Tuna Girişken
Program: Length Converter converts a given length in m to other units
*/
#include <iostream>
using namespace std;
#define FT 3.280839895013 // foot
#define YD 1.093613298338 // yard

int main()
{
    double x;
    const double IN=1.0e+2/2.54; //inch
    enum { MM=1000, CM= 100, DM= 10 };

    cout << "Input a lenght in meters: ";
    cin >> x;
    cout << "This lenght is " << endl;
    cout << x*MM << " mm" << endl;
    cout << x*CM << " cm" << endl;
    cout << x*DM << " dm" << endl;
    cout << x*IN << " inch" << endl;
    cout << x*FT << " foot" << endl;
    cout << x*YD << " yard" << endl;

    system("PAUSE");

    return 0;
}
