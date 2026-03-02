// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;

int my_strspn(const char* s, const char* accept)
{
    int count = 0;

    // Untuk setiap karakter di s
    while (*s != '\0') {
        const char* a = accept;
        bool match = false;

        // Cek apakah karakter *s ada di accept
        while (*a != '\0') {
            if (*s == *a) {
                match = true;
                break;
            }
            a++;
        }

        // Jika tidak cocok, langsung berhenti
        if (!match)
            break;

        count++;
        s++;
    }

    return count;
}

int main()
{
    cout << my_strspn("abcde123", "abcde") << endl;  // 5
    cout << my_strspn("123abc", "0123456789") << endl; // 3
    cout << my_strspn("hello", "xyz") << endl; // 0

    return 0;
}
