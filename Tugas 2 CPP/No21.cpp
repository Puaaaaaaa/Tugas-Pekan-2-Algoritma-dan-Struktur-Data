// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;
int isTriangular(int);
int main() {
    const int MAX = 12;
    for (int i = 0; i < MAX; i++) {
        if (isTriangular(i))
            cout << i << " is a triangular number.\n" << endl;
        else
            cout << i << " is not a triangular number.\n" << endl;
    }
}
int isTriangular(int n) {
    int x = 0, y = 0, dy = 1;
    while (y < n) {
        y += dy++;
    }
    if (y == n) return true;
    else return false;
}