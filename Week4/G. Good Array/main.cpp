#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    long long total_sum = 0;

    unordered_map<int, int> freq;  // To store the frequency of each element

    // Reading input and computing total sum
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        total_sum += a[i];
        freq[a[i]]++;  // Count frequency of each element
    }

    vector<int> nice_indices;

    // Checking each index
    for (int j = 0; j < n; ++j) {
        long long remaining_sum = total_sum - a[j];

        // Check if remaining_sum is even
        if (remaining_sum % 2 == 0) {
            long long target = remaining_sum / 2;

            // Cast target to int before accessing the map
            if (target >= 0 && freq[(int)target] > (target == a[j] ? 1 : 0)) {
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
