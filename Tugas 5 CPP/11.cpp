// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;

char* my_strstr(const char* str, const char* sub)
{
    if (*sub == '\0') return (char*)str;

    while (*str != '\0') {
        const char* p1 = str;
        const char* p2 = sub;

        while (*p1 == *p2 && *p2 != '\0') {
            p1++;
            p2++;
        }

        if (*p2 == '\0')
            return (char*)str;

        str++;
    }

    return NULL;
}

int main()
{
    char text[200];
    char word[200];

    cout << "Enter main string: ";
    cin.getline(text, 200);

    cout << "Enter substring to search: ";
    cin.getline(word, 200);

    char* result = my_strstr(text, word);

    if (result)
        cout << "Substring found at: " << result << endl;
    else
        cout << "Substring not found." << endl;

    return 0;
}
