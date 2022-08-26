/*
Author: Tuna Girişken
Program: Use of pointers and arrays
*/
#include <iostream>
int main()
{
    float a[5];
    float *p;

    p = a; // p holds the adr. of the 1st element of a
    *p = 1.5; // that means a[0] = 1.5;
    *(p+1) = 2.2;
    *(p+2) = 7.1;
    *(p+3) = 8.3;
    *(p+4) = 9.9;

    std::cout << " a[i]: ";
    for (int i=0; i<5; i++) std::cout << a[i] << " ";
    std::cout << std::endl;
    std::cout << "*(p+i): ";
    for (int i=0; i<5; i++) std::cout << *(p+i) << " ";
    std::cout << std::endl;

    return 0;
}
