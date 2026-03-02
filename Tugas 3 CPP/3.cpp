// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;
float ave(int[],int);
int main() {
    int a[] = { 11, 33, 55, 77 };
    int size = sizeof(a)/sizeof(int);
    cout << "ave(a,size) = " << ave(a,size) << endl;
}
float ave(int a[], int n){
    float sum=0.0;
    for (int i=0; i<n; i++)
    sum += a[i];
    return sum/n;
}