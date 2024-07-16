/*#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> arr(n); // Using vector for dynamic array

    // Reading array elements
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Processing each query
    while (q--) { // Corrected loop condition
        int l, r;
        cin >> l >> r;

        long long sum = 0; // Initialize sum for each query

        for (int i = l - 1; i < r; ++i) { // Adjusted to 0-based indexing
            sum += arr[i];
        }

        cout << sum << endl;
    }

    return 0;
}
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> arr(n + 1); // Using 1-based indexing for easier prefix sum calculation
    vector<long long> prefix(n + 1, 0); // prefix sum array

    // Read array elements
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }

    // Build prefix sum array
    for (int i = 1; i <= n; ++i) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    // Process queries
    for (int i = 0; i < q; ++i) {
        int l, r;
        cin >> l >> r;
        // Calculate sum from index l to r using prefix sum
        long long sum = prefix[r] - prefix[l - 1];
        cout << sum << endl;
    }

    return 0;
}
