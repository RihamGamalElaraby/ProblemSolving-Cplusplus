#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> heights(n);
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }

    vector<int> result(n);
    int max_right = 0;

    // Traverse from the last house to the first
    for (int i = n - 1; i >= 0; --i) {
        if (heights[i] > max_right) {
            result[i] = 0;
            max_right = heights[i];
        } else {
            result[i] = max_right - heights[i] + 1;
        }
    }

    // Print the results
    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
