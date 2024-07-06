#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        int X, Y;
        cin >> X >> Y;

        int min_ = min(X, Y);
        int max_ = max(X, Y);

        int sum = 0;
        for (int i = min_ + 1; i < max_; ++i) {
            if (i % 2 != 0) { // Check if i is odd
                sum += i;
            }
        }

        cout << sum << endl;
    }

    return 0;
}
