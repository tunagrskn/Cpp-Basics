/*
Author: tunagrskn
Program: Another variant of the program written to calculate
exponential numbers as a^b. (a and b integers) with fewer variable
*/
#include <iostream>
using namespace std;

int main ()
{
    int stu,sum,score;
    float avg;

    cout<<"Enter number of students: "<<endl;
    cin>>stu;

    for (int i=1; i<=stu; i++)
    {
        cout<<"Enter "<<i<<". student score"<<endl;
        cin>>score;
        sum +=score;
    }

    cout<<"Avarege score of class is "<<float(sum/stu)<<endl;

    return 0;
}
