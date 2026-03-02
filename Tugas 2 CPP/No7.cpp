// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;

int max(int,int,int);
int main() {
    cout << "Enter three integers: ";
    int a, b, c;
    cin >> a >> b >> c;
    cout << "The maximum is: " << max(a,b,c) << endl;
}
int max(int,int);
int max(int a, int b, int c) {
    int max(int,int);
    return max(max(a,b),c);
}
int max(int a, int b) {
    if (a < b) return b;
    else return a;
}