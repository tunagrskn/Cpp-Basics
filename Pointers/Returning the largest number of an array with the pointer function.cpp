/*
Author: Tuna Girişken
Program: Write a function named float* max (float a[], int n) that is passed a float
array of size n and returns a pointer to the maximum of the n floats. Use this
program in a suitable main program.
*/
#include <iostream>
#define SIZE 5					//defining a pre-processor constant.
using namespace std;

float *max(float a[], int n)
{
    float *maxAddress=a;		//declaring a pointer of float type.
    for(int i=0; i<n; i++)		//checking all elements of the recieved array [0 ---> SIZE-1].
        if(a[i]>*maxAddress)	//if the value of the current element is larger than the value of the variable which its address in "maxAdress"
            maxAddress=a+i;		//change the content of "maxAddress" to the address of the current element of the array.
    return maxAddress;			//returning the content of the pointer "maxAddress".
}

int main()
{
    /*float a[SIZE];									//declaring an array.
    cout<<"Please enter "<<SIZE<<" values:"<<endl;	//prompting the user to enter values.
    for(int i=0; i<SIZE; i++)						//for loop for going through the all elements of the array.
        cin>>a[i];									//geeting values from the user and putting them into the current element.
    cout<<"The Maximum Value is: "<<*max(a, SIZE);	//printing the entered maximum value.
    */
    int n;
    cout<<"Enter the size: "<<endl;
    cin>>n;
    float arr[n];

    for (int i=0; i<n; i++)
    {
        cout<<"Enter "<<i+1<<". element: "<<endl;
        cin>>arr[i];
    }

    cout<<"The maximumun element for your array is: "<<*max(arr, n)<<endl;
    return 0;
}
