/*
Author: Tuna Girişken
Program: Pointers and Arrays
*/
#include <iostream>
using namespace std;

int main()
{
    float numbers[3] = {1,2,3};
    float *ptr = &numbers[0];

    cout<<*ptr<<endl;

return 0;
}
