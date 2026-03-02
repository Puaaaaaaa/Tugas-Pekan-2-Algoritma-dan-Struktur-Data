// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;
void outerProduct3(float p[][3], float a[], float b[])
{ 
    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++)
            p[i][j] = a[i]*b[j];
}
int main()
{
    float a[] = { 1.0, 2.0, 3.0 };
    float b[] = { 4.0, 5.0, 6.0 };
    float p[3][3];

    outerProduct3(p, a, b);

    cout << "Outer product matrix: " << endl;
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) {
            cout << p[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}