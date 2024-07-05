#include <iostream>

using namespace std;

int main() {
    long long testCase;
    cin >> testCase;
    int arr[testCase];
    for (int i = 0; i < testCase; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < testCase; ++i) {
        int number = arr[i];
        long long result = 1; // Use long long to handle large results
        for (int j = 1; j <= number; ++j) {
            result *= j;
        }
        cout << result << endl;
    }

    return 0;
}
