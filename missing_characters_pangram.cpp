#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    bool present[26] = {false};

    for (char ch : text) {
        if (isalpha(static_cast<unsigned char>(ch))) {
            present[tolower(static_cast<unsigned char>(ch)) - 'a'] = true;
        }
    }

    string missing;
    for (int i = 0; i < 26; ++i) {
        if (!present[i]) missing += char('a' + i);
    }

    if (missing.empty()) {
        cout << "The string is already a pangram\n";
    } else {
        cout << "Missing characters to make pangram:\n" << missing << "\n";
    }

    return 0;
}
