#include <iostream>

using namespace std;

int main() {
    long long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    // Calculate the boundaries of the intersection
    long long start = max(l1, l2);
    long long end = min(r1, r2);

    // Check if there is an intersection
    if (start <= end) {
        cout << start << " " << end << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
