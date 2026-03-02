// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;

void computeSphere(double& a, double& v, double r);
int main() {
    double a, v, r;
    cout << "Enter the radius: ";
    cin >> r;
    computeSphere(a,v,r);
    cout << "The area of a sphere of radius " << r << " is " << a << "\nand its volume is " << v << endl;
}
void computeSphere(double& a, double& v, double r) {
    const double PI=3.141592653589793;
    a = 4.0*PI*r*r;
    v = a*r/3.0;
}
