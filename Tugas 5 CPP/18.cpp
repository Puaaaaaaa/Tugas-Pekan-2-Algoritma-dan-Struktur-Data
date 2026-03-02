// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;

char* my_strpbrk(const char* s, const char* accept)
{
    while (*s != '\0') {
        const char* a = accept;

        // cek apakah *s ada dalam accept
        while (*a != '\0') {
            if (*s == *a)
                return (char*)s;
            a++;
        }

        s++;
    }

    return NULL; // tidak ditemukan
}

int main()
{
    char text[] = "hello world";
    char chars[] = "aeiou";

    char* p = my_strpbrk(text, chars);

    if (p)
        cout << "First matching character: " << *p << endl;
    else
        cout << "No matching character found.\n";

    return 0;
}
