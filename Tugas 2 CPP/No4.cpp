// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for (double x = 0; x < 2; x += 0.2) {
        double s=sin(x);
        double c=cos(x);
        cout << s*s << "\t" << c*c << "\t" << s*s+c*c << endl;
    }
    return 0;
}
