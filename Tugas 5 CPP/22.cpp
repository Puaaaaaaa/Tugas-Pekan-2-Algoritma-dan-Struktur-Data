// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
#include <cstring>
#include <cctype> // Diperlukan untuk isspace

using namespace std;

int main() {
    char str[200];

    cout << "Masukkan teks: ";
    cin.getline(str, 200);

    cout << "Tanpa spasi: ";
    for (int i = 0; str[i] != '\0'; i++) {
        // Hanya cetak jika BUKAN spasi
        if (!isspace(str[i])) {
            cout << str[i];
        }
    }
    cout << endl;

    return 0;
}