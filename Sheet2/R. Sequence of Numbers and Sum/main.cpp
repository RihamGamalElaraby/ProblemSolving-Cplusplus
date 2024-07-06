#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, M;

    while (cin >> N >> M) {
        if (N <= 0 || M <= 0)
            break;

        int min_ = min(N, M);
        int max_ = max(N, M);

        int sum = 0;
        for (int i = min_; i <= max_; ++i) {
            sum += i;
            cout << i;
            if (i < max_) {
                cout << " ";
            }
        }
        cout << " sum =" << sum << endl;
    }

    return 0;
}
