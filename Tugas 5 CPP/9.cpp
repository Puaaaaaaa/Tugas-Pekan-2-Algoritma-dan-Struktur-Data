// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;

// Function to count occurrences of a character in a C-string
int count_char(const char* s, char target) {
    int count = 0;

    while (*s != '\0') {
        if (*s == target)
            count++;
        s++;
    }

    return count;
}

int main() {
    char text[100];
    char findChar;

    cout << "Enter a string: ";
    cin.getline(text, 100);

    cout << "Enter character to count: ";
    cin >> findChar;

    int result = count_char(text, findChar);

    cout << "Character '" << findChar << "' occurs "
         << result << " times in the string." << endl;

    return 0;
}
