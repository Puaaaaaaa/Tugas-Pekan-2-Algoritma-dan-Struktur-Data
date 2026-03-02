// Fuad Ali Zurriyat
//NIM: D121251035
#include <iostream>
using namespace std;

char* chr(char* s, char c) {
    while (*s != '\0') {  
        if (*s == c) {
            return s;      
        }
        s++;
    }
    return NULL;           
}
int main() {
    char text[] = "Hello World!";
    char target = 'o';

    char* found = chr(text, target);

    if (found != NULL) {
        cout << "Karakter ditemukan pada: " << found << endl;
    } else {
        cout << "Karakter tidak ditemukan." << endl;
    }

    return 0;
}
