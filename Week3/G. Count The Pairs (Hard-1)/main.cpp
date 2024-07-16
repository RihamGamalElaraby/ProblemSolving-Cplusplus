/*#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Calculate the desired sum
    int compare = arr[0] + arr[n-1];
    int countt = 0;

    // Iterate through pairs (i, j)
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] + arr[j] == compare) {
                ++countt;
            }
        }
    }

    // Output the count of valid pairs
    cout << countt << endl;

    return 0;
}

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

    // Find min and max values in the array
    int min_val = *min_element(arr.begin(), arr.end());
    int max_val = *max_element(arr.begin(), arr.end());
    int target_sum = min_val + max_val;

    // Count the number of valid pairs
    int countt = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] + arr[j] == target_sum) {
                ++countt;
            }
        }
    }

    // Output the result
    cout << countt << endl;

    return 0;
}
*/
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

    // Find min and max values in the array
    int min_val = *min_element(arr.begin(), arr.end());
    int max_val = *max_element(arr.begin(), arr.end());
    int target_sum = min_val + max_val;

    // Use a hash map to count occurrences of each number
    vector<int> count(1000001, 0);
    for (int num : arr) {
        ++count[num];
    }

    // Count the number of valid pairs
    long long countt = 0;
    for (int i = 0; i < n; ++i) {
        int needed = target_sum - arr[i];
        if (needed >= 0 && needed <= 1000000) {
            countt += count[needed];
            if (arr[i] == needed) {
                --countt; // Subtract self-pairing (i, i)
            }
        }
    }

    // Output the result
    cout << countt / 2 << endl; // Each pair (i, j) is counted twice

    return 0;
}
