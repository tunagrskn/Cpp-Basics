/*
Author: Tuna Girişken
Program: Reading data from a file called data.txt
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    double a[4];
    ifstream myFile("data.txt");

    for (int i=0; i<4; i++)
    {
        myFile >> a[i];
        cout << "a[" << i << "]=" << a[i] << endl;
    }

    myFile.close();
}
