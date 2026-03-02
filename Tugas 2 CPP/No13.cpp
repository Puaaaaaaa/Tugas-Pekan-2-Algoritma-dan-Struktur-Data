// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;
long comb(int n, int k);
int main() {
    for (int i = -1; i < 6; i++) {
        for (int j = -1; j <= i + 1; j++) {
            cout << " " << comb(i,j);
        }
        cout << endl;
    }
}
long fact(int n);
long comb(int n, int k) {
    if (n < 0 || k < 0 || k > n) return 0;
    return fact(n) / (fact(k) * fact(n - k));
}
long fact(int n) {
    if (n < 2) return 1;
    long f = 1;
    for (int i = 2; i <= n; i++) {
        f *= i;
    }
    return f;
}