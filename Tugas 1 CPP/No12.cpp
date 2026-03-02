// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;
int main() {
    float N;
    cout << "Masukkan nilai N: ";
    cin >> N;
    float guess = N / 2.0;
    for (int i = 0; i < 20; i++) {
        guess = 0.5 * (guess + N / guess);
    }
    cout << "Perkiraan akar kuadrat dari " << N << " adalah: " << guess << endl;
    return 0;
}