// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;
void print(double a[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
}
double* copy(double a[], int n)
{ 
    double* p = new double[n];
    for (int i = 0; i < n; i++)
        p[i] = a[i];
    return p;
}
int main()
{ 
    double a[8] = {22.2, 33.3, 44.4, 55.5, 66.6, 77.7, 88.8, 99.9};
    print(a, 8);
    double* b = copy(a, 8);
    a[2] = a[4] = 11.1;
    print(a, 8);
    print(b, 8);
    delete[] b;
    return 0;
}