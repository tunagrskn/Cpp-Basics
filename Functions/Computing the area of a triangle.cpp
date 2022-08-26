/*
Author: Tuna Girişken
Program: Computing the area of a triangle
*/
#include <iostream>
#include <cmath>
using namespace std;

// The function prototype
double TArea(double, double, double);

int main()
{
    double a, b, c, area; //kenarlar ve alan için değişken tanımı
    cout << "Enter the sides of the triangle: ";
    cin >> a >> b >> c;
    area = TArea(a, b, c); // parametereler gönderildi
    cout << "The area of this triangle is " << area << endl;

    return 0;
}
// Returns the area of any triangle
double TArea(double a, double b, double c)
{
// Check if any side is negative
    if (a<0. || b<0. || c<0.) return 0.0;
// Check if any side is greater than sum of two
//üçgen eşitsizliği iki kenarın toplamı daima diğer kenardan büyük olmalı
    if (a >= b+c) return 0.0;
    if (b >= a+c) return 0.0;
    if (c >= a+b) return 0.0;
// Calculate and return the area
    double u, area;
    u = 0.5*(a+b+c);
    area = sqrt(u*(u-a)*(u-b)*(u-c));
    return area;
}
