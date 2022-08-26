/*
Author: Tuna Girişken
Program: Mean of input array with delete operator.
*/
#include <iostream>
using namespace std;

int main()
{
    double *x, mean, s;
    int i, n;

    while(true)
    {
        cout<< "How many elemnts: ";
        cin>>n;
        if(n<=0)
            break;

        x = new double[n];
        s = 0.0;

        cout<<" Input elements: ";

        for(i=0; i<n; i++)
        {
            cin>>x[i];
            s += x[i];
        }

        mean = s/n;
        cout<<"Mean = "<<mean<<endl;
    }

    cout<<x[0]<<endl;
    delete [] x;
    cout<<x[0]<<endl;

    return 0;
}
