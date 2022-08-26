/*
Author: tunagrskn
Program: GCD calculation with Euclid Algorithm
1. Input i, j
2. If i>j interchange i and j
3. If i≤0 go to 6
4. Decrement j by i
5. Go to 2
6. Display j as greatest common divisor
7. Stop
*/
#include<iostream>
using namespace std;
int gcd(int a, int b)
{
    if (a > b)
    {
        int temp;
        temp = a;
        a=b;
        b=temp;
        //ARTIK BÜYÜK SAYI B KÜÇÜK SAYI A
        return gcd(b-a, a); //BÜYÜK SAYIDAM KÜÇÜK SAYININ FARKI 1.PARAMETRE //KÜÇÜK SAYI 2. PARAMETRE
    }
    else if (a == b)
        return a;

    else if (a == 0)
        return b;

    else return gcd(a, b-a);
    //EĞER İLK PARAMETRE İKİNCİ PARATMEREDEN KÜÇÜKSE FARK ALMA BÖYLE
}
int main()
{
    int i,j;
    cout<<"Enter two integer number: "<<endl;
    cin>>i>>j;
    cout<<"GCD of "<< i <<" and "<< j <<" is "<< gcd(i, j);
    return 0;
}
