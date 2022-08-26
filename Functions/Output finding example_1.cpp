/*
Author: tunagrskn
Program:  Output example 1.
• What is the output of this one?
*/
#include <iostream>
using namespace std;
int i=10, j=20, k=30, m=40;
float func(int i, int *j)
{
    int k=25;
    i++;
    (*j)++;
    k++;
    m++;
    cout<< "in func: i=" << i << " j=" << *j << " k=" << k << " m=" << m << endl;
    return k/5;
}
int main()
{
    float n;
    n=func(j,&m)/3;
    cout<< "in main: i=" << i << " j=" << j << " k=" << k << " m=" << m << "n="<< n <<endl;
    return 0;
}
