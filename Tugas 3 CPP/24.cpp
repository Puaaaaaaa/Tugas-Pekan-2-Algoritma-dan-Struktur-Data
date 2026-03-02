// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;
bool isSymmetric(int a[], int n)
{ 
    for (int i=0; i<n/2; i++)
        if (a[i] != a[n-1-i]) return false;
    return true;
}
int main()
{
    int arr1[] = { 1, 2, 3, 4, 3, 2, 1 };
    int arr2[] = { 1, 2, 3, 4, 5, 6, 7 };

    cout << "Array 1 is symmetric? " << (isSymmetric(arr1, 7) ? "Yes" : "No") << endl;
    cout << "Array 2 is symmetric? " << (isSymmetric(arr2, 7) ? "Yes" : "No") << endl;
    return 0;
}