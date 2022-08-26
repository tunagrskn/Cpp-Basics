/*
Author: tunagrskn
Program: • The greatest common divisor of integers
x and y is the largest integer that evenly
divides both x and y. Write a recursive
function gcd that returns the greatest
common divisor of x and y, defined
recursively as follows: If y is equal to 0,
than gcd(x,y) is x; otherwise gcd(x,y) is
gcd(y,x%y),where % is modulus operator.
• (Note: For this algorithm x must be
larger than y.)
*/
#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0) // eğer ikinci parametre 0 sa gcd 1. parametredir.
        return a; //1. paramtre gcd olarak return edilir.
    return gcd(b, a % b); //değilse ve diğer şartlarda ise
    // ilk paramtrenin ikinci parametreden büyük olduğu kabul edilerek
    // 2. parametre 1. parametre yapılır
    // ardından büyük olan parametrenin küçük parametreye göre modu bir kere alınarak
    //mod işleminin sonucu 2. paramtre yapılır.
}
int main()
{
    int i,j;
    cout<<"Enter two integer number: "<<endl;
    cin>>i>>j;
    cout<<"GCD of "<< i <<" and "<< j <<" is "<< gcd(i, j);
    return 0;
}
