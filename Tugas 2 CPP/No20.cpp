// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;
double pow(double, int);
int main() {
    cout << "Enter a positive float x and an integer n: ";
    double x;
    int n;
    cin >> x >> n;
    cout << "pow(" << x << ", " << n << ") = " << pow(x, n) << endl;    
}
double pow(double x, int n) {
    if (x == 0) return 0;
    if (n == 1) return 1;
    double y = 1;
    for (int i = 0; i < n; i++){
        y *= x;
    }
    for (int i = 0; i > n; i--){
        y /= x;
    }
    return y;
}