#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;

        // Check the length of the string
        if (s.size() > 10) {
            // Create the abbreviated version
            cout << s[0] << (s.size() - 2) << s[s.size() - 1] << endl;
        } else {
            // Print the original string
            cout << s << endl;
        }
    }

    return 0;
}
