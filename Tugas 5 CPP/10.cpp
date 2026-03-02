// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;

char* my_strrchr(const char* s, int c)
{
    char* last = NULL;

    while (*s != '\0') {
        if (*s == c) {
            last = (char*)s;
        }
        s++;
    }

    return last;
}

int main()
{
    char str[] = "Hello World!";
    char target = 'l';

    char* p = my_strrchr(str, target);

    if (p)
        cout << "Last occurrence of '" << target << "' is at: " << p << endl;
    else
        cout << "Character not found.\n";

    return 0;
}
