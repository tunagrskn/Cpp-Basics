/*
Author: tunagrskn
Program: Find the number of passengers/car for
every flat in a building with 40 flats.
*/
#include <iostream>
using namespace std;

int main ()
{
    int i, no_cars, no_residents;

    for (i=0; i<10; i++)
    {
        cout<<"Enter your number of passengers: "<<endl;
        cin>>no_cars;
        if (no_cars==0)
            continue;
        cout<<"Enter your number of residents: "<<endl;
        cin >> no_residents;
        cout<<"Your number of passengers/car for flat in a building: "<<(float)no_residents/no_cars<<endl;

    }

    return 0;
}
