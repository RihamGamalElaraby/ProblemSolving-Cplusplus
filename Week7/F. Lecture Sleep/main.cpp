#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n), t(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> t[i];
    }

    // Calculate initial number of theorems written down without any technique
    int initial_sum = 0;
    for (int i = 0; i < n; ++i) {
        if (t[i] == 1) {
            initial_sum += a[i];
        }
    }

    // Calculate the additional theorems written if Mishka is kept awake during a k-minute window
    vector<int> additional(n, 0); // Array to store additional theorems in each minute if kept awake

    for (int i = 0; i < n; ++i) {
        if (t[i] == 0) {
            additional[i] = a[i];
        }
    }

    // Calculate prefix sums for the additional array
    vector<int> prefix_sum(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        prefix_sum[i] = prefix_sum[i - 1] + additional[i - 1];
    }

    // Find the maximum sum of additional theorems in any k-minute window
    int max_additional = 0;
    for (int i = k; i <= n; ++i) {
        int window_sum = prefix_sum[i] - prefix_sum[i - k];
        max_additional = max(max_additional, window_sum);
    }

    // Print the total maximum number of theorems Mishka can write down
    cout << initial_sum + max_additional << endl;

    return 0;
}
