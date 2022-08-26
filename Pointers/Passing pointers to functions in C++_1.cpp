/*
Author: Tuna Girişken
Program: Passing pointers to functions in C++
*/
#include <iostream>
#include <ctime>
using namespace std;

void getSeconds(unsigned long *par); //function protoype

int main ()
{
    unsigned long sec;
    getSeconds( &sec );
    cout << "Number of seconds :" << sec << endl;
    return 0;

}

void getSeconds(unsigned long *par)
{
// get the current number of seconds
    *par = time( NULL );
    return;
}
