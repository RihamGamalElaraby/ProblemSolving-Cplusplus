#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    long long total_sum = 0;

    // Reading input and computing total sum
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        total_sum += a[i];
    }

    vector<int> nice_indices;

    // Checking each index
    for (int j = 0; j < n; ++j) {
        long long remaining_sum = total_sum - a[j];
        if (remaining_sum % 2 == 0) {
            long long target = remaining_sum / 2;
            if (a[j] == target) {
                nice_indices.push_back(j + 1); // Store 1-based index
            }
        }
    }

    // Output results
    cout << nice_indices.size() << endl;
    if (!nice_indices.empty()) {
        for (int idx : nice_indices) {
            cout << idx << " ";
        }
        cout << endl;
    }

    return 0;
}
