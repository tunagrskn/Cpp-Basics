/*
Author: Tuna Girişken
Program: Circuit Analysis with C++
*/
#include <iostream>
#define R1 1100
#define R2 2200
#define R3 3300
using namespace std;

void circuit (double Vab, double &i1, double &i2, double &i3 );

int main()
{
    double Vab,i1,i2,i3;;
    cout<<"Resistors values "<<endl;
    cout<<"R1: "<<R1<<"\t";
    cout<<"R2: "<<R2<<"\t";
    cout<<"R3: "<<R3<<"\n";

    cout<<"Enter potential difference between points a and b: "<<endl;
    cin>>Vab ;

    circuit(Vab, i1, i2, i3);
    cout<<"Results: "<<endl;
    cout<<"i1: "<<i1<<endl;
    cout<<"i2: "<<i2<<endl;
    cout<<"i3: "<<i3<<endl;

    return 0;
}

void circuit (double Vab, double &i1, double &i2, double &i3 )
{
    i3 = Vab / (((R1*R2)/(R1+R2))+R3);
    i2 = i3 * R2/(R1+R2);
    i2 = i3 - i1;
}
