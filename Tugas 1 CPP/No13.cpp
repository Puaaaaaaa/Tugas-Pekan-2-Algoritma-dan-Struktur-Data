// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "Masukkan nilai N: ";
    cin >> N;
    if (N < 0) {
        cout << "Bilangan negatif tidak memiliki akar kuadrat bulat." << endl;
    }
    if (N == 0 || N == 1) {
        cout << "Akar kuadrat bulat dari: " << N << endl;
    }
    int low = 1, high = N, ans = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        int sqr = mid * mid;
        if (sqr == N) {
            ans = mid;
            break;
        }else if (sqr < N) {
            low = mid + 1;
            ans = mid;
        }else {
            high = mid - 1;
        }
    }
    cout << "Akar kuadrat bulat dari " << N << " adalah: " << ans << endl;
    return 0;
}
   