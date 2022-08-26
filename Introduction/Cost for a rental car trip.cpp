/*
Author: Tuna Girişken
Program: We will write a program that calculates the cost for a rental car trip. We have to pay 0.5 TL
for each kilometer we drove the car. We also have to pay 5 TL for each day we rented the car. We have
to pay 15% tax for the summed kilometer and daily payment.
Ex: Please enter the initial kilometer reading=1000
Please enter the final kilometer reading=1500
Please enter the number of days you rented the car=4
You travelled 500 kilometers during 4 days
Your distance cost =250
Your daily cost =20
Your cost before tax =270
Your tax amount =40.5
Your total cost =310.5
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int x,y,z;
	int d;
	cout<<"Enter the initial kilometer reading:" <<endl;
	cin>>x;

	cout<<"Enter the final kilometer reading:" <<endl;
	cin>>y;

    z = y-x;

    cout<<"Enter the number of days you rented the car:" <<endl;
	cin>>d;

	cout<<"You travelled 500 kilometers during "<<d<<"days"<<endl;

	cout<<"Your daily cost "<<float((d*5))<<endl;
	cout<<"Your distance cost "<<float(0.5*z)<<endl;
	cout<<"Your cost before tax "<<float((d*5)+(0.5*z))<<endl;
	cout<<"Your tax amount "<<float((d*5)+(0.5*z))*0.15<<endl;
	cout<<"Your total cost "<<float((d*5)+(0.5*z))*0.15 + ((d*5)+(0.5*z))<<endl;
	return 0;
}
