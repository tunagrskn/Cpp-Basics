/*
Author: Tuna Girişken
Program: .erase()
*/

#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string str ("This is an example sentence.");
// "This is an example sentence."
    cout << str << '\n';

// 10. karaktere gelip sağ tarafa doğru 8 karakter siler
    str.erase (10,8);
    cout << str << '\n';

// "This is an sentence."
// 9. karakteri sil
    str.erase (str.begin()+9);
    cout << str << '\n';

// "This is a sentence."
//5. karakter ve sondan 9. karakter dahil olmak üzere arayı sil
    str.erase (str.begin()+5, str.end()-9); // ^^^^^

    cout << str << '\n';
// "This sentence."
    return 0;
}
