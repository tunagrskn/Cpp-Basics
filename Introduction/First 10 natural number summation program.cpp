/*
Author: Tuna Girişken
Program: First 10 natural number summation program
*/
#include <iostream>

int main ()
	{
	int sum=0;
	std::cout<<"First 10 natural number summation program"<<std::endl;

	for(int i=0; i<=10; i++)
	{
		sum = sum + i;
	}
	std::cout<<"Result is: "<<sum<<std::endl;
	return 0;
	}
