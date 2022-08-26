/*
Author: Tuna Girişken
Program: Getting value from user to a vector
This program builds a vector from values input from the keyboard.
The size of the vector increases until a zero is input
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
//Vector definition done
    vector<double> iv;

//Infinite loop definition has been made.
    while(true)
    {
        cout<<"Enter an integer: ";
        cin>>n;
//It exits the loop when zero value is entered from the user.
        if(n==0) break;
//With the .push_back() method, every n number entered by the user is pushed into the vector.
        iv.push_back(n);
    }

    cout<<"iv is: "<<endl;

//Indexes up to the vector size are printed.
    for(unsigned int i=0; i<iv.size(); i++)
        cout<<"     iv["<<i+<<"] = "<<iv[i]<<endl;

    return 0;
}
