// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;
void indirectInsertionSort(float* p[], int n) {
    for (int i = 1; i < n; i++) {
        float* temp = p[i];
        int j = i - 1;

        while (j >= 0 && *p[j] > *temp) {
            p[j + 1] = p[j];
            j--;
        }

        p[j + 1] = temp;
    }
}
int main() {
    float a = 4.4, b = 1.0, c = 8.8, d = 3.3, e = 2.2;
    float* arr[] = { &a, &b, &c, &d, &e };

    int n = 5;
    indirectInsertionSort(arr, n);
    cout << "Sorted result via pointers: ";
    for (int i = 0; i < n; i++) {
        cout << *(arr[i]) << " ";
    }
    cout << endl;
    cout << "Original values stay the same: ";
    cout << a << " " << b << " " << c << " " << d << " " << e << endl;
    return 0;
}
