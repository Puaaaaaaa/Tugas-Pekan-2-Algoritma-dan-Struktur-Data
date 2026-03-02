// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;

int main() {
    char word[50];

    cout << "Enter words (Ctrl+Z to stop):\n";

    // read word by word until input ends
    while (cin >> word) {
        cout << "You entered: [" << word << "]\n";
    }

    cout << "\nEnd of input.\n";
    return 0;
}
