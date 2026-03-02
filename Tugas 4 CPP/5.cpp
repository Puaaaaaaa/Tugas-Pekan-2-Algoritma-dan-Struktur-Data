// Fuad Ali Zurriyat
//NIM: D121251035
#include <iostream>
#include <cmath>
using namespace std;
double derivative(double (*pf)(double t), double x, double h)
{ 
    return ((*pf)(x+h) - (*pf)(x-h))/(2*h);
}
double cube(double t)
{ 
    return t*t*t;
}
int main()
{ 
    cout << derivative(cube, 1, 0.1) << endl;
    cout << derivative(cube, 1, 0.01) << endl;
    cout << derivative(cube, 1, 0.001) << endl;
    cout << derivative(sqrt, 1, 0.1) << endl;
    cout << derivative(sqrt, 1, 0.01) << endl;
    cout << derivative(sqrt, 1, 0.001) << endl;
}
