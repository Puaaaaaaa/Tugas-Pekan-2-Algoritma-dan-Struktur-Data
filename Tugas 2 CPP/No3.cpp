// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for (float x = 0; x < 1; x += 0.1) {
        cout << cos(2*x) << '\t' << 2*cos(x)*cos(x) - 1 << endl;
    }
    return 0;
}