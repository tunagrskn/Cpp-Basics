/*
Author: Tuna Girişken
Program: Mode and median of an n-element integer vector.
*/
#include <iostream>
#include <vector>
using namespace std;

double median (vector<double> v)
{
    double median_1,median_2,result;
    if(v.size()/2 == 0)
    {
        median_1 = v.size()/2;
        median_2 = (v.size()/2)+1;
        result = (v[median_1]+v[median_2]) / 2;
    }
    else
    {
        median_1 = (v.size()/2) + 0.5;
        result = v[median_1];
    }
    return result;
}


double mode (vector<double> v)
{
    double previous = 0;
    double current = 0;
    double mode = 0;
    for (unsigned int i = 0; i < v.size(); i++)
    {
        current = 0;
        for (unsigned int j = 0; j < v.size(); j++)
        {
            if (v[j] == v[i])
                current++;
        }
        if (current > previous)
        {
            mode = v[i];
            previous = current;
            current = 0;
        }
    }
    return mode;
}

int main()
{
    int n;
    cout<<"Enter the size of vector: "<<endl;
    cin>>n;

    vector<double> vec(n);

    for(unsigned int i=0; i<vec.size(); i++)
    {
        cout<<"Enter "<<i+1<<". element: ";
        cin>>vec[i];
    }

    cout<<"Median of thise vector is: "<<median(vec)<<endl;
    cout<<"Mode of thise vector is: "<<mode(vec)<<endl;

    return 0;
}
