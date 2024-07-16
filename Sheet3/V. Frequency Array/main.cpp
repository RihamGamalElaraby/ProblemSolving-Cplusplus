#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int count[m + 1] = {0};  // Initialize a frequency array with zeros

    for (int i = 0; i < n; ++i) {
        if (arr[i] <= m) {
            ++count[arr[i]];
        }
    }

    for (int i = 1; i <= m; ++i) {
        cout << count[i] << endl;
    }

    return 0;
}
