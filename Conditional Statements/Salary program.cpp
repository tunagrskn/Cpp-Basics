#include <iostream>
using namespace std;

int main(){
	int h;
	float r;
	int ot;
	int s;

	cout<<" Enter your total working hours. "<<endl;
	cin>>h;

	cout<<" Enter your hourly rate "<<endl;
	cin>>r;

	s = r*h;
	cout<<"Your reuglar salary value is: "<<s<<endl;

	if(h>40)
	{
		r = r*(1.5);
		ot = h - 40;
		cout<<"Your over time work hours: "<<ot<<" hour"<<endl;
		s = r * h;
		cout<<"Your overtime salary value is: "<<s<<endl;
	}
	else
	{
	 	r = r;
	}

return 0;
}
