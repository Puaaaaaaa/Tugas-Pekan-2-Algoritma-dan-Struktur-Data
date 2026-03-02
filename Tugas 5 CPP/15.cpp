// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;

int my_strncmp(const char* s1, const char* s2, int n)
{
    int count = 0;

    while (count < n && *s1 != '\0' && *s2 != '\0') {
        if (*s1 != *s2)
            return *s1 - *s2;

        s1++;
        s2++;
        count++;
    }

    // Jika telah membandingkan n karakter → dianggap sama
    if (count == n)
        return 0;

    // Jika salah satu string habis
    return *s1 - *s2;
}

int main()
{
    cout << my_strncmp("apple", "application", 3) << endl;  // 0 (app)
    cout << my_strncmp("apple", "apply", 5) << endl;        // negatif
    cout << my_strncmp("cat", "car", 2) << endl;            // 0 (ca)
    cout << my_strncmp("cat", "car", 3) << endl;            // positif

    return 0;
}
