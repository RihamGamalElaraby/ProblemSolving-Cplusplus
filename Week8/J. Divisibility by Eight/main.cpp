#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;
    int length = n.size();

    // Check single-digit numbers
    for (int i = 0; i < length; i++) {
        int digit = n[i] - '0'; // Convert character to integer
        if (digit % 8 == 0) {
            cout << "YES" << endl;
            cout << digit << endl;
            return 0;
        }
    }

    // Check two-digit numbers
    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            int num = (n[i] - '0') * 10 + (n[j] - '0');
            if (num % 8 == 0) {
                cout << "YES" << endl;
                cout << num << endl;
                return 0;
            }
        }
    }

    // Check three-digit numbers
    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            for (int k = j + 1; k < length; k++) {
                int num = (n[i] - '0') * 100 + (n[j] - '0') * 10 + (n[k] - '0');
                if (num % 8 == 0) {
                    cout << "YES" << endl;
                    cout << num << endl;
                    return 0;
                }
            }
        }
    }

    // If no number is found
    cout << "NO" << endl;
    return 0;
}
