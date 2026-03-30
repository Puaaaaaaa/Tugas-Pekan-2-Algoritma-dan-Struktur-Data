#include <iostream>
using namespace std;

double powerIteratif(double x, int n) {
    double hasil = 1.0;

    // Jika n adalah 0, loop tidak akan berjalan dan mengembalikan 1.0
    // Jika n > 0, x akan dikalikan ke variabel 'hasil' sebanyak n kali
    for (int i = 0; i < n; i++) {
        hasil = hasil * x;
    }

    return hasil;
}

int main() {
    double basis = 2;
    int pangkat = 3;
    
    cout << basis << " pangkat " << pangkat << " adalah: " << powerIteratif(basis, pangkat) << endl;
    
    return 0;
}