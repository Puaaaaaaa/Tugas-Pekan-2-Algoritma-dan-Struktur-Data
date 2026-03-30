#include <iostream>
using namespace std;

double power(double x, int n) {
    // Base case
    if (n == 0) {
        return 1;
    }
    // Recursive step
    return x * power(x, n - 1);
}

int main() {
    cout << "Hasil 2 pangkat 3 adalah: " << power(2, 3) << endl;
    return 0;
}