/*
Author: Tuna Girişken
Program: Sum of squares with vectors.
. Program that displays the sum of the squares of
user-entered integer numbers using vectors.
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    cout<<"Enter how many numbers do you have: "<<endl;
    cin>>n;

//The number of vector elements coming from user.
    /*You could also us DA arrays:
        replace vector<double> a(n);
        with double *a = new double [n];*/
    vector<double> a(n);


//The vector's indexes are populated by the user.
    cout<< "Enter "<<n<<" number : "<<endl;
    for(int i=0; i<n; i++)
        {
        cout<<i+1<<". number: "<<endl;
        cin>>a[i];
        }
//Calculating squares with a loop and keeping them in a new variable.
    double s2 = 0.0;
    for(int i=0; i<n; i++)
        s2 = s2 + a[i]*a[i];

    cout<< "The sum of squares is "<< s2 <<endl;

    return 0;
}
