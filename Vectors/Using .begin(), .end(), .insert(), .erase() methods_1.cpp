/*
Author: Tuna Girişken
Program: Using .begin(), .end(), .insert(), .erase() methods_1
name.begin(); Returns an iterator to the first
element.
name.end(); Returns an iterator to the
element following the last
element.
name.insert(); Inserts element.
name.erase(); Deletes element.
*/
#include <iostream>
#include <vector>
using namespace std;

//A void function is defined and its parameter is an empty vector.
void printVector(vector<int> v)
{
    cout << "My vector contains: ";
    for(int i=0; i< v.size(); i++)
        cout << v[i] << " ";
    cout <<endl;
}
int main()
{
    //The size and value definition of the vector has been made.
    vector<int> myvector (3,100);

    //inserts 200 as the 0th element
    myvector.insert ( myvector.begin(), 200 );
    printVector(myvector);

    //inserts two 300 as 0th and 1st element
    myvector.insert (myvector.begin(),2,300);
    printVector(myvector);

    return 0;
}
