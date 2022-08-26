/*
Author: tunagrskn
Program: Average of the midterm scores of
the students
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
