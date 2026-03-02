// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
#include <cassert>
#include <cmath>
using namespace std;
void print(double x[], int n);
double mean(double x[], int n);
double stdev(double a[], int n);
int main()
{ 
    double x[] = { 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };
    int n=8;
    print(x,n);
    double m = mean(x,n);
    double s = stdev(x,n);
    cout << "mean = " << m << ", std dev = " << s << endl;
    for (int i=0; i<n; i++)
        cout << "x[" << i << "] = " << x[i]
        << ", z[" << i << "] = " << (x[i] - m)/s << endl;
}
void print(double x[], int n)
{ 
    for (int i=0; i<n; i++)
        cout << "x[" << i << "] = " << x[i] << endl;
    cout << endl;
}
double mean(double x[], int n)
{ 
    double sum=0;
    for (int i=0; i<n; i++)
        sum += x[i];
    if (n==0) return 0;
    return sum/n;
}
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