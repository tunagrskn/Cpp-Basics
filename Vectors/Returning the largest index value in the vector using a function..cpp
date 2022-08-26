/*
Author: Tuna Girişken
Program: Using vectors with functions
Program that Returns the largest index value in the vector using a function.
*/
#include <iostream>
#include <vector>
using namespace std;

//The function to find the largest element is defined. The parameter of the function is the empty vector.
double max(vector<double> v)
{
    double mx = v[0];
    for(unsigned int i=0; i<v.size(); i++)
    {
        if(v[i] > mx)
            mx = v[i];
    }
    return mx;
}

int main()
{
    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;
//The number n entered by the user became the size of the vector.
    vector<double> x(n);

    for(unsigned int i=0; i<x.size(); i++)
        {
        cout<<"Enter the "<<i+1<<". element: ";
        cin>>x[i];
        }

    cout<<"Largest element of vector's is: "<<max(x)<<endl;

    return 0;
}
