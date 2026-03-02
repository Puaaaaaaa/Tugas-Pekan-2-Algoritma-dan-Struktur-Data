// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;

double ave(double, double = 0, double = 0, double = 0);
int main() {
    cout << "Enter four non-zero numbers: ";
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << "The average of the first one is " << ave(a) << endl;
    cout << "The average of the first two is " << ave(a, b) << endl;
    cout << "The average of the first three is " << ave(a, b, c) << endl;
    cout << "The average of all four is " << ave(a, b, c, d) << endl;
    return 0;
}
double ave(double x1, double x2, double x3, double x4) {
    double sum = x1 + x2 + x3 + x4;
    if (x2 == 0) return sum / 1.0;
    else if (x3 == 0) return sum / 2.0;
    else if (x4 == 0) return sum / 3.0;
    else return sum / 4.0;
}