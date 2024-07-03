#include <iostream>
#include <string>

using namespace std;

int main() {
    string N;
    cin >> N;

    size_t pos = N.find('.');
    if (pos != string::npos) {
        // It's a float number
        string integer_part = N.substr(0, pos);
        string decimal_part = N.substr(pos + 1);

        // Check if decimal part is all zeros
        bool all_zeros = true;
        for (char c : decimal_part) {
            if (c != '0') {
                all_zeros = false;
                break;
            }
        }

        if (all_zeros) {
            cout << "int " << integer_part << endl;
        } else {
            cout << "float " << integer_part << " " << decimal_part << endl;
        }
    } else {
        // It's an integer number
        cout << "int " << N << endl;
    }

    return 0;
}
