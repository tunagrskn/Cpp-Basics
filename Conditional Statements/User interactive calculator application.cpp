/*
Author: Tuna Girişken
Program: Write a C++ program that does the below
1) User should enter (+) or (-) operation
2) User should enter two integer numbers a and b
3) Compute the 1/a + 1/b for (+) operation and 1/a - 1/b for (-) operation in terms of ratios
4) if either a or b is zero it will print out that “Operation can not be done”
5) If the operation is something else than + or – print out “Invalid operation”
Write one code using if else if and one code for switch. Thus you will write two codes.
Program screen should be as on the next page
*/
#include <iostream>
using namespace std;

int main()
{
    char ch;
    int nmb1, nmb2;

    cout<<"Enter the operation type (+ or -) :"<<endl;
    cin>>ch;

    switch(ch)
    {

    case '+':
        cout<<"Enter two integer numbers :"<<endl;
        cin>>nmb1>>nmb2;
        if(nmb2==0 || nmb1==0)
        {
            cout<<"Operation can not be done"<<endl;
        }
        else
        {
            cout<<"*********"<<endl;
            cout<<"1/"<<nmb1<<" + "<<"1/"<<nmb2<<"="<<nmb2+nmb1<<"/"<<nmb1*nmb2<<endl;
        }
        break;

    case '-':
        cout<<"Enter two integer numbers :"<<endl;
        cin>>nmb1>>nmb2;
        if(nmb2==0 || nmb1==0)
        {
            cout<<"Operation can not be done"<<endl;
        }
        else
        {
            cout<<"*********"<<endl;
            cout<<"1/"<<nmb1<<" - "<<"1/"<<nmb2<<" = "<<nmb2-nmb1<<"/"<<nmb1*nmb2<<endl;
        }
        break;

    default:
        cout<<"Enter two integer numbers :"<<endl;
        cin>>nmb1>>nmb2;
        cout<<"Invalid Operation"<<endl;
    }

    return 0;
}
