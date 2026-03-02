// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;

long fact(int n);
int main() {
    for (int i = -1; i < 20; i++) {
        cout << "fact(" << i << ") = " << fact(i) << endl;
    }
}

long fact(int n) {
    if (n < 2) return 1;
    long f = 1;
    for (int i = 2; i <= n; i++) {
        f *= i;
    }
    return f;
}