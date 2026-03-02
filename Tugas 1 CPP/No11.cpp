// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;
int main() {
    int angka;
    cout << "Masukkan sebuah angka: ";
    cin >> angka;
    if (angka > 0) {
        int digit = 1;
        while (angka >= 10) {
            angka /= 10;
            digit++;
        }
        cout << "Jumlah digit: " << digit << endl;
    }else {
        cout << "Angka nol atau negatif!" << endl;
    }
    return 0;
}