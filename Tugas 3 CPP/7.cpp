// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;
bool isNonincreasing(int a[], int n)
{ for (int i=1; i<n; i++)
if (a[i]>a[i-1]) return false;
return true;
}

int main()
{ 
int a1[] = { 10, 8, 8, 5, 2 };
int a2[] = { 10, 8, 9, 5, 2 };
cout << "Array 1 nonincreasing? "
        << (isNonincreasing(a1,5) ? "Yes" : "No") << endl;
cout << "Array 2 nonincreasing? "
        << (isNonincreasing(a2,5) ? "Yes" : "No") << endl;
return 0;
}