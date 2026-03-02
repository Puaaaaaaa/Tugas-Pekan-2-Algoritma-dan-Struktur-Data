// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
#include <cassert>
using namespace std;
long gcd(long, long);
int main() {
    int m, n;
    cout << "Enter two positive integers: ";
    cin >> m >> n;
    cout << "gcd(" << m << ", " << n << ") = " << gcd(m, n) << endl;
}
long gcd(long m, long n) {
    if (m < n) swap (m,n);
    assert(n >= 0);
    while (n > 0) {
        long r = m % n;
        m = n;
        n = r;
    }
    return m;
}