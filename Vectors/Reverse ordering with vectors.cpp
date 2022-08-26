/*
Author: Tuna Girişken
Program: Reverse ordering with vectors
. Program that reverses order inputs with Vectors.
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    cout<<" Input n: "<<endl;
    cin>>n;

//The number of vector elements coming from user.
/*You could also us DA arrays:
    replace vector<double> a(n);
    with double *a = new double [n];*/
    vector<double> a(n);

//The vector's indexes are populated by the user.
    cout<< " Input "<<n<<" real numbers: "<<endl;
    for(int i=0; i<n; i++)
        cin>>a[i];

//Printing the indexes in reverse by starting the loop from the last element.
    cout<<" In reverse order: "<<endl;
    for(int i=n-1; i>=0; i--)
        cout<<a[i]<< " ";

    return 0;
}
