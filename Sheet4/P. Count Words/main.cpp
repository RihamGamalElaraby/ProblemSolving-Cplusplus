#include <iostream>
#include <cctype> // For isalpha function

using namespace std;

int main() {
    string s;
    getline(cin, s);

    int count = 0;
    bool inWord = false;

    for (char c : s) {
        if (isalpha(c)) {
            if (!inWord) {
                // Start of a new word
                inWord = true;
                ++count;
            }
        } else {
            // Current character is not part of a word
            inWord = false;
        }
    }

    cout << count << endl;
    return 0;
}
