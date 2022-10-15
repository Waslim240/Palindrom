#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string abc;
    string kata;

    cout << "Masukkan Kata\t    : ";
    getline(cin, kata);

    string originalKata = kata;
    transform(originalKata.begin(), originalKata.end(), originalKata.begin(), ::tolower);

    string reversedWord = originalKata;
    reverse(reversedWord.begin(), reversedWord.end());
    abc=reversedWord;

    if(originalKata == reversedWord) {
        cout << "\nKata pertama :" << kata << "\nkata setelah dibalik :" << abc << "\nkata ini palindrome" <<endl;
    } else {
        cout << "\nKata pertama :" << kata << "\nkata setelah dibalik :" << abc << "\nkata ini bukan palindrome" <<endl;
    }
    return 0;
}

