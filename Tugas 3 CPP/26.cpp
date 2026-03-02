// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;
void multiply(float a[], int n, float b[])
{ 
    for (int i=0; i<n; i++)
        a[i] *= b[i];
}
int main()
{
    float a[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    float b[] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
    int n = 5;

    multiply(a, n, b);

    cout << "Array setelah perkalian: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
    return 0;
}