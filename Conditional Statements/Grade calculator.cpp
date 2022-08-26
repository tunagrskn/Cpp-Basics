/*
Author: Tuna Girişken
Program: Grade calculator
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int mt1, mt2, fin;
    cout << "Enter the three exam scores: ";
    cin >> mt1 >> mt2 >> fin;

    double avr = 0.3*mt1 + 0.3*mt2 + 0.4*fin;
    cout << "The weighted score is " << avr << endl;
    string grade;

    if (avr < 40. ) grade = "FF";
    else if (avr >= 40. && avr < 50.) grade = "FD";
    else if (avr >= 50. && avr < 60.) grade = "DD";
    else if (avr >= 60. && avr < 70.) grade = "DC";
    else if (avr >= 70. && avr < 75.) grade = "CC";
    else if (avr >= 75. && avr < 80.) grade = "CB";
    else if (avr >= 80. && avr < 85.) grade = "BB";
    else if (avr >= 85. && avr < 90.) grade = "BA";
    else grade = "AA";

    cout << "The grade is " << grade << endl;
    system("Pause");

    return 0;
}
