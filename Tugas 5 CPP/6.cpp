// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;

// Function to reverse a C-string in place
void reverse(char s[])
{
    int i = 0;
    int j = 0;

    // Find length of the string
    while (s[j] != '\0')
        j++;

    j--; // Move to last valid character

    // Swap characters from both ends
    while (i < j) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;

        i++;
        j--;
    }
}

int main() {
    char text[100];

    cout << "Enter a string: ";
    cin.getline(text, 100);

    reverse(text);

    cout << "Reversed string: " << text << endl;

    return 0;
}
