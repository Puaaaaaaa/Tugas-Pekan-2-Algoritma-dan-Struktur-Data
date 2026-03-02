// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
#include <cassert>
using namespace std;
float min(float a[], int n)
{   
    assert(n >= 0);
    float min=a[0];
    for (int i=1; i<n; i++)
        if (a[i] < min) min = a[i];
    return min;
}
int main() 
{
    float arr[] = { 5.5, 2.2, 9.9, 1.1, 7.7 };
    cout << "Minimum value in the array is: " << min(arr, 5) << endl;
    return 0;
}
