// Fuad Ali Zurriyat
//NIM: D121251035
#include <iostream>
using namespace std;

void abs(float* p[], int n) {
    for (int i = 0; i < n; i++) {
        if (*(p[i]) < 0) {
            *(p[i]) = -(*(p[i])); 
        }
    }
}
int main() {
    float a = -3.5, b = 2.1, c = -9.0, d = 5.0;
    float* arr[] = { &a, &b, &c, &d };

    abs(arr, 4);

    cout << "Hasil: ";
    for (int i = 0; i < 4; i++) {
        cout << *(arr[i]) << " ";
    }
    cout << endl;

    return 0;
}
