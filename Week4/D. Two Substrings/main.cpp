#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    size_t pos_ab = s.find("AB");
    size_t pos_ba = s.find("BA");

    if ((pos_ab != string::npos && s.find("BA", pos_ab + 2) != string::npos) ||
        (pos_ba != string::npos && s.find("AB", pos_ba + 2) != string::npos)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
