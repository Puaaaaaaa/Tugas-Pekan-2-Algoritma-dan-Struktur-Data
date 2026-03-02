// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
#include <cmath>    
using namespace std;

double riemann(double (*f)(double), double a, double b, int n) {
    double h = (b - a) / n;
    double total = 0.0;

    for (int i = 0; i < n; i++) {
        total += f(a + i * h) * h;   
    }

    return total;
}

int main() {
    int n = 100000; 

    cout << "a) ∫ sqrt(x) dx from 1 to 4 = "
         << riemann(sqrt, 1.0, 4.0, n) << endl;

    cout << "b) ∫ cos(x) dx from 0 to pi/2 = "
         << riemann(cos, 0.0, M_PI / 2.0, n) << endl;

    cout << "c) ∫ exp(x) dx from 0 to 1 = "
         << riemann(exp, 0.0, 1.0, n) << endl;

    cout << "d) ∫ log(x) dx from 1 to e = "
         << riemann(log, 1.0, M_E, n) << endl;

    return 0;
}
