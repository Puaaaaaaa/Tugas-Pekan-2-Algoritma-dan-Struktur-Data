// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;
int main() {
    int n, i = 1, sum = 0;
    cout << "Masukkan nilai n: ";
    cin >> n;

    while (i <= n) {
        sum += i * i;
        i++;
    }
    cout << "Jumlah kuadrat dari 1 hingga " << n << " adalah: " << sum << endl;
    return 0;
}