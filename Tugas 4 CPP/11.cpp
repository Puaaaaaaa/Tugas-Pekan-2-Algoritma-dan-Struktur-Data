// Fuad Ali Zurriyat
//NIM: D121251035
#include <iostream>
using namespace std;
int len(const char* s) {
    int count = 0;
    while (*s != '\0') {
        count++;
        s++;
    }
    return count;
}
int cmp(char* s1, char* s2) {
    int n = len(s2); 
    for (int i = 0; i < n; i++) {
        if (*s1 != *s2) {
            return (*s1 < *s2) ? -1 : 1;
        }
        s1++;
        s2++;
    }
    return 0;
}
int main() {
    char a[] = "Hello";
    char b[] = "Hello";
    char c[] = "Helzo";
    char d[] = "Hexlo";

    cout << cmp(a, b) << endl;
    cout << cmp(a, c) << endl; 
    cout << cmp(a, d) << endl; 

    return 0;
}
