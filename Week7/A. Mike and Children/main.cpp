#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void set_array(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
}

int calculate_array(int arr[], int n) {
    unordered_map<int, int> sums; // To store sum frequencies
    int maxChildren = 0;

    // Calculate all possible sums and their frequencies
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int sum = arr[i] + arr[j];
            sums[sum]++;
        }
    }

    // Find the maximum frequency (maximum number of children)
    for (auto& sum_pair : sums) {
        maxChildren = max(maxChildren, sum_pair.second);
    }

    return maxChildren;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    set_array(arr, n);

    int result = calculate_array(arr, n);
    cout << result << endl;

    return 0;
}
