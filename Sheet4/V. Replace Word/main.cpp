#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    string result;
    int i = 0;

    while (i < s.size()) {
        if (s.substr(i, 5) == "EGYPT") {
            result += " ";  // Append a space to result
            i += 5;         // Skip the "EGYPT" substring
        } else {
            result += s[i]; // Append the current character to result
            ++i;
        }
    }

    cout << result << endl;

    return 0;
}
