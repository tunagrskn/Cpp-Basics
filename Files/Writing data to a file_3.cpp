/*
Author: Tuna Girişken
Program: Writing data to a file called data.txt
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    double a[4] = {1,2,3,4};
    ofstream dosyam("data.txt");

    for(int i=0; i<4; i++)
    {
        dosyam<<a[i]<<endl;
    }
    dosyam.close();
    return 0;
}
