// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;

int my_strcspn(const char* s, const char* reject)
{
    int count = 0;

    // Loop setiap karakter di s
    while (*s != '\0') {
        const char* r = reject;
        bool found = false;

        // Cek apakah *s ada dalam reject
        while (*r != '\0') {
            if (*s == *r) {
                found = true;
                break;
            }
            r++;
        }

        // Jika ditemukan karakter yang harus ditolak → berhenti
        if (found)
            break;

        count++;
        s++;
    }

    return count;
}

int main()
{
    cout << my_strcspn("hello world", "o") << endl;      // 4
    cout << my_strcspn("12345abc", "abc") << endl;       // 5
    cout << my_strcspn("test", "xyz") << endl;           // 4 (tidak ada X,Y,Z)
    cout << my_strcspn("apple", "p") << endl;            // 1 (karena 'p' langsung muncul)

    return 0;
}
