// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    vector<string> names;
    string buffer;

    cout << "Enter names (Ctrl+Z to stop):\n";

    // Read names line by line
    while (getline(cin, buffer)) {
        if (buffer.empty()) continue; // skip empty lines
        names.push_back(buffer);
    }

    // Sort the names alphabetically
    sort(names.begin(), names.end());

    // Print the sorted names
    cout << "\nSorted names:\n";
    for (int i = 0; i < names.size(); i++) {
        cout << i + 1 << ". " << names[i] << endl;
    }

    return 0;
}
