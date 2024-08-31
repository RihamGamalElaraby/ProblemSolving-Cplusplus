#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Initial sum of the first 'k' planks
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += v[i];
    }

    int minValue = sum;
    int minIndex = 0;

    // Sliding window over the array
    for (int i = k; i < n; i++) {
        sum = sum + v[i] - v[i - k];  // Slide the window by subtracting the element leaving and adding the new one
        if (sum < minValue) {
            minValue = sum;
            minIndex = i - k + 1;
        }
    }

    cout << minIndex + 1 << endl; // Output the 1-based index

    return 0;
}
