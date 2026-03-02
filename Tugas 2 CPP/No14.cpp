// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;
long comb(int n, int k);
int main() {
    for (int i = -1; i < 9; i++) {
        for (int j = -1; j <= i + 1; j++) {
            cout << " " << comb(i,j);
        }
        cout << endl;
    }
}
long perm(int,int);
long fact(int);
long comb(int n, int k) {
    if (n < 0 || k < 0 || k > n) return 0;
    return perm(n, k) / fact(k);
}
long perm(int n, int k) {
    if (n < 0 || k < 0 || k > n) return 0;
    int p = 1;
    for (int i = 1;i <= k; i++, n--) {
        p *= n;
    }  
    return p;
}
long fact(int n) {
    if (n < 2) return 1;
    long f = 1;
    for (int i = 2; i <= n; i++) {
        f *= i;
    }
    return f;
}