// Fuad Ali Zurriyat
//NIM: D121251035
#include <iostream>
using namespace std;

void cat(char* s1, const char* s2) {
    while (*s1 != '\0') {
        s1++;
    }
    while (*s2 != '\0') {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
}

int main() {
    char dest[100] = "Hello"; 
    const char* src = " World!";

    cat(dest, src);

    cout << "Hasil concat: " << dest << endl;
    return 0;
}
