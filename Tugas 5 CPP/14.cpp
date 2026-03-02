// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;

int my_strcmp(const char* s1, const char* s2)
{
    // Bandingkan karakter satu per satu
    while (*s1 != '\0' && *s2 != '\0') {
        if (*s1 != *s2)
            return *s1 - *s2; // perbedaan ASCII

        s1++;
        s2++;
    }

    // Jika salah satu sudah habis
    return *s1 - *s2;
}

int main()
{
    cout << my_strcmp("apple", "apple") << endl;   // 0
    cout << my_strcmp("apple", "banana") << endl;  // negatif
    cout << my_strcmp("cat", "car") << endl;       // positif

    return 0;
}
