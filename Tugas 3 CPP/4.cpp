// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;
void read(int[],int&);
void print(int[],int);
int sum(int[],int);
float ave(int[],int);

int main() {
    const int MAXSIZE=100;
    int a[MAXSIZE]={0}, size;
    read(a,size);
    cout << "The array has " << size << " elements: ";
    print(a,size);
    cout << "\nIts sum is " << sum(a,size)
        << "\nand its average is " << ave(a,size) << endl;
}
void read(int a[],int& n) {
    const int MAXSIZE=100;
    cout << "Enter integers. Terminate with 0:\n";
    n=0;
    do {
        cout << "a[" << n << "] = ";
        cin >> a[n];
    } while (a[n++]!=0 && n<MAXSIZE);
    --n;
}

void print(int a[],int n) {
    for (int i=0; i<n; i++)
        cout << a[i] << " ";
}

int sum(int a[],int n) {
    int s=0;
    for (int i=0; i<n; i++)
        s += a[i];
    return s;
}

float ave(int a[],int n) {
    float sum = 0.0;
    for (int i=0; i<n; i++)
        sum += a[i];
    if (n == 0) return 0.0;
    return sum / n;
}