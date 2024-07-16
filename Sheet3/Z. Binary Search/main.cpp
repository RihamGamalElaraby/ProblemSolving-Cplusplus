#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Sort the array
    sort(arr, arr + n);

    // Process each query
    for (int i = 0; i < q; ++i) {
        int x;
        cin >> x;

        // Perform binary search
        if (binary_search(arr, arr + n, x)) {
            cout << "found" << endl;
        } else {
            cout << "not found" << endl;
        }
    }

    return 0;
}
