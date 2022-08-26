/*
Author: Tuna Girişken
Program: Using of the references
*/
#include <iostream>
using namespace std;

int main()
{
    float n = 25.5; // the target
    float &r1 = n; // alias of the target
    float &r2 = n; // another alias of the target
    cout << "n, r1, r2 = " << n << '\t' << r1 << '\t' << r2<< endl;
    n = -4.2e-2;
    cout << "n, r1, r2 = " << n << '\t' << r1 << '\t' << r2<< endl;
    r1 = 12.55;
    cout << "n, r1, r2 = " << n << '\t' << r1 << '\t' << r2<< endl;
//addresses
    cout << "&n, &r1, &r2 = " << &n << '\t' << &r1 << '\t' << &r2<< endl;

    return 0;
}
