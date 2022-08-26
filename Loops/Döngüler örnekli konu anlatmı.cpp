/*
Author: tunagrskn
Program:
TR
Türkçe döngüler örnekli konu anlatımı
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Donguler - Ornekler" << endl;

    // 1'den 100'e kadar olan tek syıları bastıran kod örneği
    /*
    int a=1;

    while (a<100){

        cout << a << " , " ;
        a += 2;
        /* arttırma operatörü: a++ (bir arttırma)
        eğer daha fazla arttırma istersek a += (sayı) şeklinde belirmeniz yeterlidir.
        Örneğin bu kodda 2 atlayarak a'ya değer ataması yapacaktır. */


    // aynı kodun farkllı yazım şekli ise aşağıda verilmiştir.

    int b = 1;

    while (b < 100)
    {

        if (b%2==1)
        {
            /* kalan operatörünü kullandık. a sayısını yine birer birer
             * artmasını istedik fakat eğer a'yı 2'ye böldüğümüz
             * zaman kalan 1 olursa a'yı ekrana bastır dedik.*/
            cout << b << "," ;
        }
        b++;
    }
    cout << endl; //diğer kodu çalıştırmadan önce bir alt satıra geçer
    cout << endl;
    cout << endl;

    // aynı kodların for döngsü ile yazılması

    for (int c=1; c< 100; c++)
    {
        if (c%2==1)
        {
            cout << c << " , " ;

        }
    }

    return 0;
}
