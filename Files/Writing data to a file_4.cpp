/*
Author: Tuna Girişken
Program: Writing data to a file called data.txt
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    double a[4] = {8.4, 3.6, 9.1, 4.7};
    ofstream myFile("data.txt");

    if ( myFile.is_open() )
    {
        for (int i=0; i<4; i++)
            myFile << a[i] << endl;
        myFile.close();
    }

    else
        cout << "Unable to open file!";
}
