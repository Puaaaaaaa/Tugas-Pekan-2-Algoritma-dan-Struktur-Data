// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;
void insert(float a[], int& n, float x)
{ 
    int j=n;
    while (j>0 && a[j-1]>x)
    {
        a[j] = a[j-1];
        j--;
    }
    a[j] = x;
    ++n;
}

int main()
{
    float arr[20] = { 1.1, 2.2, 4.4, 5.5 };
    int size = 4;

    cout << "Array sebelum penyisipan: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";

    insert(arr, size, 3.3);

    cout << "\nArray setelah penyisipan: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}