// Fuad Ali Zurriyat
// NIM: D121251035
#include <iostream>
#include <cstring>
using namespace std;

// Fungsi plural
void plural(const char singular[], char pluralWord[])
{
    int len = strlen(singular);

    // Jika berakhiran s, x, z, ch, sh → tambahkan "es"
    if ( (len >= 2 && (
          strcmp(&singular[len-2], "ch") == 0 ||
          strcmp(&singular[len-2], "sh") == 0 )) ||
         singular[len-1] == 's' ||
         singular[len-1] == 'x' ||
         singular[len-1] == 'z')
    {
        strcpy(pluralWord, singular);
        strcat(pluralWord, "es");
    }

    // Jika berakhiran "y" dan sebelumnya huruf konsonan → ganti y → ies
    else if (singular[len-1] == 'y' &&
             !(singular[len-2] == 'a' ||
               singular[len-2] == 'e' ||
               singular[len-2] == 'i' ||
               singular[len-2] == 'o' ||
               singular[len-2] == 'u'))
    {
        strcpy(pluralWord, singular);
        pluralWord[len-1] = '\0';  // hapus y
        strcat(pluralWord, "ies");
    }

    // Selain itu → tambah "s"
    else
    {
        strcpy(pluralWord, singular);
        strcat(pluralWord, "s");
    }
}

int main()
{
    char word[50];
    char pluralForm[60];

    cout << "Enter a singular noun: ";
    cin >> word;

    plural(word, pluralForm);

    cout << "Plural form: " << pluralForm << endl;
}
