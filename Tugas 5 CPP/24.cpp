// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str[200];
    char* words[50]; // Array pointer untuk menyimpan lokasi tiap kata
    int count = 0;

    cout << "Masukkan kalimat: ";
    cin.getline(str, 200);

    // Langkah 1: Pecah kalimat menjadi kata-kata menggunakan strtok
    char* token = strtok(str, " \t\n"); // Delimiter: spasi, tab, enter
    while (token != NULL) {
        words[count] = token; // Simpan kata ke dalam array
        count++;
        token = strtok(NULL, " \t\n");
    }

    // Langkah 2: Cetak array kata dari indeks terakhir ke awal
    cout << "Output terbalik: ";
    for (int i = count - 1; i >= 0; i--) {
        cout << words[i];
        if (i > 0) cout << " "; // Tambah spasi antar kata
    }
    cout << endl;

    return 0;
}