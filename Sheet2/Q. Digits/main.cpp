#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    int arr[t];
    for (int i = 0; i < t; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < t; ++i) {
        string num_str = to_string(arr[i]); // Convert integer to string

        // Print digits of the number from right to left, separated by space
        for (int j = num_str.length() - 1; j >= 0; --j) {
            cout << num_str[j];
            if (j > 0) {
                cout << " ";
            }
        }
        cout << endl; // Move to the next line after printing digits of one number
    }

    return 0;
}
