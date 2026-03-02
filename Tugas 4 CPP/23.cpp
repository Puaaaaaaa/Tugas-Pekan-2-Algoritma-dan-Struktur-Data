// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
#include <cmath>
using namespace std;

double root(double (*pf)(double), double a, double b, int n) {
    double mid;

    for (int i = 0; i < n; i++) {
        mid = (a + b) / 2.0;

        if (pf(a) * pf(mid) <= 0)
            b = mid;      
        else
            a = mid;      
    }

    return mid;
}

double f(double x) {
    return x*x - 2;
}

int main() {
    cout << "Approx root of x^2 = 2 : "
         << root(f, 1, 2, 100) << endl;

    return 0;
}
