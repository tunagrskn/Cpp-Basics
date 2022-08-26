/*
Author: Tuna Girişken
Program: .copy()
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    char buffer[20];
    string str="Test string...";

    unsigned int length;
//5. karakterden başlayarak 6 karakterlik alanı lengthe kopyala
//size_t copy (char* s, size_t len, size_t pos = 0) const;
    length = str.copy(buffer,6,5);

    buffer[length]='\0';

    cout << "buffer contains: " << buffer << '\n';

    return 0;
}
