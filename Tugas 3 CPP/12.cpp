// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;
void remove(float a[], int& n, int i)
{ 
    for (int j=i+1; j<n; j++)
    a[j-1] = a[j];
    --n;
}
int main() 
{
    float arr[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    int size = 5;
    cout << "Array before removal: ";
    for (int i=0; i<size; i++) cout << arr[i] << " ";

    remove(arr, size, 2); 

    cout << "\nArray after removal: ";
    for( int i=0; i<size; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}