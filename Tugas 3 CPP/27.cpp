// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;
float innerProduct(float a[], int n, float b[])
{
    float p=0;
    for (int i=0; i<n; i++)
        p += a[i]*b[i];
    return p;
}
int main()
{
    float a[] = { 1.1, 2.2, 3.3 };
    float b[] = { 1.0, 2.0, 3.0 };
    int n = 3;

    cout << "Inner product: " << innerProduct(a, n, b) << endl;
    return 0;
}