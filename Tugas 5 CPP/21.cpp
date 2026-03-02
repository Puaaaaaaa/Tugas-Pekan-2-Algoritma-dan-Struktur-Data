// Fuad Ali Zurriyat
// NIM: D121251035
// File: soal_8_21.cpp
#include <iostream>
#include <cstring>
#include <cctype> // Diperlukan untuk fungsi toupper

using namespace std;

int main() {
    char str[200];

    cout << "Masukkan teks: ";
    cin.getline(str, 200);

    cout << "Huruf Kapital: ";
    for (int i = 0; str[i] != '\0'; i++) {
        // Mengubah setiap karakter menjadi kapital
        cout << (char)toupper(str[i]);
    }
    cout << endl;

    return 0;
}