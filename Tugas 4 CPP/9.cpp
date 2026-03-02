// Fuad Ali Zurriyat
//NIM: D121251035
#include <iostream>
using namespace std;

void cpy(char* s1, const char* s2) {
    while (*s2 != '\0') { 
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
}

int main() {
    char dest[50];           
    const char* src = "Hello World!";

    cpy(dest, src);

    cout << "Hasil copy: " << dest << endl;
    return 0;
}
