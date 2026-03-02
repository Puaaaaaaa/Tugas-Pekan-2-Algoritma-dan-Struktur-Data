// Fuad Ali Zurriyat
// NIM: D121251035
// File: soal_8_20.cpp
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    // String disalin persis dari soal
    char s[] = "###ABCD#EFG##HIJK#L#MN#####O#P#####";
    char* p;

    cout << "The string is: [" << s << "]\nIts tokens are:\n";

    // strtok memecah string berdasarkan delimiter '#'
    p = strtok(s, "#");

    while (p) {
        cout << "\t[" << p << "]\n";
        p = strtok(NULL, "#");
    }

    cout << "Now the string is: [" << s << "]\n";
    return 0;
}