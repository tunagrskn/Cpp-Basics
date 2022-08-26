#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
int a,b,c;
int state ;
cout<<"Enter first length"<<endl;
cin>>a;
cout<<"Enter seconde length"<<endl;
cin>>b;
cout<<"Enter third length"<<endl;
cin>>c;
/*
int a[2];
for(int i=0; i<=2; i++){
	cout<<"Enter the lenght of the"<<i<<". side of the triangle"<<endl;
	cin>>a[i];
}
*/

if((abs(a-b)<c) && (abs(a+b)>c)){
	cout<<"Its triangle"<<endl;
	state = 1;
}
else {
	cout<<"Its not triangle"<<endl;
	state = 0;
}

switch (state){

case 1:
	if(a==b==c){
		cout<<"Its equilateral triangle"<<endl;
	}
	else if(a==b || a==c || b==c){
		cout<<"Its equilateral triangle"<<endl;
	}
	else{
		cout<<"Its different triangle"<<endl;
	}
	break;
case 0:
	break;
}

return 0;
}
