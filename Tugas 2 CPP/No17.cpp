// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
#include <cmath>
using namespace std;
int digit(long,int);
int main() {
    int n, k;
    cout << "Integer: ";
    cin >> n;

    do {
        cout << "Digit: ";
        cin >> k;
        cout << "Digit number " << k << " of " << n << " is " << digit(n, k) << endl;         
    } while (k > 0);
}

int digit(long n, int k) {
    for (int i = 0; i < k; i++){
        n /= 10;
    }
    return n % 10;
}