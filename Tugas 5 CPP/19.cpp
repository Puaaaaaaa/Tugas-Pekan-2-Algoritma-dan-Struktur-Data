// Fuad Ali Zurriyat
// NIM: D121251035
// File: soal_8_19.cpp
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

// Fungsi yang diminta soal
int countWordsWithChar(const char* str, char ch) {
    int count = 0;
    bool inWord = false;         // Penanda apakah sedang membaca kata
    bool charFound = false;      // Penanda apakah char ditemukan di kata saat ini

    for (int i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i])) {
            // Sedang berada dalam sebuah kata
            inWord = true;
            if (str[i] == ch) {
                charFound = true;
            }
        } else {
            // Menemukan spasi (akhir kata)
            if (inWord && charFound) {
                count++;
            }
            // Reset status untuk kata berikutnya
            inWord = false;
            charFound = false;
        }
    }
    // Cek kata terakhir (jika kalimat tidak diakhiri spasi)
    if (inWord && charFound) {
        count++;
    }
    return count;
}

int main() {
    char kalimat[100];
    char target;

    cout << "Masukkan kalimat: ";
    cin.getline(kalimat, 100);

    cout << "Masukkan karakter yang dicari: ";
    cin >> target;

    int hasil = countWordsWithChar(kalimat, target);
    cout << "Jumlah kata yang mengandung huruf '" << target << "': " << hasil << endl;

    return 0;
}