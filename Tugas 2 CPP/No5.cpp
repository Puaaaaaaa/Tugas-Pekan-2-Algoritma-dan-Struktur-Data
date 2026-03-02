// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double b = 2;
    double lg2 = log(2);
    for (double x = 0; x < 2; x += 0.2) {
        cout << pow(b,x) << "\t" << exp(x*lg2) << endl;
    }
    return 0;
}