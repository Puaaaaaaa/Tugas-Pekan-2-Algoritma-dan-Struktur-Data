// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
#include <cmath>
using namespace std;

double trap(double (*pf)(double), double a, double b, int n) {
    double h = (b - a) / n;
    double sum = 0.0;

    sum += pf(a) + pf(b);

    for (int i = 1; i < n; i++) {
        sum += 2 * pf(a + i * h);
    }

    return (h / 2.0) * sum;
}

double square(double x) {
    return x * x;
}

int main() {
    cout << "Approx integral of x^2 on [1,2] = "
         << trap(square, 1, 2, 100) << endl;

    return 0;
}
