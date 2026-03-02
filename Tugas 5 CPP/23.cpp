// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    char str[200];
    
    cout << "Masukkan teks: ";
    cin.getline(str, 200);

    int wordCount = 0;
    bool inWord = false;

    for (int i = 0; str[i] != '\0'; i++) {
        // Jika karakter bukan spasi
        if (!isspace(str[i])) {
            // Jika sebelumnya kita tidak di dalam kata, berarti ini kata baru
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        } else {
            // Jika ketemu spasi, tandai kita keluar dari kata
            inWord = false;
        }
    }

    cout << "Jumlah kata: " << wordCount << endl;

    return 0;
}