// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;
void indirectPerfectShuffle(float* p[], int n) {
    if (n % 2 != 0) {
        cout << "Perfect shuffle requires an even number of elements." << endl;
        return;
    }
    int half = n / 2;
    float** temp = new float*[n];
    int i = 0;
    int j = 0;
    while (j < half) {
        temp[i++] = p[j];         
        temp[i++] = p[j + half];  
        j++;
    }
    for (int k = 0; k < n; k++) {
        p[k] = temp[k];
    }
    delete[] temp;
}
int main() {
    float a = 1, b = 2, c = 3, d = 4, e = 5, f = 6;
    float* arr[] = { &a, &b, &c, &d, &e, &f }; 
    int n = 6;
    indirectPerfectShuffle(arr, n);
    cout << "Shuffled (pointer order): ";
    for (int i = 0; i < n; i++) {
        cout << *(arr[i]) << " ";
    }
    cout << endl;
    cout << "Original values still intact: ";
    cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << endl;
    return 0;
}
