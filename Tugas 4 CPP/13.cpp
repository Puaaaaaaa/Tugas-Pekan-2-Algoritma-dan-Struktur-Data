// Fuad Ali Zurriyat
//NIM: D121251035
#include <iostream>
using namespace std;

float sum(float* p[], int n) {
    float total = 0.0;
    for (int i = 0; i < n; i++) {
        total += *(p[i]);  
    }
    return total;
}

int main() {
    float a = 1.5, b = 2.5, c = 3.0, d = 4.0;
    float* arr[] = { &a, &b, &c, &d };

    cout << "Sum = " << sum(arr, 4) << endl; 
    return 0;
}
