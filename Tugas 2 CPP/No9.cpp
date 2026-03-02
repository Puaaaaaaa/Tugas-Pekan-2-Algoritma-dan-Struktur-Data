// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;

double ave(double, double, double, double);
int main() {
    cout << "Enter four numbers: ";
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << "The average is: " << ave(a, b, c, d) << endl;
    return 0;
}
double ave(double x1, double x2, double x3, double x4) {
    return (x1 + x2 + x3 + x4) / 4.0;
}
