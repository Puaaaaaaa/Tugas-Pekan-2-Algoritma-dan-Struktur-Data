// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;
int frequency(float a[],int n,int x)
{
    int count = 0;
    for (int i=0; i<n; i++)
        if (a[i] == x) ++count;
    return count;
}
int main()
{ 
    float a[] = {   561, 508, 400, 301, 329, 599, 455, 400, 346, 346,
                    329, 375, 561, 390, 399, 400, 401, 561, 405, 405,
                    455, 508, 473, 329, 561, 505, 329, 455, 561, 599,
                    561, 455, 346, 301, 455, 561, 399, 599, 508, 508   };
    int n=40, x;
    cout << "Item: ";
    cin >> x;
    cout << x << " has frequency " << frequency(a,n,x) << endl;
}
