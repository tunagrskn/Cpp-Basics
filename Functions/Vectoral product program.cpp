/*
Author: Tuna Girişken
Program: The C++ program that reads components of two vectors A = (a1, a2, a3)
and B = (b1, b2, b3) and outputs the dot (scalar) product and the angle in degrees
between the vectors.
*/
#include <iostream>
#include <cmath>
using namespace std;

double dotProduct(double v1,double v2,double v3,double u1,double u2,double u3)
{
    return v1*u1+v2*u2+v3*u3;
}

double angleBetweenTwoVectors(double v1,double v2,double v3,double u1,double u2,double u3)
{
    return acos((v1*u1+v2*u2+v3*u3)/(sqrt(v1*v1+v2*v2+v3*v3)*sqrt(u1*u1+u2*u2+u3*u3)));
}

int main()
{
    double v1,v2,v3;
    double u1,u2,u3;
    cout<<"Please Enter The Values of Two Vectors:\n";
    cout<<"V = ";
    cin>>v1>>v2>>v3;
    cout<<"U = ";
    cin>>u1>>u2>>u3;
    cout<<"The Dot Product = "<<dotProduct(v1,v2,v3,u1,u2,u3)<<endl;
    cout<<"The Angle Between The Two Vectors = "<<angleBetweenTwoVectors(v1,v2,v3,u1,u2,u3)<<"rad";
    cout<<" = "<<180/M_PI*angleBetweenTwoVectors(v1,v2,v3,u1,u2,u3)<<"deg"<<endl;

    return 0;
}
