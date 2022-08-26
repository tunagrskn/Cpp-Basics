/*
Author: Tuna Girişken
Program: Temperature program
*/
#include <iostream>

int main ()
	{
	int temp;
	std::cout<<"Temperature program"<<std::endl;
	std::cout<<"-------------------"<<std::endl;

	std::cout<<"Enter current temperature: "<<std::endl;
	std::cin>>temp;

	if (temp < 0)
	{
		std::cout<<"BELOW FREEZING "<<std::endl;
	}
	 else
	 	std::cout<<"ABOVE FREEZING "<<std::endl;

	return 0;
	}
