// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
#include <cassert>
#include <cmath>
using namespace std;
double stdev(double a[], int n)
{ 
    assert(n > 1);
    double sum=0;
    for (int i=0; i<n; i++)
        sum += a[i];
    double mean = sum/n;
    sum=0;
    double deviation;
    for (int i=0; i<n; i++)
    { 
        deviation = a[i] - mean;
        sum += deviation*deviation;
    }
    return sqrt(sum/(n-1));
}
int main() 
{
    double arr[] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
    int n = 5;
    cout << "Standard Deviation: " << stdev(arr, n) << endl;
    return 0;
}