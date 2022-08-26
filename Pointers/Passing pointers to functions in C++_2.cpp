/*
Author: Tuna Girişken
Program: Passing pointers to functions in C++
*/
#include <iostream>
using namespace std;
double getAverage(int *arr, int size);

int main ()
{
    int balance[5] = {1, 2, 4, 20, 100};
    double avg;
    avg = getAverage( balance, 5 ) ;
    cout << "Average value is: " << avg << endl;

    return 0;
}

double getAverage(int *arr, int size)
{
    int i, sum = 0;
    double avg;
    for (i = 0; i < size; ++i)
    {
        sum += arr[i];
    }

    avg = double(sum) / size;
    return avg;
}
