// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
#include <iomanip>
using namespace std;
const int SIZE = 400;
void sieve(bool[],int);
void print(bool[],int);
int main()
{
    bool isPrime[SIZE] = {0};
    sieve(isPrime,SIZE);
    print(isPrime,SIZE);
}
void sieve(bool isPrime[], int n)
{
    for (int i=2; i<n; i++)
        isPrime[i] = true; 
    for (int p=2; p<=n/2; p++)
        for (int m=2*p; m<n; m += p)
            isPrime[m] = false; 
}
void print(bool a[], int n)
{ 
    for (int i=1; i<n; i++)
        if (a[i]) cout << setw(3) << i;
        else cout << setw(3) << (i%20==0?'\n':' ');
}