// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;
bool removeFirst(float a[], int& n, float x)
{ 
    for (int i=0; i<n; i++)
        if (a[i] == x)
{   for (int j=i+1; j<n; j++)
    a[j-1] = a[j];
    --n;
    return true;
}
    return false;
}
int main() {
    float arr[] = { 1.1, 2.2, 3.3, 4.4, 3.3, 5.5 };
    int size = 6;
    cout << "Original (size " << size << "): ";
    for (int i=0; i<size; i++) cout << arr[i] << " ";

    bool result = removeFirst(arr, size, 3.3);
    cout << "\nRemoved? " << (result ? "Yes" : "No") << endl;
    cout << "Modified (size " << size << "): ";
    for (int i=0; i<size; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}