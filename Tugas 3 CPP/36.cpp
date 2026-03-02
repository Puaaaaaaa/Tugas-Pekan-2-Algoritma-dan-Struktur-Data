// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
#include <cassert>
using namespace std;

const int SIZE = 3;
typedef double Matrix[SIZE][SIZE];
double max_of_col(Matrix m, int n, int j)
{ 
    double max=m[0][j];
    for (int i=1; i<n; i++)
        if (m[i][j]>max) max = m[i][j];
    return max;
}
double minimax(Matrix m, int n)
{ 
    assert(n>0 && n <= SIZE);
    double minimax=max_of_col(m,n,0);
    for (int j=1; j<n; j++)
    { 
        double mm = max_of_col(m,n,j);
        if (mm<minimax) minimax = mm;
    }
    return minimax;
}
int main()
{ 
    Matrix mat = { 1, 5, 3,
                   4, 2, 6,
                   7, 8, 2 };
    cout << "minimax = " << minimax(mat,SIZE) << endl;
    return 0;
}