// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;

void sort(float* p[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*p[j] < *p[i]) {
                float* temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
}
int main() {
    float a = 4.2, b = 1.5, c = 8.8, d = 2.3;
    float* arr[] = { &a, &b, &c, &d };
    sort(arr, 4);
    cout << "Hasil sort (pointer order): ";
    for (int i = 0; i < 4; i++) {
        cout << *(arr[i]) << " ";
    }
    cout << endl;
    cout << "Nilai asli tetap: " << a << " " << b << " " << c << " " << d << endl;
    return 0;
}
