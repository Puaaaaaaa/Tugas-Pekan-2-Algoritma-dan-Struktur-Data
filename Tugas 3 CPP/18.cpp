// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;
void sort(float a[], int n)
{ 
    for (int i=1; i<n; i++)
    { 
        float x=a[i];
        int j=i;
        while (j>0 && a[j-1]>x)
        { 
            a[j] = a[j-1];
            j--;
        }
        a[j] = x;
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
