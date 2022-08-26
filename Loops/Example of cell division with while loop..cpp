/*
Author: tunagrskn
Program: Consider a type of cell that reproduces by mitosis. Assume
each cell divides into two cells every second. Display the
number of cells after each second for 100 seconds. Start with
one cell.
*/
#include <iostream>
using namespace std;

int main ()
{
    unsigned long int t=0;
    unsigned long int cell = 1;

    while(t <= 100)
    {
        cout<<"time=  " << t <<"\t"<<"cell= "<<cell<<endl;
        t++;
        cell *=2;
    }

    return 0;
}
