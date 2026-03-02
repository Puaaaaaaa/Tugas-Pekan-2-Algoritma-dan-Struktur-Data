// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;

char* my_strchr(char* s, char c) {
    while (*s != '\0') {
        if (*s == c)
            return s;   // return pointer to first occurrence
        s++;
    }
    return NULL;        // not found
}

int main() {
    char text[100];
    char target;

    cout << "Enter a string: ";
    cin.getline(text, 100);

    cout << "Character to find: ";
    cin >> target;

    char* result = my_strchr(text, target);

    if (result)
        cout << "Found at position: " << (result - text)
             << " (character: " << *result << ")" << endl;
    else
        cout << "Character not found.\n";

    return 0;
}
