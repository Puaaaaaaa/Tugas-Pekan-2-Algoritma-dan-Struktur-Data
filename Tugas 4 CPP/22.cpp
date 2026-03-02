// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;

int product(int (*pf)(int k), int n) {
    int result = 1;  
    for (int i = 1; i <= n; i++) {
        result *= pf(i);
    }
    return result;
}

int f(int k) {
    return k;
}

int g(int k) {
    return 2 * k;
}

int main() {
    cout << "Product of f(k) = k for k=1..5: " << product(f, 5) << endl;   
    cout << "Product of g(k) = 2k for k=1..5: " << product(g, 5) << endl; 
    return 0;
}
