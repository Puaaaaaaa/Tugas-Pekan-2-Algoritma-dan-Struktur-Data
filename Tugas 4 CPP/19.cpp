// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
#include <cmath>    
using namespace std;

double sum(double (*f)(double), double a, double b, int n) {
    double h = (b - a) / n;
    double total = 0.0;

    for (int i = 0; i <= n; i++) {
        total += f(a + i * h);
    }

    return total;
}

double reciprocal(double x) {
    return 1.0 / x;
}

int main() {
    int n = 10;

    cout << "Sum sqrt(x) from 1 to 10 = "
         << sum(sqrt, 1.0, 10.0, n) << endl;

    cout << "Sum 1/x from 1 to 10 = "
         << sum(reciprocal, 1.0, 10.0, n) << endl;

    return 0;
}
