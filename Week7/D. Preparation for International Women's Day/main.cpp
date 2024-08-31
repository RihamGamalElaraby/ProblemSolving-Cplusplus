#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> remainder_count(k, 0);

    // Step 1: Count the frequency of remainders
    for (int i = 0; i < n; i++) {
        int d;
        cin >> d;
        remainder_count[d % k]++;
    }

    int pairs = 0;

    // Step 2: Form pairs where remainder is 0
    pairs += remainder_count[0] / 2;

    // Step 3: Form pairs for other remainders
    for (int r = 1; r <= k / 2; r++) {
        if (r == k - r) {
            // Special case when r == k - r (only happens when k is even)
            pairs += remainder_count[r] / 2;
        } else {
            // Pair remainder r with remainder k - r
            pairs += min(remainder_count[r], remainder_count[k - r]);
        }
    }

    // Step 4: Calculate the total number of boxes used
    cout << pairs * 2 << endl;

    return 0;
}
