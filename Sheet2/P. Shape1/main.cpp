#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    char sign = '*';

    for (int i = n; i >= 1; --i) { // Outer loop for rows
        for (int j = 0; j < i; ++j) { // Inner loop for printing stars in each row
            cout << sign;
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
