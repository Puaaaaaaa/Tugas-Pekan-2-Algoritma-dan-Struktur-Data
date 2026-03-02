// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;

// Implementasi strncat buatan sendiri
char* strncat(char* dest, const char* src, int n)
{
    char* p = dest;

    // 1. Geser pointer sampai akhir 'dest'
    while (*p != '\0') {
        p++;
    }

    // 2. Copy maksimal n karakter dari src
    int i = 0;
    while (i < n && *src != '\0') {
        *p = *src;
        p++;
        src++;
        i++;
    }

    // 3. Tambahkan null-terminator
    *p = '\0';

    return dest;
}

int main() {
    char dest[50] = "Hello";

    strncat(dest, " World!!!", 9);  
    // hanya menambahkan " World!!!" (9 karakter)

    cout << "Hasil: " << dest << endl;

    return 0;
}
