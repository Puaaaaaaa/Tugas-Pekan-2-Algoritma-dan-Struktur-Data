// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
#include <cassert>
using namespace std;
void getExtremes(float& min, float& max, float a[], int n)
{   assert(n >= 0);
    min = max = a[0];
    for (int i=1; i<n; i++)
        if (a[i] < min) min = a[i];
        else if (a[i] > max) max = a[i];
}

int main() 
{
    float arr[] = { 5.5, 2.2, 9.9, 1.1, 7.7 };
    float minimum, maximum;
    getExtremes(minimum, maximum, arr, 5);
    cout << "Minimum value in the array is: " << minimum << endl;
    cout << "Maximum value in the array is: " << maximum << endl;
    return 0;
}