// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;
void append(int a[], int m, int b[], int n)
{ 
    for (int j=0; j<n; j++) 
        a[m+j] = b[j];
}

int main()
{ 
    int a[20] = { 1, 2, 3, 4, 5 };
    int b[] = { 6, 7, 8 };
    int m = 5;
    int n = 3;
    
    append(a, m, b, n);

    cout << "Array A setelah penggabungan: ";
    for (int i = 0; i < m + n; i++) cout << a[i] << " ";
    cout << endl;
    return 0;
}