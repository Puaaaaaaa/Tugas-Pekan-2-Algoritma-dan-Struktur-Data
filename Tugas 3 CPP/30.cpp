// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
#include <iomanip>
using namespace std;
const int SIZE=3;
typedef int Matrix[SIZE][SIZE];
void print(Matrix);
void rotate(Matrix);
int main()
{ 
    Matrix m = { 11, 22, 33, 44, 55, 66, 77, 88, 99 };
    print(m);
    rotate(m);
    print(m);
}
void print(Matrix a)
{ 
    for (int i=0; i<SIZE; i++)
    { 
        for (int j=0; j<SIZE; j++)
            cout << a[i][j] << "\t";
        cout << endl;
    }
    cout << endl;
}
void rotate(Matrix m)
{ 
    Matrix temp;
    for (int i=0; i<SIZE; i++)
        for (int j=0; j<SIZE; j++)
            temp[i][j] = m[SIZE-j-1][i];
    for (int i=0; i<SIZE; i++)
        for (int j=0; j<SIZE; j++)
            m[i][j] = temp[i][j];
}