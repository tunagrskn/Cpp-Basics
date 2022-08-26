/*
Author: tunagrskn
Program: Changes in parameters are not reflected
*/
#include <iostream>
using namespace std;
void f(int a)
{
    a+=5;
    cout<<"in function f(): a="<< a<<endl;
}
int main()
{
    int a=10;
    cout<<"in main(), before calling f(): a="<<a<<endl;
    f(a);
    cout<<"in main(), after calling f(): a="<<a<<endl;
}
/*Anlatılmak istenen fonksiyona gönderilen parametrenin değeri
fonksiyon içerisinde değişebilir ama bu değişlik stackda kaydedilmez
örnekte olduğu üzere main fonksiyonda 10 değerini alırken fonksiyonda
15 değerini almaktadır. Fakat bu değişken fonksiyonda sonra birdaha
print edildiğinde değerinin main fonksiyonda yani stuckda tanımlı
değerine sahip olduğu görülmektedir.*/
