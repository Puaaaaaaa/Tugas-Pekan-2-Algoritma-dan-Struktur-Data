// Fuad Ali Zurriyat
//NIM: D121251035
#include <iostream>
using namespace std;

float* mirror(float* p[], int n) {
    float* result = new float[n];
    for (int i = 0; i < n; i++) {
        result[i] = *(p[n - 1 - i]);
    }

    return result;
}
int main() {
    float a = 1.1, b = 2.2, c = 3.3, d = 4.4;
    float* arr[] = { &a, &b, &c, &d };
    int n = 4;

    float* mirrored = mirror(arr, n);

    cout << "Hasil mirror: ";
    for (int i = 0; i < n; i++) {
        cout << mirrored[i] << " ";
    }
    cout << endl;

    delete[] mirrored; 
    return 0;
}
