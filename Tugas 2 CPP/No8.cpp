// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;

int min(int,int,int,int);
int main() {
    cout << "Enter four integers: ";
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << "The minimum integer is: " << min(a, b, c, d) << endl;
}
int min(int,int);
int min(int n1, int n2, int n3, int n4) {
    int m12 = min(n1, n2);
    int m34 = min(n3, n4);
    return (m12 < m34) ? m12 : m34;
}
int min(int m, int n) {
    return (m < n) ? m : n;
}