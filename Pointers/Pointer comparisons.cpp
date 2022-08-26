/*
Author: Tuna Girişken
Program: Pointer comparisons
*/
#include <iostream>
using namespace std;
const int MAX = 3;

int main ()
{
    int var[MAX] = {10, 100, 200}; //furkan adresi
    int *ptr; //tuna adresi
    ptr = var; //ilişkindirme
    int i = 0;
    cout<<ptr<<" "<<&var[MAX]<<" "<<&var[MAX - 1]<<endl;

    while ( ptr <= &var[MAX - 1] )
    {
        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl;
        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;
        ptr++;
        i++;
    }

    return 0;
}
