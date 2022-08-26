/*
Author: tunagrskn
Program: Local definition veils global definition
• A local variable with the same name as the global
variable veils the global definition.

*/
#include <iostream>
using namespace std;

int d=10;
void f()
{
    d++;
    cout<<"in f(): d= " << d << endl;
}
int main()
{
    int d=30;
    f();
    cout<<"After first call to f(): d= " << d << endl;
    f();
    cout<<"After second call to f(): d= " << d << endl;
}
/*
Bu kısımda anlatılmak istenen eğer global değişkenle aynı isimde bir değişken
main fonksiyonun içinde local olarak yeniden oluşturulursa mainin içerisinde print
edilirse maindeki değeri alır fakat herhangi bir fonksyion içerisinde tanımlanmadan
global olark çağırılırsa globalde tanımlı değerini alır.
*/
