// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
#include <algorithm>
using namespace std;
void sort(float a[], int indx[], int n)
{ 
    for (int i=1; i<n; i++)
        for (int j=0; j<n-i; j++)
            if (a[indx[j]] > a[indx[j+1]]) swap(indx[j],indx[j+1]);
}
int main()
{
    float a[] = { 5.5, 2.2, 4.4, 1.1, 3.3 };
    int n = 5;
    int indx[] = { 0, 1, 2, 3, 4 };

    sort(a, indx, n);

    cout << "Array sebelum pengurutan: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << "\nArray indeks setelah pengurutan: ";
    for (int i = 0; i < n; i++) cout << indx[i] << " ";
    cout << "\nArray setelah pengurutan menggunakan indeks: ";
    for (int i = 0; i < n; i++) cout << a[indx[i]] << " ";
    cout << endl;

    return 0;
}