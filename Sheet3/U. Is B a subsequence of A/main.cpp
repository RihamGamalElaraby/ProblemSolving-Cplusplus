#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int arr_2[m];
    for (int i = 0; i < m; ++i) {
        cin >> arr_2[i];
    }

    int j = 0; // Pointer for arr_2
    for (int i = 0; i < n; ++i) {
        if (arr[i] == arr_2[j]) {
            ++j;
        }
        if (j == m) {
            break;
        }
    }

    if (j == m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
