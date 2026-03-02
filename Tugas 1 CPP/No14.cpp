// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Masukkan bilangan bulat positif a: ";
    cin >> a;
    cout << "Masukkan bilangan bulat positif b: ";
    cin >> b;
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    } 
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    cout << "FPB dari kedua bilangan adalah: " << a << endl;
    return 0;
}