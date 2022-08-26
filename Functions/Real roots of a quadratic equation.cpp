/*
Author: tunagrskn
Program:  Real roots of a quadratic equation
Write a program that finds the real roots of a given quadratic equation.
*/
#include <iostream> //input output kütüphanesi tanımı
#include <cmath> //cmath kütüphanesi tanımı
#define small 0.000001 // eşitlik kontrolü için bir sabit oluşturuldu
#define equal(a,b) ((a)-(b)<=small)&&((b)-(a)<=small) //eşitlik kontrolü
using namespace std;
float delta (float a, float b, float c) //delta fonksiyonu tanımı
{
    return (b * b - 4 * a * c); //diskriminant işlemi
}
int solve(float a, float b, float c, float *root1, float *root2) //solve fonksiyonu
{
    float d; // d diye bir değişken tanımlandı
    if (equal(a,0.0)) //eğer a katsayısı 0 sa return -1
        return -1;
    d = delta(a,b,c); //delta fonksiyonuna parametre gönderiyoruz sonucunuda d değişkeninde tutuyoruz.
    if (equal(d,0.0)) //diskriminat 0 a eşitmi konrolü
    {
        *root1 = -b / (2 * a); // eşitse eşit iki kök var ve formülü root1 e point atıldı
        return 1; // yukardaki ife girdiyse return 1 verip fonksiyondan çıkış
    }
    if (d < 0) // diksriminant 0 dan küçükse kök yoktur return 0 verip fonk. dan çıkış
        return 0;
    *root1 = (-b + sqrt(d)) / (2 * a); // son durum delta>0 için iki kök var.
    *root2 = (-b - sqrt(d)) / (2 * a); //formülü bu değeri root1 ve 2 ye point atıldı
    return 2;
}
int main()
{
    float r1, r2; //iki adet float tanımlandı
    float a, b, c; //3 adet float daha
    cout<<"Enter equation coefficients: ";
    cin>>a>>b>>c; //katsayılar girildi
    switch (solve(a,b,c,&r1,&r2)) // solve fonk. una katsayılar ve köklerin ampersantları atıldı
    {
    case -1:
        cout<<"Not quadratic equation"<<endl;
        break;
    case 0:
        cout<<"No real roots " <<endl;
        break;
    case 1:
        cout<<"One real root " <<endl;
        cout<<"Root1 = Root2 = " <<r1<<endl;
        break;
    case 2:
        cout<<"Two real roots\n";
        cout<<"Root1 = " <<r1<<endl;
        cout<<"Root2 = " <<r2<<endl;
        break;
    }
    return 0;
}
