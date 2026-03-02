// Fuad Ali Zurriyat
//NIM: D121251035
#include <iostream>
using namespace std;
float* max(float* p[], int n)
{ 
    float* pmax = p[0];
    for (int i = 1; i < n; i++)
        if (*p[i] > *pmax) pmax = p[i];
    return pmax;
}
void print(float a[], int n)
{
    for (int i=0; i<n; i++)
        cout << a[i] << (i == n-1 ? "" : ", ");
    cout << endl;
}
void print(float* p[], int n)
{
    for (int i=0; i<n; i++)
        cout << *p[i] << (i == n-1 ? "" : ", ");
    cout << endl;
}
int main()
{ 
    float a[8] = {44.4, 77.7, 22.2, 88.8, 66.6, 33.3, 99.9, 55.5};
    print(a, 8);
    float* p[8];
    for (int i = 0; i < 8; i++)
        p[i] = &a[i]; 
    print(p, 8);
    float* m = max(p, 8);
    cout << "Address: " << m << ", Value: " << *m << endl;
    return 0;
}