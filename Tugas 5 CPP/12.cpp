// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;

char* my_strncpy(char* dest, const char* src, int n)
{
    char* p = dest;
    const char* q = src;

    int count = 0;

    // Salin sampai n karakter atau sampai src habis
    while (count < n && *q != '\0') {
        *p = *q;
        p++;
        q++;
        count++;
    }

    // Tambahkan '\0' jika masih kurang dari n karakter
    while (count < n) {
        *p = '\0';
        p++;
        count++;
    }

    return dest;
}

int main()
{
    char source[] = "World";
    char dest[10];

    my_strncpy(dest, source, 4);

    cout << "Result: " << dest << endl;  // Output: Worl

    return 0;
}
