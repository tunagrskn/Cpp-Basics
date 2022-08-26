/*
Author: tunagrskn
Program: A program written to reads a character ('a', 'p', or 'v')
and radius R. It displays the area or perimeter of a circle with
radius R, or the volume of a sphere.
*/
#include <iostream>
using namespace std;
#define PI 3.14
char ch;
float R;

int main()
{
    cout<<"Enter a for area \nEnter p for perimeter\nEnter v for volume\n"<<endl;
    cin>>ch;
    cout<<"Enter your radius\n"<<endl;
    cin>>R;

    switch(ch)
    {
    case 'a':
        cout<<"Area of circle = "<< PI*R*R <<endl;
        break;
    case 'p':
        cout<<"Perimeter of circle = "<< 2*PI*R<< endl;
        break;
    case 'v':
        cout<<"Volume of sphere = "<< (4/3)*(PI*R*R*R)<<endl;
        break;
    default:
        cout<<"Invalid input"<<endl;
        break;
    }

    return 0;
}


