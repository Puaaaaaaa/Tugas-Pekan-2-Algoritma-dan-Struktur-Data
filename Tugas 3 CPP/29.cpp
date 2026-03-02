// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
#include <cassert>
using namespace std;
const int SIZE = 100;
void shuffle(int a[], int n)
{
    assert(n <= SIZE);
    int temp[SIZE];
    for (int i=0; i<n/2; i++)
    {
        temp[2*i] = a[i];
        temp[2*i+1] = a[n/2+i];
    }
    for (int i=0; i<n; i++)
    a[i] = temp[i];
}
int main() 
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    int n = 8;
    shuffle(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
        cout << endl;
    return 0;
}