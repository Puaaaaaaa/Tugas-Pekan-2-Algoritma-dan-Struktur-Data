// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;

// Menggabungkan src ke akhir dest
char* my_strcat(char* dest, const char* src)
{
    char* p = dest;

    // Geser pointer p ke akhir string dest
    while (*p != '\0') {
        p++;
    }

    // Salin karakter src ke akhir dest
    while (*src != '\0') {
        *p = *src;
        p++;
        src++;
    }

    // Akhiri dengan null-terminator
    *p = '\0';

    return dest;
}

int main()
{
    char dest[50] = "Hello";
    char src[] = " World";

    my_strcat(dest, src);

    cout << "Result: " << dest << endl; 
    // Output: Hello World

    return 0;
}
