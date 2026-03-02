// Fuad Ali Zurriyat
//NIM: D121251035
#include <iostream>
#define NULL 0
using namespace std;
int* location(int a[], int n, int target)
{ 
    for (int i = 0; i < n; i++)
        if (a[i] == target) return &a[i];
    return NULL;
}
int main()
{
    int a[8] = {22, 33, 44, 55, 66, 77, 88, 99}, * p, n;
    do
    { 
        cout << "Enter a number to search (0 to end): ";
        cin >> n;
        if (p = location(a, 8, n))
            cout << "Address: " << p << ", Value: " << *p << endl;
        else 
            cout << n << " was not found.\n";
    } while (n > 0);
    return 0;
}