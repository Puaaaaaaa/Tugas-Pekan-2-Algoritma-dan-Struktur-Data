// Fuad Ali Zurriyat
//NIM: D121251035
#include <iostream>
using namespace std;

unsigned len(const char* s) {
    unsigned count = 0;
    while (*s != '\0') { 
        count++;
        s++;
    }
    return count;
}

int main() {
    const char* text = "Hello World!";
    cout << "Length: " << len(text) << endl;
    return 0;
}
