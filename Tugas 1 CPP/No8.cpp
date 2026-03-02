// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cout << "Masukkan nilai n: ";
    cin >> n;   
    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }
    cout << "Jumlah kuadrat dari 1 hingga " << n << " adalah: " << sum << endl;
    return 0;
}