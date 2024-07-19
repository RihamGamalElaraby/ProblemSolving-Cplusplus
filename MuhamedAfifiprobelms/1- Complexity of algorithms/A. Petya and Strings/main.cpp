#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    // Convert both strings to lowercase
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    // Compare the strings
    if (a < b) {
        cout << "-1" << endl;
    } else if (a > b) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }

    return 0;
}
