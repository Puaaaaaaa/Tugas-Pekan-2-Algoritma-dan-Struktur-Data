// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;

int min(int,int,int,int);
int main() {
    cout << "Enter four integers: ";
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << "The minimum is: " << min(a,b,c,d) << endl;
}

int min(int a, int b, int c, int d) {
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    if (d < min) min = d;
    return min;
}