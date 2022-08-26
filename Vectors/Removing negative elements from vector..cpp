/*
Author: Tuna Girişken
Program: A vector is given as follows: B={3, -5, -2, 4, -7, 9, 22, -8}
Write a program to remove the negative elements from vector.
*/
#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int n=8;
    vector<double> vec(n);
    vec[0] = 3;
    vec[1] = -5;
    vec[2] = -2;
    vec[3] = 4;
    vec[4] = -7;
    vec[5] = 9;
    vec[6] = 22;
    vec[7] = -8;

    cout<<"The size is "<<vec.size()<<endl;
    cout<<"The content is: ";

    for (unsigned int i=0; i<vec.size(); i++)
    {
        cout<< vec[i] << " ";
    }
    cout << endl;

    cout<<"The new content is: ";

    for (unsigned int i=0; i<vec.size(); i++)
    {
        if(vec[i] < 0)
        {
            i -= 1;
            vec.erase(vec.begin()+i);
        }

        else
         cout<< vec[i] << " ";
    }

    return 0;
}
