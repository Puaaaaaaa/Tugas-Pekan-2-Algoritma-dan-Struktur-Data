// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
#include <cassert>
using namespace std;
int minIndex(float a[], int n)
{   assert(n >= 0);
    int j=0;
    for (int i=1; i<n; i++)
        if (a[i] < a[j]) j = i;
    return j;
}
int main() 
{
    float arr[] = { 5.5, 2.2, 9.9, 1.1, 7.7 };
    cout << "Index of minimum value in the array is: " << minIndex(arr, 5) << endl;
    return 0;
}