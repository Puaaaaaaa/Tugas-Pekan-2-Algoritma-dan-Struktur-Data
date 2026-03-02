// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;
    int n = a/b, m = a%b;
    cout << "Hasil pembagian " << a << " / " << b << " = " << n << " dengan sisa " << m << endl;
    return 0;
}