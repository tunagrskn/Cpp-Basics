/*
Author: Tuna Girişken
Program: Reading data from a file called student.dat
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    const int n = 10;
    int score[n];
    string name[n];
    double sum = 0.0;

    ifstream myFile("student.dat");

    for (int i=0; i<n; i++)
    {
        myFile >> name[i] >> score[i];
        sum = sum + score[i];
    }

    myFile.close();
    cout << "mean of the class = " << sum / n << endl;
}
