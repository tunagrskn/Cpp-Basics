/*
Atuhor: tunagrskn
Program: Simple calculator program with
if-else statments.
*/
#include <iostream>
using namespace std;
int main()
{

//Hesap makinasý uygulamasý:
    cout<<"1. SAYIYI GIRINIZ:"<<endl;
    int sayi1;
    cin>>sayi1;

    cout<<"ISLEMI GIRINIZ:"<<endl;
    char islem;
    cin>>islem;

    cout<<"2. SAYIYI GIRINIZ:"<<endl;
    int sayi2;
    cin>>sayi2;

    if(islem == '+')
    {
        cout<<"Toplama islemi"<<endl;
        cout<<"Toplam: "<<sayi1+sayi2<<endl;
    }

    else if(islem == '-')
    {
        cout<<"Cýkarma islemi"<<endl;
        cout<<"Cýkarma: "<<sayi1-sayi2<<endl;
    }

    else if(islem == '*')
    {
        cout<<"Carpma islemi"<<endl;
        cout<<"Carpma: "<<sayi1*sayi2<<endl;
    }

    else if(islem == '/')
    {
        cout<<"Bolme islemi"<<endl;
        cout<<"Bolme: "<<sayi1/sayi2<<endl;
    }

    else
        cout<<"Hatalý giris";

    char ch;
    cin>>islem;

    switch(ch)
    {
    case '+':
        cout<<"Toplama islemi"<<endl;
        break;
    case '-':
        cout<<"Cýkarma islemi"<<endl;
        break;
    case '*':
        cout<<"Carpma islemi"<<endl;
        break;
    case '/':
        cout<<"Bolme islemi"<<endl;
        break;
    default:
        cout<<"Hatalý giris";
    }

    return 0;
}

