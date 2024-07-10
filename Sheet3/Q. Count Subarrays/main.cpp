#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int count = 0;
        int left = 0;

        for (int right = 0; right < n; ++right) {
            if (right > 0 && arr[right] < arr[right - 1]) {
                left = right;
            }
            count += (right - left + 1);
        }

        cout << count << endl;
    }

    return 0;
}
