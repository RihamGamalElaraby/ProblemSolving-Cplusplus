#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    long long count = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] - arr[i] <= d) {
                count += 2; // Counting (i, j) and (j, i)
            }
        }
    }

    cout << count << endl;

    return 0;
}
