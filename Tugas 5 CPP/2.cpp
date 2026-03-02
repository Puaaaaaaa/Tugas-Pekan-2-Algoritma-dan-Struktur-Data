// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;

// Implementasi strcpy buatan sendiri
char* strcpy(char* dest, const char* src)
{
    char* p = dest;           // simpan pointer awal

    while (*src != '\0') {    // salin semua karakter dari src
        *p = *src;
        p++;
        src++;
    }

    *p = '\0';                // tambahkan null-terminator
    return dest;              // kembalikan pointer awal
}

int main() {
    char dest[50];

    strcpy(dest, "Hello, world!");
    
    cout << "Hasil salinan: " << dest << endl;

    return 0;
}
