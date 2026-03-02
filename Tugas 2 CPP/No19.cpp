// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;
long lcm(long, long);
int main() {
    int m, n;
    cout << "Enter two positive integers: ";
    cin >> m >> n;
    cout << "lcm(" << m << ", " << n << ") = " << lcm(m, n) << endl;
}

long gcd(long, long);
long lcm(long m, long n) {
    return m * n / gcd(m, n);
}

long gcd(long m, long n) {
    if (m < n) swap (m,n);
    while (n > 0) {
        long r = m % n;
        m = n;
        n = r;
    }
    return m;
}