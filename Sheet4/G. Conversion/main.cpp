#include <iostream>
#include <cctype>  // For isupper, islower, toupper, tolower functions

using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ',') {
            cout << ' ';  // Replace comma with space
        } else if (isupper(s[i])) {
            cout << (char)tolower(s[i]);  // Convert uppercase to lowercase
        } else if (islower(s[i])) {
            cout << (char)toupper(s[i]);  // Convert lowercase to uppercase
        } else {
            cout << s[i];  // Output characters that are not comma or letters as is
        }
    }

    return 0;
}
