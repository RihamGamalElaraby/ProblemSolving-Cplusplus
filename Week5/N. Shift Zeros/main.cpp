#include <iostream>
#include <vector>
using namespace std;

void shiftZeros(int arr[], int n) {
    vector<int> shifted;
    vector<int> zeros;

    // Separate non-zero elements and zero elements
    for (int i = 0; i < n; ++i) {
        if (arr[i] != 0) {
            shifted.push_back(arr[i]);
        } else {
            zeros.push_back(arr[i]);
        }
    }

    // Print non-zero elements
    for (int num : shifted) {
        cout << num << " ";
    }

    // Print zero elements
    for (int num : zeros) {
        cout << num << " ";
    }

    cout << endl;
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Shift zeros and print the result
    shiftZeros(arr, n);

    return 0;
}
