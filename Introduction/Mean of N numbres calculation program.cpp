/*
Author: Tuna Girişken
Program: Mean of N numbres calculation program.
*/
#include <iostream>

int main ()
	{
	int sum = 0 , n ;
	int mean ;
	std::cout<<"Mean of N numbres calculation program"<<std::endl;
	std::cout<<"-------------------------------------"<<std::endl;

	std::cout<<"Enter a size of your numbers:"<<std::endl;

	std::cin>>n;
	int arr[n];

	std::cout<<"Enter your numbers: "<<std::endl;

	for(int i=0; i<n; i++){
		std::cout<<(i+1)<<". number: ";
		std::cin>>arr[i];
		sum = sum + arr[i];
	}
		mean = sum/n;

	std::cout<<"Mean of your numbers is "<<mean<<std::endl;
	return 0;
	}
