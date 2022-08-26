/*
Author: Tuna Girişken
Program: Write a program that prompts the user to enter Cartesian coordinates of two points (x1,y1)
and (x2,y2) and display the distance.
*/
#include <iostream>
#include <cmath>

using namespace std;

int main(){
int x1,y1,x2,y2;
float distance;

cout<<"*****Program to calculate the distance between two points in the Cartesian plane*****"<<endl;

cout<<"Please enter the side x and y coordinates of First point:"<<endl;//"\t"<<"\t";
cin>>x1>>y1;

cout<<"Please enter the side x and y coordinates of Second point:"<<endl;//"\t"<<"\t";
cin>>x2>>y2;

distance=sqrt(pow((x1-x2),2)+pow((y1-y2),2));

cout<<"Distance between two points: "<<distance<<endl;

return 0;
}
