#include <iostream>
#include <set>
#include <cctype>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n < 26) {
        cout << "NO" << endl;
        return 0;
    }

    set<char> unique_chars;
    for (char c : s) {
        unique_chars.insert(tolower(c));
    }

    if (unique_chars.size() == 26) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
