// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;
int main() {
    for (int i = 0; i < 8; i++) {

        if (i % 2 == 0) {
            cout << i + 1 << "\t";
        }else if (i % 3 == 0) {
            cout << i*i << "\t";
        }else if (i % 5 == 0) {
            cout << 2*i - 1 << "\t";
        }else {
            cout << i << "\t";
        }
    }
}