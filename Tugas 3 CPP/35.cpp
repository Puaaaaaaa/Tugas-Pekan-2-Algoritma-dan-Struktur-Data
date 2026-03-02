// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
#include <cassert>
#include <iomanip>
using namespace std;
const int SIZE = 10;
void build_pascal(int p[][SIZE], int n)
{ 
    assert(n > 0 && n < SIZE);
    for (int i=0; i<SIZE; i++)
        for (int j=0; j<SIZE; j++)
            if (i>n || j>i) p[i][j] = 0;
            else if (j==0 || j==i) p[i][j] = 1;
            else p[i][j] = p[i-1][j-1] + p[i-1][j];
}
int main () 
{
    int pascal_triangle[SIZE][SIZE];
    int n_rows = 5;

    build_pascal(pascal_triangle, n_rows);

    cout << "Pascal's Triangle (rows 0 to " << n_rows << "):" << endl;
    for (int i = 0; i <= n_rows; i++) 
    {
        for (int j = 0; j <= i; j++) 
        {
            cout << setw(4) << pascal_triangle[i][j];
        }
        cout << endl;
    }
    return 0;
}