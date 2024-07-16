#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Create a sorted version of the array
    vector<int> arrSorted = arr;
    sort(arrSorted.begin(), arrSorted.end());

    // Precompute prefix sums for both original and sorted arrays
    vector<long long> prefixSumOriginal(n + 1, 0), prefixSumSorted(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        prefixSumOriginal[i] = prefixSumOriginal[i - 1] + arr[i - 1];
        prefixSumSorted[i] = prefixSumSorted[i - 1] + arrSorted[i - 1];
    }

    int m;
    cin >> m;
    while (m--) {
        int type, l, r;
        cin >> type >> l >> r;
        long long sum = 0;

        if (type == 1) {
            sum = prefixSumOriginal[r] - prefixSumOriginal[l - 1];
        } else if (type == 2) {
            sum = prefixSumSorted[r] - prefixSumSorted[l - 1];
        }

        cout << sum << endl;
    }

    return 0;
}
