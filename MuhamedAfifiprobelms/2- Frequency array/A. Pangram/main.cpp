#include <iostream>
#include <cctype> // for tolower

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // To ignore the newline character after the integer input

    string s;
    getline(cin, s);

    // Frequency array for 26 letters, initialized to 0
    bool present[26] = {false};

    // Process each character in the string
    for (char c : s) {
        if (isalpha(c)) { // Check if the character is a letter
            c = tolower(c); // Convert to lowercase
            present[c - 'a'] = true; // Mark the letter as present
        }
    }

    // Check if all letters are present
    bool isPangram = true;
    for (int i = 0; i < 26; i++) {
        if (!present[i]) {
            isPangram = false;
            break;
        }
    }

    if (isPangram) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
