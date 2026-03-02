// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;
void removeAll(float a[], int& n, float x)
{ 
    for (int i=0; i<n; i++)
        if (a[i] == x)
        {   
            for (int j=i+1; j<n; j++)
                a[j-1] = a[j];
             --n;
        }
}
int main() {
    float arr[] = { 1.1, 2.2, 3.3, 4.4, 3.3, 5.5 };
    int size = 6;
    cout << "Original (size " << size << "): ";
    for (int i=0; i<size; i++) cout << arr[i] << " ";

    removeAll(arr, size, 3.3f);

    cout << "\nModified (size " << size << "): ";
    for (int i=0; i<size; i++) cout << arr[i] << " ";
    return 0;
}