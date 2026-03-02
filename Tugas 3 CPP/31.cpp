// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;
const int SIZE = 100;
void read(double[],int&);
double mean(double[],int);
int main()
{ 
    double x[SIZE];
    int n=0;
    read(x,n);
    double m = mean(x,n);
    cout << "mean = " << m << endl;
    for (int i = 0; i < n; i++)
        cout << "x[" << i << "] = " << x[i]
        << ", dev[i] = " << x[i] - m << endl;
}
void read(double x[], int& n)
{ 
    cout << "Enter data. Terminate with 0:\n";
    while (n<SIZE)
    { 
        cout << "x[" << n << "]: ";
        cin >> x[n];
        if (x[n] == 0) break;
        else ++n;
    }
}
double mean(double x[], int n)
{ 
    double sum=0;
    for (int i=0; i<n; i++)
        sum += x[i];
    if (n==0) return 0;
    return sum/n;
}