// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
#include <algorithm>
using namespace std;
void sort(float a[], int n)
{ 
    for (int i=1; i<n; i++)
    { 
        int k=0;
        for (int j=1; j<=n-i; j++)
            if (a[j]>a[k]) k = j;
        swap(a[k],a[n-i]);
    }
}

int main()
{
    float arr[] = { 5.5, 2.2, 4.4, 1.1, 3.3 };
    int n = 5;

    sort(arr, n);
    
    cout << "Array setelah pengurutan: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}