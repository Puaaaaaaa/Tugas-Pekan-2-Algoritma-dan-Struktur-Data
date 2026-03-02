// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;
void computeCircle(double& area, double& circ, double r);
int main() {
    double a, c, r;
    cout << "Enter the radius: ";
    cin >> r;
    computeCircle(a,c,r);
    cout << "The area of a circle of radius " << r << " is " << a << "\nand its circumference is " << c << endl;
}

void computeCircle(double& area, double& circ, double r) {
    const double PI = 3.141592653589793;
    area = PI * r * r;
    circ = 2 * PI * r;
}
