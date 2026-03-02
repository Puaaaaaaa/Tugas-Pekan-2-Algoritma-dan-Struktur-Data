// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
#include <cassert>
using namespace std;
void rotate(int a[], int n, int k)
{ 
    const int MAXOFFSET=100;
    assert(k < MAXOFFSET && -k < MAXOFFSET);
    int temp[MAXOFFSET];

    if (k > 0)
    { 
        k = k % n;
        for (int j=0; j<k; j++) 
            temp[j] = a[n-k+j];
        for (int i=n-1; i>=k; i--)
            a[i] = a[i-k];
        for (int i=0; i<k; i++) 
            a[i] = temp[i];
    }

    if (k < 0)
    { 
        k = -k;
        k = k % n;
        for (int j=0; j<k; j++) 
            temp[j] = a[j];
        for (int i=0; i<n-k; i++) 
            a[i] = a[i+k];
        for (int i=n-k; i<n; i++) 
            a[i] = temp[i-(n-k)];
    }
}

int main() 
{ 
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    int n = 8;

    cout << "Rotate by 3: ";
    rotate(arr, n, 3);
    for (int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;

    int arr2[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    cout << "Rotate left by 2 (k = -2): ";
    rotate (arr2, n, -2);
    for (int i=0; i<n; i++) cout << arr2[i] << " ";
    cout << endl;
    return 0;
}