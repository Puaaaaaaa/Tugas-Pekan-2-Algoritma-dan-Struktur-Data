// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
#include <algorithm>
using namespace std;
void reverse(int a[], int n)
{ 
    for (int i=0; i<n/2; i++)
        swap(a[i],a[n-1-i]);
}
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int n = 7;

    reverse(arr, n);

    cout << "Array setelah pembalikan: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}