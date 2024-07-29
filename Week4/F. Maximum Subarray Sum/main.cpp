#include <iostream>
#include <vector>
#include <algorithm> // for max function

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input: size of the array must be positive." << endl;
        return 1;
    }

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int max_current = arr[0];
    int max_global = arr[0];

    for (int i = 1; i < n; ++i) {
        max_current = max(arr[i], max_current + arr[i]);
        if (max_current > max_global) {
            max_global = max_current;
        }
    }

    cout << max_global << endl;

    return 0;
}
