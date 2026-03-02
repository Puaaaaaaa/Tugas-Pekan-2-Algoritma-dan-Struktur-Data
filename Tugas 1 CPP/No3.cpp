// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
using namespace std;
int main() {
    int n = 5;

    for (int i=1; i <= n; i++) {
            cout << i*i << " ";
        }

        cout << "\n\n\n";
        
        //konversi ke while loop
        int i = 1;
        while (i <= n) {
            cout << i*i << " ";
            i++;
        }
        cout << endl;
        return 0;  
}