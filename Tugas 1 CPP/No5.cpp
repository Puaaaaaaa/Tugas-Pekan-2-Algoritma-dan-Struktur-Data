// Fuad Ali Zurriyat
//NIM: D121251035
#include <iostream>
using namespace std;
int main() {
    for (int i = 0; i < 8; i++) {
        if (i % 2 == 0) {
            cout << i + 1 << endl;
        }else if (i % 3 == 0) {
            continue;
        }else if (i % 5 == 0) {
            break;
        }
        cout << "End of program.\n";
    }
    cout << "End of program.\n";
    return 0;
}