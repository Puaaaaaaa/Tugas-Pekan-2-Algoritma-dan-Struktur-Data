// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
#include <cmath>
using namespace std;

// Numerical derivative function
double derivative(double (*f)(double), double x) {
    const double h = 1e-6; // small step
    return (f(x + h) - f(x - h)) / (2 * h);
}

int main() {
    cout << "Derivative Results:\n";

    // a. sqrt(), at x = 4
    cout << "a. derivative of sqrt at x = 4 = " << derivative(sqrt, 4.0) << endl;

    // b. cos(), at x = pi/6
    double pi = acos(-1.0);
    cout << "b. derivative of cos at x = pi/6 = " << derivative(cos, pi/6) << endl;

    // c. exp(), at x = 0
    cout << "c. derivative of exp at x = 0 = " << derivative(exp, 0.0) << endl;

    // d. log(), at x = 1
    cout << "d. derivative of log at x = 1 = " << derivative(log, 1.0) << endl;

    return 0;
}
