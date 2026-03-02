// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;

void indirectSelectionSort(float* p[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (*p[j] < *p[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            float* temp = p[i];
            p[i] = p[minIndex];
            p[minIndex] = temp;
        }
    }
}
int main() {
    float a = 5.5, b = 1.2, c = 7.8, d = 0.9, e = 3.3;
    float* arr[] = { &a, &b, &c, &d, &e };
    int n = 5;
    indirectSelectionSort(arr, n);
    cout << "Sorted result via pointers: ";
    for (int i = 0; i < n; i++) {
        cout << *(arr[i]) << " ";
    }
    cout << endl;
    cout << "Original values still intact: ";
    cout << a << " " << b << " " << c << " " << d << " " << e << endl;
    return 0;
}
