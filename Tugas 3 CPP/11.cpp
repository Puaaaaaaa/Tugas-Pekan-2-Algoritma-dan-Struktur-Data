// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
#include <cassert>
using namespace std;
void largest(float& max1, float& max2, float a[], int n)
{   
    assert(n >= 1);
    if (n == 1) { max1 = a[0]; max2 = a[0]; return; }
    int i1=0, i2;
    for (int i=1; i<n; i++)
        if (a[i] > a[i1]) i1 = i;
    max1 = a[i1];
    i2 = ( i1 == 0 ? 1 : 0 );
    for (int i=i2+1; i<n; i++)
        if (i != i1 && a[i] > a[i2]) i2 = i;
    max2 = a[i2];
}
int main() 
{
    float arr[] = { 5.5, 2.2, 9.9, 1.1, 7.7, 9.9 };
    float maxVal1, maxVal2;
    largest(maxVal1, maxVal2, arr, 6);
    cout << "Max 1: " << maxVal1 << endl;
    cout << "Max 2: " << maxVal2 << endl;
    return 0;
}