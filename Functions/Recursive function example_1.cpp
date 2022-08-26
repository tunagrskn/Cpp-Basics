/*
Author: tunagrskn
Program:  Recursive functions
• Recursive function example_1
*/
#include <iostream>
using namespace std;
void recurse(int i)
{
    if (i<2)
        recurse(i+1);
    cout<< i <<" ";
}

int main()
{
    recurse(0);
    return 0;
}
