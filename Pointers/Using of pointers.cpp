/*
Author: Tuna Girişken
Program: Use of pointers
*/
#include <iostream>
using namespace std;
int main()
{
    int n = 25;
    int *pn;
    pn = &n; // pn points to n

    cout << "n = " << n << '\n' << "&n = " << &n << endl;
    cout << "pn = " << pn << '\n' << "&pn = " << &pn << endl << endl;

    *pn = 70;

// *pn is the alias of n
    cout << "n = " << n << '\n' << "*pn = " << *pn << endl;

    return 0;
}
