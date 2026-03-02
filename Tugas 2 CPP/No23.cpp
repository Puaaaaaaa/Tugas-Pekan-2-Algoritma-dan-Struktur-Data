// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;

int isPentagonal(int);
int main() {
    const int MAX = 40;
    for (int i = 0; i < MAX; i ++) { 
        if (isPentagonal(i)) cout << i << " is Pentagonal.\n";
        else cout << i << " is not Pentagonal.\n";
    }
}
int isPentagonal(int n) {
    int x = 0,y = 0,dy = 1;
    while (y < n) {
        y += dy;
        dy += 3;
    }
    if (y == n) return true;
    else return false;
}