/*
Author: Tuna Girişken
Program: Writing data to file
*/
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
    ofstream dosya("projectile.txt");
    if(dosya.is_open() == false)
    {
        cout << "cannot open file projectile.txt\n";
        return 0;
    }
    int x,y;
    double v0 = 100.0, t = 0.0, g = 9.81;
    double theta = 60.0 * M_PI/180.0;
    while(t <= 20.0)
    {
        x = v0*cos(theta)*t;
        y = v0*sin(theta)*t - 0.5*g*t*t;
        dosya << t << '\t' << x << '\t' << y << endl;
        t = t + 1.0;
    }
    dosya.close();
    cout << "Data is saved to projectile.txt\n";
    return 0;
}
