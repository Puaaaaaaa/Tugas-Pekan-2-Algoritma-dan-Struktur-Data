// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
#include <cmath>
using namespace std;

void computeTriangle(float& a, float& p, float x,float y,float z);
int main() {
    float a, p, x, y, z;
    cout << "Enter the sides: ";
    cin >> x >> y >> z;
    computeTriangle(a,p,x,y,z);
    cout << "The area of the triangle is " << a << "\nand its perimeter is " << p << endl;
    return 0;
}

void computeTriangle(float& a, float& p, float x, float y, float z) {
    p = x + y + z;
    float s = p/2.0; 
    a = sqrt(s*(s-x)*(s-y)*(s-z)); 
}